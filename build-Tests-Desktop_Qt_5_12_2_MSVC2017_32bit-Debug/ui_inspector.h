/********************************************************************************
** Form generated from reading UI file 'inspector.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSPECTOR_H
#define UI_INSPECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Inspector
{
public:
    QGridLayout *gridLayout;
    QDoubleSpinBox *PosY;
    QDoubleSpinBox *PosZ;
    QDoubleSpinBox *ScalZ;
    QDoubleSpinBox *ScalX;
    QDoubleSpinBox *RotY;
    QDoubleSpinBox *PosX;
    QDoubleSpinBox *RotZ;
    QDoubleSpinBox *ScalY;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QDoubleSpinBox *RotX;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *Inspector)
    {
        if (Inspector->objectName().isEmpty())
            Inspector->setObjectName(QString::fromUtf8("Inspector"));
        Inspector->resize(721, 471);
        gridLayout = new QGridLayout(Inspector);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        PosY = new QDoubleSpinBox(Inspector);
        PosY->setObjectName(QString::fromUtf8("PosY"));

        gridLayout->addWidget(PosY, 1, 2, 1, 1);

        PosZ = new QDoubleSpinBox(Inspector);
        PosZ->setObjectName(QString::fromUtf8("PosZ"));

        gridLayout->addWidget(PosZ, 1, 3, 1, 1);

        ScalZ = new QDoubleSpinBox(Inspector);
        ScalZ->setObjectName(QString::fromUtf8("ScalZ"));

        gridLayout->addWidget(ScalZ, 3, 3, 1, 1);

        ScalX = new QDoubleSpinBox(Inspector);
        ScalX->setObjectName(QString::fromUtf8("ScalX"));

        gridLayout->addWidget(ScalX, 3, 1, 1, 1);

        RotY = new QDoubleSpinBox(Inspector);
        RotY->setObjectName(QString::fromUtf8("RotY"));

        gridLayout->addWidget(RotY, 2, 2, 1, 1);

        PosX = new QDoubleSpinBox(Inspector);
        PosX->setObjectName(QString::fromUtf8("PosX"));

        gridLayout->addWidget(PosX, 1, 1, 1, 1);

        RotZ = new QDoubleSpinBox(Inspector);
        RotZ->setObjectName(QString::fromUtf8("RotZ"));

        gridLayout->addWidget(RotZ, 2, 3, 1, 1);

        ScalY = new QDoubleSpinBox(Inspector);
        ScalY->setObjectName(QString::fromUtf8("ScalY"));

        gridLayout->addWidget(ScalY, 3, 2, 1, 1);

        label_3 = new QLabel(Inspector);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);

        label_2 = new QLabel(Inspector);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        RotX = new QDoubleSpinBox(Inspector);
        RotX->setObjectName(QString::fromUtf8("RotX"));

        gridLayout->addWidget(RotX, 2, 1, 1, 1);

        label = new QLabel(Inspector);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        label_4 = new QLabel(Inspector);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 1, 1, 1);

        label_5 = new QLabel(Inspector);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 2, 1, 1);

        label_6 = new QLabel(Inspector);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 0, 3, 1, 1);


        retranslateUi(Inspector);

        QMetaObject::connectSlotsByName(Inspector);
    } // setupUi

    void retranslateUi(QWidget *Inspector)
    {
        Inspector->setWindowTitle(QApplication::translate("Inspector", "Form", nullptr));
        label_3->setText(QApplication::translate("Inspector", "Position", nullptr));
        label_2->setText(QApplication::translate("Inspector", "Rotation", nullptr));
        label->setText(QApplication::translate("Inspector", "Scale", nullptr));
        label_4->setText(QApplication::translate("Inspector", "X", nullptr));
        label_5->setText(QApplication::translate("Inspector", "Y", nullptr));
        label_6->setText(QApplication::translate("Inspector", "Z", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Inspector: public Ui_Inspector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSPECTOR_H
