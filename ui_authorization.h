/********************************************************************************
** Form generated from reading UI file 'authorization.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATION_H
#define UI_AUTHORIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Authorization
{
public:
    QLabel *label;
    QComboBox *names;
    QPushButton *okBtn;
    QPushButton *newPlayerBtn;
    QTextEdit *newName;
    QPushButton *addPlayerBtn;
    QPushButton *deleteBtn;

    void setupUi(QWidget *Authorization)
    {
        if (Authorization->objectName().isEmpty())
            Authorization->setObjectName(QStringLiteral("Authorization"));
        Authorization->resize(601, 414);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Authorization->sizePolicy().hasHeightForWidth());
        Authorization->setSizePolicy(sizePolicy);
        Authorization->setMinimumSize(QSize(601, 414));
        Authorization->setContextMenuPolicy(Qt::DefaultContextMenu);
        label = new QLabel(Authorization);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 10, 269, 35));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        names = new QComboBox(Authorization);
        names->setObjectName(QStringLiteral("names"));
        names->setGeometry(QRect(140, 70, 269, 25));
        QFont font1;
        font1.setPointSize(12);
        names->setFont(font1);
        okBtn = new QPushButton(Authorization);
        okBtn->setObjectName(QStringLiteral("okBtn"));
        okBtn->setGeometry(QRect(220, 110, 121, 31));
        okBtn->setFont(font1);
        newPlayerBtn = new QPushButton(Authorization);
        newPlayerBtn->setObjectName(QStringLiteral("newPlayerBtn"));
        newPlayerBtn->setGeometry(QRect(220, 190, 121, 31));
        newPlayerBtn->setFont(font1);
        newName = new QTextEdit(Authorization);
        newName->setObjectName(QStringLiteral("newName"));
        newName->setGeometry(QRect(140, 290, 271, 31));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(newName->sizePolicy().hasHeightForWidth());
        newName->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        newName->setFont(font2);
        addPlayerBtn = new QPushButton(Authorization);
        addPlayerBtn->setObjectName(QStringLiteral("addPlayerBtn"));
        addPlayerBtn->setGeometry(QRect(220, 330, 121, 31));
        addPlayerBtn->setFont(font1);
        deleteBtn = new QPushButton(Authorization);
        deleteBtn->setObjectName(QStringLiteral("deleteBtn"));
        deleteBtn->setGeometry(QRect(220, 150, 121, 31));
        deleteBtn->setFont(font1);

        retranslateUi(Authorization);

        QMetaObject::connectSlotsByName(Authorization);
    } // setupUi

    void retranslateUi(QWidget *Authorization)
    {
        Authorization->setWindowTitle(QApplication::translate("Authorization", "Form", 0));
        label->setText(QApplication::translate("Authorization", "Choose your name:", 0));
        okBtn->setText(QApplication::translate("Authorization", "OK", 0));
        newPlayerBtn->setText(QApplication::translate("Authorization", "New player", 0));
        addPlayerBtn->setText(QApplication::translate("Authorization", "Create", 0));
        deleteBtn->setText(QApplication::translate("Authorization", "Delete player", 0));
    } // retranslateUi

};

namespace Ui {
    class Authorization: public Ui_Authorization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATION_H
