#ifndef PROCESSESPAGE_H
#define PROCESSESPAGE_H

#include <QWidget>
#include <QStandardItemModel>
#include <QSortFilterProxyModel>
#include <QDebug>
#include <QScrollBar>
#include <QTimer>
#include <QMenu>
#include <QAction>
#include <QPushButton>
#include <unordered_map>

#include "Managers/info_manager.h"

#include <QPainter>
#include <QStyledItemDelegate>


namespace Ui {
    class ProcessesPage;
}

class ProcessesPage : public QWidget
{
    Q_OBJECT

public:
    explicit ProcessesPage(QWidget *parent = 0);
    ~ProcessesPage();
    static void onLimitProcessConfirm(int limitValue, QString currentOptionName);


private slots:
    void init();
    void loadProcesses();
    void loadHeaderMenu();
    QList<QStandardItem *> createRow(const Process &proc);
    void on_txtProcessSearch_textChanged(const QString &val);
    void on_sliderRefresh_valueChanged(const int &i);
    void on_btnLimitProcess_clicked(); // ui file: line 205
    void on_btnRemoveLimit_clicked(); // ui file: line 221
    void on_btnEndProcess_clicked(); // ui file: line 237
    void on_btnSetCPUPriority_clicked();
    void on_tableProcess_customContextMenuRequested(const QPoint &pos);
    QColor determineNicenessColor(int niceness);
    void updateNicenessColor(pid_t pid, int niceness);

private:
    Ui::ProcessesPage *ui;
    QStandardItemModel *mItemModel;
    QSortFilterProxyModel *mSortFilterModel;
    QModelIndex mSeletedRowModel;
    QStringList mHeaders;
    QMenu mHeaderMenu;
    QTimer *mTimer;
    InfoManager *im;
    int limitPass;
    bool needReselect = false;
};


class NicenessDelegate : public QStyledItemDelegate
{
public:
    NicenessDelegate(QObject* parent = nullptr)
        : QStyledItemDelegate(parent)
    {}

    void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const
    {
        QStyleOptionViewItem opt = option;
        initStyleOption(&opt, index);

        // Draw the colored circle based on the background color
        painter->setRenderHint(QPainter::Antialiasing, true);

        // Use the background color from the model index
        QColor backgroundColor = index.data(Qt::BackgroundColorRole).value<QColor>();
        painter->setBrush(backgroundColor);

        // Use a contrasting color for the pen
        QColor penColor = backgroundColor.lightnessF() > 0.5 ? Qt::black : Qt::white;
        painter->setPen(penColor);

        // Calculate the rectangle for the circle
        QRectF circleRect = QRectF(opt.rect.adjusted(4, 4, -4, -4));

        // Draw the ellipse
        painter->drawEllipse(circleRect);
    }
};




#endif // PROCESSESPAGE_H
