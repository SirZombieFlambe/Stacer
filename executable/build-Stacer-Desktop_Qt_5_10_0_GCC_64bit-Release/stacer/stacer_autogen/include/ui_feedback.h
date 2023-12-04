/********************************************************************************
** Form generated from reading UI file 'feedback.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEEDBACK_H
#define UI_FEEDBACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Feedback
{
public:
    QGridLayout *gridLayout;
    QLineEdit *txtName;
    QLineEdit *txtEmail;
    QLabel *lblErrorMsg;
    QPushButton *btnSend;
    QSpacerItem *verticalSpacer;
    QPlainTextEdit *txtMessage;
    QLabel *lblTitle;

    void setupUi(QDialog *Feedback)
    {
        if (Feedback->objectName().isEmpty())
            Feedback->setObjectName(QStringLiteral("Feedback"));
        Feedback->resize(476, 350);
        Feedback->setModal(true);
        gridLayout = new QGridLayout(Feedback);
        gridLayout->setSpacing(15);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(30, 20, 30, 20);
        txtName = new QLineEdit(Feedback);
        txtName->setObjectName(QStringLiteral("txtName"));

        gridLayout->addWidget(txtName, 1, 0, 1, 3);

        txtEmail = new QLineEdit(Feedback);
        txtEmail->setObjectName(QStringLiteral("txtEmail"));

        gridLayout->addWidget(txtEmail, 2, 0, 1, 3);

        lblErrorMsg = new QLabel(Feedback);
        lblErrorMsg->setObjectName(QStringLiteral("lblErrorMsg"));

        gridLayout->addWidget(lblErrorMsg, 4, 0, 1, 2);

        btnSend = new QPushButton(Feedback);
        btnSend->setObjectName(QStringLiteral("btnSend"));
        btnSend->setCursor(QCursor(Qt::PointingHandCursor));
        btnSend->setFocusPolicy(Qt::NoFocus);
#ifndef QT_NO_ACCESSIBILITY
        btnSend->setAccessibleName(QStringLiteral("primary"));
#endif // QT_NO_ACCESSIBILITY

        gridLayout->addWidget(btnSend, 4, 2, 1, 1);

        verticalSpacer = new QSpacerItem(359, 2, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 3);

        txtMessage = new QPlainTextEdit(Feedback);
        txtMessage->setObjectName(QStringLiteral("txtMessage"));

        gridLayout->addWidget(txtMessage, 3, 0, 1, 3);

        lblTitle = new QLabel(Feedback);
        lblTitle->setObjectName(QStringLiteral("lblTitle"));
#ifndef QT_NO_ACCESSIBILITY
        lblTitle->setAccessibleName(QStringLiteral("dialog-title"));
#endif // QT_NO_ACCESSIBILITY
        lblTitle->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblTitle, 0, 0, 1, 3);

        QWidget::setTabOrder(txtName, txtEmail);
        QWidget::setTabOrder(txtEmail, txtMessage);

        retranslateUi(Feedback);

        btnSend->setDefault(true);


        QMetaObject::connectSlotsByName(Feedback);
    } // setupUi

    void retranslateUi(QDialog *Feedback)
    {
        Feedback->setWindowTitle(QApplication::translate("Feedback", "Feedback", nullptr));
        txtName->setPlaceholderText(QApplication::translate("Feedback", "Name", nullptr));
        txtEmail->setPlaceholderText(QApplication::translate("Feedback", "Email Address", nullptr));
        lblErrorMsg->setText(QString());
        btnSend->setText(QApplication::translate("Feedback", "Send", nullptr));
        txtMessage->setPlaceholderText(QApplication::translate("Feedback", "Message", nullptr));
        lblTitle->setText(QApplication::translate("Feedback", "Send a Feedback", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Feedback: public Ui_Feedback {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEEDBACK_H
