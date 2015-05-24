/********************************************************************************
** Form generated from reading UI file 'QQrDecoder.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QQRDECODER_H
#define UI_QQRDECODER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include "qcameracontrollerwidget.h"

QT_BEGIN_NAMESPACE

class Ui_QQrDecoder
{
public:
    QCameraControllerWidget *centralwidget;
    QPushButton *decodeButton;
    QLabel *label;

    void setupUi(QMainWindow *QQrDecoder)
    {
        if (QQrDecoder->objectName().isEmpty())
            QQrDecoder->setObjectName(QStringLiteral("QQrDecoder"));
        QQrDecoder->resize(340, 640);
        centralwidget = new QCameraControllerWidget(QQrDecoder);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        decodeButton = new QPushButton(centralwidget);
        decodeButton->setObjectName(QStringLiteral("decodeButton"));
        decodeButton->setGeometry(QRect(9, 608, 75, 23));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 90, 301, 291));
        QQrDecoder->setCentralWidget(centralwidget);

        retranslateUi(QQrDecoder);

        QMetaObject::connectSlotsByName(QQrDecoder);
    } // setupUi

    void retranslateUi(QMainWindow *QQrDecoder)
    {
        QQrDecoder->setWindowTitle(QApplication::translate("QQrDecoder", "QQrDecoder", 0));
        decodeButton->setText(QApplication::translate("QQrDecoder", "Decode", 0));
        label->setText(QApplication::translate("QQrDecoder", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class QQrDecoder: public Ui_QQrDecoder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QQRDECODER_H
