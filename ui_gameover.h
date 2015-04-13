/********************************************************************************
** Form generated from reading UI file 'gameover.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOVER_H
#define UI_GAMEOVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameOver
{
public:
    QPushButton *newGameBtn;
    QPushButton *playerBtn;

    void setupUi(QWidget *GameOver)
    {
        if (GameOver->objectName().isEmpty())
            GameOver->setObjectName(QStringLiteral("GameOver"));
        GameOver->resize(601, 404);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GameOver->sizePolicy().hasHeightForWidth());
        GameOver->setSizePolicy(sizePolicy);
        GameOver->setMinimumSize(QSize(601, 404));
        GameOver->setAutoFillBackground(true);
        newGameBtn = new QPushButton(GameOver);
        newGameBtn->setObjectName(QStringLiteral("newGameBtn"));
        newGameBtn->setGeometry(QRect(230, 320, 141, 31));
        QFont font;
        font.setPointSize(13);
        newGameBtn->setFont(font);
        playerBtn = new QPushButton(GameOver);
        playerBtn->setObjectName(QStringLiteral("playerBtn"));
        playerBtn->setGeometry(QRect(230, 360, 141, 31));
        playerBtn->setFont(font);

        retranslateUi(GameOver);

        QMetaObject::connectSlotsByName(GameOver);
    } // setupUi

    void retranslateUi(QWidget *GameOver)
    {
        GameOver->setWindowTitle(QApplication::translate("GameOver", "Form", 0));
        newGameBtn->setText(QApplication::translate("GameOver", "New Game", 0));
        playerBtn->setText(QApplication::translate("GameOver", "Another player", 0));
    } // retranslateUi

};

namespace Ui {
    class GameOver: public Ui_GameOver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOVER_H
