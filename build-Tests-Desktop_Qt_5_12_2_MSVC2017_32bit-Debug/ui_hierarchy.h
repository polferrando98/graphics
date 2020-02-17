/********************************************************************************
** Form generated from reading UI file 'hierarchy.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HIERARCHY_H
#define UI_HIERARCHY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Hierarchy
{
public:
    QPushButton *AddEntityBtn;
    QPushButton *RemoveEntityBtn;
    QListWidget *listWidget;

    void setupUi(QWidget *Hierarchy)
    {
        if (Hierarchy->objectName().isEmpty())
            Hierarchy->setObjectName(QString::fromUtf8("Hierarchy"));
        Hierarchy->resize(400, 300);
        AddEntityBtn = new QPushButton(Hierarchy);
        AddEntityBtn->setObjectName(QString::fromUtf8("AddEntityBtn"));
        AddEntityBtn->setGeometry(QRect(140, 250, 80, 21));
        RemoveEntityBtn = new QPushButton(Hierarchy);
        RemoveEntityBtn->setObjectName(QString::fromUtf8("RemoveEntityBtn"));
        RemoveEntityBtn->setGeometry(QRect(140, 280, 80, 21));
        listWidget = new QListWidget(Hierarchy);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(40, 40, 256, 192));

        retranslateUi(Hierarchy);

        QMetaObject::connectSlotsByName(Hierarchy);
    } // setupUi

    void retranslateUi(QWidget *Hierarchy)
    {
        Hierarchy->setWindowTitle(QApplication::translate("Hierarchy", "Form", nullptr));
        AddEntityBtn->setText(QApplication::translate("Hierarchy", "AddEntity", nullptr));
        RemoveEntityBtn->setText(QApplication::translate("Hierarchy", "RemoveEntity", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Hierarchy: public Ui_Hierarchy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIERARCHY_H
