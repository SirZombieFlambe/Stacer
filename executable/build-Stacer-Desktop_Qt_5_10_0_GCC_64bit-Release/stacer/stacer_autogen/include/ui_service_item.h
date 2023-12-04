/********************************************************************************
** Form generated from reading UI file 'service_item.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVICE_ITEM_H
#define UI_SERVICE_ITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServiceItem
{
public:
    QGridLayout *gridLayout;
    QWidget *serviceItemWidget;
    QGridLayout *serviceItemLayout;
    QLabel *lblServiceIcon;
    QLabel *lblServiceName;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkServiceRunning;
    QCheckBox *checkServiceStartup;
    QLabel *lblServiceDescription;

    void setupUi(QWidget *ServiceItem)
    {
        if (ServiceItem->objectName().isEmpty())
            ServiceItem->setObjectName(QStringLiteral("ServiceItem"));
        ServiceItem->resize(713, 45);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ServiceItem->sizePolicy().hasHeightForWidth());
        ServiceItem->setSizePolicy(sizePolicy);
        ServiceItem->setMinimumSize(QSize(0, 45));
        ServiceItem->setMaximumSize(QSize(16777215, 45));
        ServiceItem->setWindowTitle(QStringLiteral(""));
        gridLayout = new QGridLayout(ServiceItem);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        serviceItemWidget = new QWidget(ServiceItem);
        serviceItemWidget->setObjectName(QStringLiteral("serviceItemWidget"));
        serviceItemWidget->setMinimumSize(QSize(0, 45));
        serviceItemWidget->setMaximumSize(QSize(16777215, 45));
        serviceItemLayout = new QGridLayout(serviceItemWidget);
        serviceItemLayout->setObjectName(QStringLiteral("serviceItemLayout"));
        serviceItemLayout->setHorizontalSpacing(10);
        serviceItemLayout->setVerticalSpacing(0);
        serviceItemLayout->setContentsMargins(15, -1, 10, -1);
        lblServiceIcon = new QLabel(serviceItemWidget);
        lblServiceIcon->setObjectName(QStringLiteral("lblServiceIcon"));
        lblServiceIcon->setMinimumSize(QSize(25, 25));
        lblServiceIcon->setMaximumSize(QSize(25, 25));
        lblServiceIcon->setScaledContents(true);

        serviceItemLayout->addWidget(lblServiceIcon, 0, 0, 1, 1);

        lblServiceName = new QLabel(serviceItemWidget);
        lblServiceName->setObjectName(QStringLiteral("lblServiceName"));
        lblServiceName->setStyleSheet(QStringLiteral(""));
        lblServiceName->setText(QStringLiteral("Service Name"));

        serviceItemLayout->addWidget(lblServiceName, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        serviceItemLayout->addItem(horizontalSpacer_2, 0, 5, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        serviceItemLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

        checkServiceRunning = new QCheckBox(serviceItemWidget);
        checkServiceRunning->setObjectName(QStringLiteral("checkServiceRunning"));
        checkServiceRunning->setCursor(QCursor(Qt::PointingHandCursor));
        checkServiceRunning->setFocusPolicy(Qt::NoFocus);

        serviceItemLayout->addWidget(checkServiceRunning, 0, 6, 1, 1, Qt::AlignVCenter);

        checkServiceStartup = new QCheckBox(serviceItemWidget);
        checkServiceStartup->setObjectName(QStringLiteral("checkServiceStartup"));
        checkServiceStartup->setCursor(QCursor(Qt::PointingHandCursor));
        checkServiceStartup->setFocusPolicy(Qt::NoFocus);

        serviceItemLayout->addWidget(checkServiceStartup, 0, 4, 1, 1, Qt::AlignVCenter);

        lblServiceDescription = new QLabel(serviceItemWidget);
        lblServiceDescription->setObjectName(QStringLiteral("lblServiceDescription"));
        lblServiceDescription->setText(QStringLiteral("Description"));

        serviceItemLayout->addWidget(lblServiceDescription, 0, 2, 1, 1);


        gridLayout->addWidget(serviceItemWidget, 0, 1, 1, 1, Qt::AlignTop);


        retranslateUi(ServiceItem);

        QMetaObject::connectSlotsByName(ServiceItem);
    } // setupUi

    void retranslateUi(QWidget *ServiceItem)
    {
        lblServiceIcon->setText(QString());
        checkServiceRunning->setText(QString());
        checkServiceStartup->setText(QString());
        Q_UNUSED(ServiceItem);
    } // retranslateUi

};

namespace Ui {
    class ServiceItem: public Ui_ServiceItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVICE_ITEM_H
