/********************************************************************************
** Form generated from reading UI file 'uninstallerpage.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNINSTALLERPAGE_H
#define UI_UNINSTALLERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UninstallerPage
{
public:
    QGridLayout *gridLayout;
    QLabel *lblLoadingUninstaller;
    QSpacerItem *verticalSpacer;
    QLineEdit *txtPackageSearch;
    QLabel *lblPackagesTitle;
    QPushButton *btnUninstall;
    QWidget *notFoundWidget;
    QVBoxLayout *notFoundLayout;
    QLabel *lblNotFound;
    QListWidget *listWidgetPackages;

    void setupUi(QWidget *UninstallerPage)
    {
        if (UninstallerPage->objectName().isEmpty())
            UninstallerPage->setObjectName(QStringLiteral("UninstallerPage"));
        UninstallerPage->resize(844, 635);
        gridLayout = new QGridLayout(UninstallerPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(5);
        gridLayout->setContentsMargins(30, 5, 30, 20);
        lblLoadingUninstaller = new QLabel(UninstallerPage);
        lblLoadingUninstaller->setObjectName(QStringLiteral("lblLoadingUninstaller"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblLoadingUninstaller->sizePolicy().hasHeightForWidth());
        lblLoadingUninstaller->setSizePolicy(sizePolicy);
        lblLoadingUninstaller->setText(QStringLiteral(""));

        gridLayout->addWidget(lblLoadingUninstaller, 5, 0, 1, 3, Qt::AlignHCenter|Qt::AlignBottom);

        verticalSpacer = new QSpacerItem(0, 17, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 3);

        txtPackageSearch = new QLineEdit(UninstallerPage);
        txtPackageSearch->setObjectName(QStringLiteral("txtPackageSearch"));
        txtPackageSearch->setMinimumSize(QSize(170, 0));
        txtPackageSearch->setMaximumSize(QSize(170, 16777215));
        QFont font;
        font.setPointSize(10);
        txtPackageSearch->setFont(font);
        txtPackageSearch->setFocusPolicy(Qt::StrongFocus);
        txtPackageSearch->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(txtPackageSearch, 0, 2, 1, 1, Qt::AlignRight);

        lblPackagesTitle = new QLabel(UninstallerPage);
        lblPackagesTitle->setObjectName(QStringLiteral("lblPackagesTitle"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblPackagesTitle->sizePolicy().hasHeightForWidth());
        lblPackagesTitle->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QStringLiteral("Ubuntu"));
        font1.setPointSize(11);
        font1.setItalic(false);
        lblPackagesTitle->setFont(font1);
        lblPackagesTitle->setStyleSheet(QStringLiteral(""));
        lblPackagesTitle->setText(QStringLiteral("System Installed Packages"));

        gridLayout->addWidget(lblPackagesTitle, 0, 0, 1, 1, Qt::AlignLeft);

        btnUninstall = new QPushButton(UninstallerPage);
        btnUninstall->setObjectName(QStringLiteral("btnUninstall"));
        btnUninstall->setEnabled(true);
        QFont font2;
        font2.setFamily(QStringLiteral("Ubuntu"));
        btnUninstall->setFont(font2);
        btnUninstall->setCursor(QCursor(Qt::PointingHandCursor));
        btnUninstall->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        btnUninstall->setAccessibleName(QStringLiteral("primary"));
#endif // QT_NO_ACCESSIBILITY
        btnUninstall->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(btnUninstall, 4, 0, 1, 3, Qt::AlignHCenter);

        notFoundWidget = new QWidget(UninstallerPage);
        notFoundWidget->setObjectName(QStringLiteral("notFoundWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(notFoundWidget->sizePolicy().hasHeightForWidth());
        notFoundWidget->setSizePolicy(sizePolicy2);
        notFoundWidget->setMinimumSize(QSize(0, 200));
        notFoundWidget->setMaximumSize(QSize(16777215, 200));
        notFoundWidget->setStyleSheet(QStringLiteral(""));
        notFoundLayout = new QVBoxLayout(notFoundWidget);
        notFoundLayout->setSpacing(0);
        notFoundLayout->setObjectName(QStringLiteral("notFoundLayout"));
        notFoundLayout->setContentsMargins(0, 0, 0, 0);
        lblNotFound = new QLabel(notFoundWidget);
        lblNotFound->setObjectName(QStringLiteral("lblNotFound"));
        sizePolicy2.setHeightForWidth(lblNotFound->sizePolicy().hasHeightForWidth());
        lblNotFound->setSizePolicy(sizePolicy2);

        notFoundLayout->addWidget(lblNotFound, 0, Qt::AlignHCenter|Qt::AlignBottom);


        gridLayout->addWidget(notFoundWidget, 1, 0, 1, 3, Qt::AlignVCenter);

        listWidgetPackages = new QListWidget(UninstallerPage);
        listWidgetPackages->setObjectName(QStringLiteral("listWidgetPackages"));
        QFont font3;
        font3.setFamily(QStringLiteral("Ubuntu"));
        font3.setPointSize(10);
        listWidgetPackages->setFont(font3);
        listWidgetPackages->setFocusPolicy(Qt::NoFocus);
        listWidgetPackages->setStyleSheet(QStringLiteral(""));
        listWidgetPackages->setAutoScrollMargin(10);
        listWidgetPackages->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidgetPackages->setSelectionMode(QAbstractItemView::NoSelection);
        listWidgetPackages->setSelectionBehavior(QAbstractItemView::SelectRows);
        listWidgetPackages->setIconSize(QSize(20, 20));
        listWidgetPackages->setTextElideMode(Qt::ElideMiddle);
        listWidgetPackages->setSpacing(4);
        listWidgetPackages->setUniformItemSizes(false);

        gridLayout->addWidget(listWidgetPackages, 2, 0, 1, 3);


        retranslateUi(UninstallerPage);

        QMetaObject::connectSlotsByName(UninstallerPage);
    } // setupUi

    void retranslateUi(QWidget *UninstallerPage)
    {
        UninstallerPage->setWindowTitle(QApplication::translate("UninstallerPage", "Uninstaller", nullptr));
        txtPackageSearch->setPlaceholderText(QApplication::translate("UninstallerPage", "Search...", nullptr));
        btnUninstall->setText(QApplication::translate("UninstallerPage", "Uninstall Selected", nullptr));
        lblNotFound->setText(QApplication::translate("UninstallerPage", "Not Found Installed Packages", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UninstallerPage: public Ui_UninstallerPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNINSTALLERPAGE_H
