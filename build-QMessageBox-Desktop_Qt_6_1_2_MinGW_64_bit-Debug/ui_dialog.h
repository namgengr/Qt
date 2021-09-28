/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton_About;
    QPushButton *pushButton_AboutQt;
    QPushButton *pushButton_Critical;
    QPushButton *pushButton_Information;
    QPushButton *pushButton_Warning;
    QPushButton *pushButton_Question;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(270, 169);
        pushButton_About = new QPushButton(Dialog);
        pushButton_About->setObjectName(QString::fromUtf8("pushButton_About"));
        pushButton_About->setGeometry(QRect(20, 10, 80, 22));
        pushButton_AboutQt = new QPushButton(Dialog);
        pushButton_AboutQt->setObjectName(QString::fromUtf8("pushButton_AboutQt"));
        pushButton_AboutQt->setGeometry(QRect(20, 40, 80, 22));
        pushButton_Critical = new QPushButton(Dialog);
        pushButton_Critical->setObjectName(QString::fromUtf8("pushButton_Critical"));
        pushButton_Critical->setGeometry(QRect(20, 70, 80, 22));
        pushButton_Information = new QPushButton(Dialog);
        pushButton_Information->setObjectName(QString::fromUtf8("pushButton_Information"));
        pushButton_Information->setGeometry(QRect(140, 10, 80, 22));
        pushButton_Warning = new QPushButton(Dialog);
        pushButton_Warning->setObjectName(QString::fromUtf8("pushButton_Warning"));
        pushButton_Warning->setGeometry(QRect(140, 40, 80, 22));
        pushButton_Question = new QPushButton(Dialog);
        pushButton_Question->setObjectName(QString::fromUtf8("pushButton_Question"));
        pushButton_Question->setGeometry(QRect(140, 70, 80, 22));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        pushButton_About->setText(QCoreApplication::translate("Dialog", "About", nullptr));
        pushButton_AboutQt->setText(QCoreApplication::translate("Dialog", "AboutQt", nullptr));
        pushButton_Critical->setText(QCoreApplication::translate("Dialog", "Critical", nullptr));
        pushButton_Information->setText(QCoreApplication::translate("Dialog", "Information", nullptr));
        pushButton_Warning->setText(QCoreApplication::translate("Dialog", "Warning", nullptr));
        pushButton_Question->setText(QCoreApplication::translate("Dialog", "Question", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
