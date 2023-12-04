/********************************************************************************
** Form generated from reading UI file 'system_cleaner_page.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEM_CLEANER_PAGE_H
#define UI_SYSTEM_CLEANER_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SystemCleanerPage
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *cleanerCategories;
    QGridLayout *gridLayout_3;
    QLabel *lblCrashReports;
    QLabel *lblCrashReportsImg;
    QCheckBox *checkAppCache;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lblAppCacheImg;
    QLabel *lblAppLog;
    QLabel *lblTrashImg;
    QLabel *lblAppCache;
    QLabel *lblPackageCacheImg;
    QCheckBox *checkTrash;
    QCheckBox *checkCrashReports;
    QPushButton *btnScan;
    QSpacerItem *verticalSpacer_5;
    QCheckBox *checkPackageCache;
    QLabel *lblTrash;
    QLabel *lblLogImage;
    QLabel *lblPackageCache;
    QCheckBox *checkAppLog;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QLabel *lblLoadingScanner;
    QWidget *cleanerPage;
    QVBoxLayout *verticalLayout_2;
    QWidget *widgetCleaner;
    QGridLayout *gridLayout;
    QPushButton *btnBackToCategories;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_4;
    QTreeWidget *treeWidgetScanResult;
    QPushButton *btnClean;
    QLabel *lblRemovedTotalSize;
    QLabel *lblLoadingCleaner;

    void setupUi(QWidget *SystemCleanerPage)
    {
        if (SystemCleanerPage->objectName().isEmpty())
            SystemCleanerPage->setObjectName(QStringLiteral("SystemCleanerPage"));
        SystemCleanerPage->resize(784, 507);
        verticalLayout = new QVBoxLayout(SystemCleanerPage);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(15, 0, 15, 15);
        stackedWidget = new QStackedWidget(SystemCleanerPage);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setStyleSheet(QStringLiteral(""));
        cleanerCategories = new QWidget();
        cleanerCategories->setObjectName(QStringLiteral("cleanerCategories"));
        gridLayout_3 = new QGridLayout(cleanerCategories);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(40);
        gridLayout_3->setVerticalSpacing(20);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        lblCrashReports = new QLabel(cleanerCategories);
        lblCrashReports->setObjectName(QStringLiteral("lblCrashReports"));
        lblCrashReports->setAlignment(Qt::AlignCenter);
        lblCrashReports->setWordWrap(true);

        gridLayout_3->addWidget(lblCrashReports, 2, 3, 1, 1, Qt::AlignHCenter);

        lblCrashReportsImg = new QLabel(cleanerCategories);
        lblCrashReportsImg->setObjectName(QStringLiteral("lblCrashReportsImg"));
        lblCrashReportsImg->setMinimumSize(QSize(90, 90));
        lblCrashReportsImg->setMaximumSize(QSize(90, 90));
        lblCrashReportsImg->setPixmap(QPixmap(QString::fromUtf8(":/static/themes/default/img/c_crash.png")));
        lblCrashReportsImg->setScaledContents(false);
        lblCrashReportsImg->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblCrashReportsImg, 1, 3, 1, 1, Qt::AlignHCenter|Qt::AlignTop);

        checkAppCache = new QCheckBox(cleanerCategories);
        checkAppCache->setObjectName(QStringLiteral("checkAppCache"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(checkAppCache->sizePolicy().hasHeightForWidth());
        checkAppCache->setSizePolicy(sizePolicy);
        checkAppCache->setCursor(QCursor(Qt::PointingHandCursor));
        checkAppCache->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        checkAppCache->setAccessibleName(QStringLiteral("circle"));
#endif // QT_NO_ACCESSIBILITY

        gridLayout_3->addWidget(checkAppCache, 3, 5, 1, 1, Qt::AlignHCenter);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_4, 7, 2, 1, 5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        lblAppCacheImg = new QLabel(cleanerCategories);
        lblAppCacheImg->setObjectName(QStringLiteral("lblAppCacheImg"));
        lblAppCacheImg->setMinimumSize(QSize(90, 90));
        lblAppCacheImg->setMaximumSize(QSize(90, 90));
        lblAppCacheImg->setPixmap(QPixmap(QString::fromUtf8(":/static/themes/default/img/c_cache.png")));
        lblAppCacheImg->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblAppCacheImg, 1, 5, 1, 1, Qt::AlignHCenter);

        lblAppLog = new QLabel(cleanerCategories);
        lblAppLog->setObjectName(QStringLiteral("lblAppLog"));
        lblAppLog->setAlignment(Qt::AlignCenter);
        lblAppLog->setWordWrap(true);

        gridLayout_3->addWidget(lblAppLog, 2, 4, 1, 1, Qt::AlignHCenter);

        lblTrashImg = new QLabel(cleanerCategories);
        lblTrashImg->setObjectName(QStringLiteral("lblTrashImg"));
        lblTrashImg->setMinimumSize(QSize(90, 90));
        lblTrashImg->setMaximumSize(QSize(90, 90));
        lblTrashImg->setPixmap(QPixmap(QString::fromUtf8(":/static/themes/default/img/c_trash.png")));
        lblTrashImg->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblTrashImg, 1, 6, 1, 1, Qt::AlignHCenter);

        lblAppCache = new QLabel(cleanerCategories);
        lblAppCache->setObjectName(QStringLiteral("lblAppCache"));
        lblAppCache->setAlignment(Qt::AlignCenter);
        lblAppCache->setWordWrap(true);

        gridLayout_3->addWidget(lblAppCache, 2, 5, 1, 1, Qt::AlignHCenter);

        lblPackageCacheImg = new QLabel(cleanerCategories);
        lblPackageCacheImg->setObjectName(QStringLiteral("lblPackageCacheImg"));
        lblPackageCacheImg->setMinimumSize(QSize(90, 90));
        lblPackageCacheImg->setMaximumSize(QSize(90, 90));
        lblPackageCacheImg->setTextFormat(Qt::AutoText);
        lblPackageCacheImg->setPixmap(QPixmap(QString::fromUtf8(":/static/themes/default/img/c_package.png")));
        lblPackageCacheImg->setScaledContents(false);
        lblPackageCacheImg->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblPackageCacheImg, 1, 2, 1, 1, Qt::AlignHCenter);

        checkTrash = new QCheckBox(cleanerCategories);
        checkTrash->setObjectName(QStringLiteral("checkTrash"));
        sizePolicy.setHeightForWidth(checkTrash->sizePolicy().hasHeightForWidth());
        checkTrash->setSizePolicy(sizePolicy);
        checkTrash->setCursor(QCursor(Qt::PointingHandCursor));
        checkTrash->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        checkTrash->setAccessibleName(QStringLiteral("circle"));
#endif // QT_NO_ACCESSIBILITY

        gridLayout_3->addWidget(checkTrash, 3, 6, 1, 1, Qt::AlignHCenter);

        checkCrashReports = new QCheckBox(cleanerCategories);
        checkCrashReports->setObjectName(QStringLiteral("checkCrashReports"));
        sizePolicy.setHeightForWidth(checkCrashReports->sizePolicy().hasHeightForWidth());
        checkCrashReports->setSizePolicy(sizePolicy);
        checkCrashReports->setCursor(QCursor(Qt::PointingHandCursor));
        checkCrashReports->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        checkCrashReports->setAccessibleName(QStringLiteral("circle"));
#endif // QT_NO_ACCESSIBILITY

        gridLayout_3->addWidget(checkCrashReports, 3, 3, 1, 1, Qt::AlignHCenter);

        btnScan = new QPushButton(cleanerCategories);
        btnScan->setObjectName(QStringLiteral("btnScan"));
        btnScan->setMinimumSize(QSize(100, 100));
        btnScan->setCursor(QCursor(Qt::PointingHandCursor));
        btnScan->setFocusPolicy(Qt::NoFocus);
        btnScan->setIconSize(QSize(100, 100));

        gridLayout_3->addWidget(btnScan, 5, 4, 1, 1, Qt::AlignHCenter);

        verticalSpacer_5 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_5, 4, 4, 1, 1);

        checkPackageCache = new QCheckBox(cleanerCategories);
        checkPackageCache->setObjectName(QStringLiteral("checkPackageCache"));
        sizePolicy.setHeightForWidth(checkPackageCache->sizePolicy().hasHeightForWidth());
        checkPackageCache->setSizePolicy(sizePolicy);
        checkPackageCache->setCursor(QCursor(Qt::PointingHandCursor));
        checkPackageCache->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        checkPackageCache->setAccessibleName(QStringLiteral("circle"));
#endif // QT_NO_ACCESSIBILITY

        gridLayout_3->addWidget(checkPackageCache, 3, 2, 1, 1, Qt::AlignHCenter);

        lblTrash = new QLabel(cleanerCategories);
        lblTrash->setObjectName(QStringLiteral("lblTrash"));
        lblTrash->setAlignment(Qt::AlignCenter);
        lblTrash->setWordWrap(true);

        gridLayout_3->addWidget(lblTrash, 2, 6, 1, 1, Qt::AlignHCenter);

        lblLogImage = new QLabel(cleanerCategories);
        lblLogImage->setObjectName(QStringLiteral("lblLogImage"));
        lblLogImage->setMinimumSize(QSize(90, 90));
        lblLogImage->setMaximumSize(QSize(90, 90));
        lblLogImage->setPixmap(QPixmap(QString::fromUtf8(":/static/themes/default/img/c_logs.png")));
        lblLogImage->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblLogImage, 1, 4, 1, 1, Qt::AlignHCenter|Qt::AlignTop);

        lblPackageCache = new QLabel(cleanerCategories);
        lblPackageCache->setObjectName(QStringLiteral("lblPackageCache"));
        lblPackageCache->setAlignment(Qt::AlignCenter);
        lblPackageCache->setWordWrap(true);

        gridLayout_3->addWidget(lblPackageCache, 2, 2, 1, 1, Qt::AlignHCenter);

        checkAppLog = new QCheckBox(cleanerCategories);
        checkAppLog->setObjectName(QStringLiteral("checkAppLog"));
        sizePolicy.setHeightForWidth(checkAppLog->sizePolicy().hasHeightForWidth());
        checkAppLog->setSizePolicy(sizePolicy);
        checkAppLog->setCursor(QCursor(Qt::PointingHandCursor));
        checkAppLog->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        checkAppLog->setAccessibleName(QStringLiteral("circle"));
#endif // QT_NO_ACCESSIBILITY

        gridLayout_3->addWidget(checkAppLog, 3, 4, 1, 1, Qt::AlignHCenter);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 1, 8, 1, 1);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 0, 4, 1, 1);

        lblLoadingScanner = new QLabel(cleanerCategories);
        lblLoadingScanner->setObjectName(QStringLiteral("lblLoadingScanner"));
        lblLoadingScanner->setMinimumSize(QSize(100, 100));

        gridLayout_3->addWidget(lblLoadingScanner, 6, 4, 1, 1, Qt::AlignHCenter);

        stackedWidget->addWidget(cleanerCategories);
        cleanerPage = new QWidget();
        cleanerPage->setObjectName(QStringLiteral("cleanerPage"));
        verticalLayout_2 = new QVBoxLayout(cleanerPage);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 5, 0, 0);
        widgetCleaner = new QWidget(cleanerPage);
        widgetCleaner->setObjectName(QStringLiteral("widgetCleaner"));
        gridLayout = new QGridLayout(widgetCleaner);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setVerticalSpacing(10);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnBackToCategories = new QPushButton(widgetCleaner);
        btnBackToCategories->setObjectName(QStringLiteral("btnBackToCategories"));
        btnBackToCategories->setCursor(QCursor(Qt::PointingHandCursor));
        btnBackToCategories->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QStringLiteral(":/static/themes/default/img/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnBackToCategories->setIcon(icon);
        btnBackToCategories->setIconSize(QSize(20, 20));

        gridLayout->addWidget(btnBackToCategories, 0, 0, 1, 1, Qt::AlignLeft);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 3, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 3, 0, 1, 1);

        treeWidgetScanResult = new QTreeWidget(widgetCleaner);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidgetScanResult->setHeaderItem(__qtreewidgetitem);
        treeWidgetScanResult->setObjectName(QStringLiteral("treeWidgetScanResult"));
        QFont font;
        font.setStyleStrategy(QFont::PreferAntialias);
        treeWidgetScanResult->setFont(font);
        treeWidgetScanResult->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        treeWidgetScanResult->setFocusPolicy(Qt::NoFocus);
        treeWidgetScanResult->setStyleSheet(QStringLiteral(""));
        treeWidgetScanResult->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeWidgetScanResult->setSelectionMode(QAbstractItemView::NoSelection);
        treeWidgetScanResult->setTextElideMode(Qt::ElideMiddle);
        treeWidgetScanResult->setHorizontalScrollMode(QAbstractItemView::ScrollPerItem);
        treeWidgetScanResult->setAnimated(true);
        treeWidgetScanResult->header()->setVisible(false);

        gridLayout->addWidget(treeWidgetScanResult, 1, 0, 2, 4);

        btnClean = new QPushButton(widgetCleaner);
        btnClean->setObjectName(QStringLiteral("btnClean"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnClean->sizePolicy().hasHeightForWidth());
        btnClean->setSizePolicy(sizePolicy1);
        btnClean->setMinimumSize(QSize(100, 100));
        btnClean->setMaximumSize(QSize(100, 100));
        btnClean->setCursor(QCursor(Qt::PointingHandCursor));
        btnClean->setFocusPolicy(Qt::NoFocus);
        btnClean->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(btnClean, 3, 1, 1, 1, Qt::AlignHCenter);

        lblRemovedTotalSize = new QLabel(widgetCleaner);
        lblRemovedTotalSize->setObjectName(QStringLiteral("lblRemovedTotalSize"));
        lblRemovedTotalSize->setMinimumSize(QSize(20, 0));
        lblRemovedTotalSize->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(lblRemovedTotalSize, 0, 1, 1, 1, Qt::AlignHCenter);

        lblLoadingCleaner = new QLabel(widgetCleaner);
        lblLoadingCleaner->setObjectName(QStringLiteral("lblLoadingCleaner"));
        lblLoadingCleaner->setMinimumSize(QSize(100, 20));
        lblLoadingCleaner->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(lblLoadingCleaner, 4, 1, 1, 1);


        verticalLayout_2->addWidget(widgetCleaner);

        stackedWidget->addWidget(cleanerPage);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(SystemCleanerPage);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SystemCleanerPage);
    } // setupUi

    void retranslateUi(QWidget *SystemCleanerPage)
    {
        SystemCleanerPage->setWindowTitle(QApplication::translate("SystemCleanerPage", "System Cleaner", nullptr));
        lblCrashReports->setText(QApplication::translate("SystemCleanerPage", "Crash Reports", nullptr));
        lblCrashReportsImg->setText(QString());
        checkAppCache->setText(QString());
        lblAppCacheImg->setText(QString());
        lblAppLog->setText(QApplication::translate("SystemCleanerPage", "Application Logs", nullptr));
        lblTrashImg->setText(QString());
        lblAppCache->setText(QApplication::translate("SystemCleanerPage", "Application Caches", nullptr));
        checkTrash->setText(QString());
        checkCrashReports->setText(QString());
        btnScan->setText(QString());
        checkPackageCache->setText(QString());
        lblTrash->setText(QApplication::translate("SystemCleanerPage", "Trash", nullptr));
        lblLogImage->setText(QString());
        lblPackageCache->setText(QApplication::translate("SystemCleanerPage", "Package Caches", nullptr));
        checkAppLog->setText(QString());
        lblLoadingScanner->setText(QString());
        btnBackToCategories->setText(QApplication::translate("SystemCleanerPage", " Back", nullptr));
        btnClean->setText(QString());
        lblRemovedTotalSize->setText(QString());
        lblLoadingCleaner->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SystemCleanerPage: public Ui_SystemCleanerPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEM_CLEANER_PAGE_H
