/********************************************************************************
** Form generated from reading UI file 'mathsforkids.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATHSFORKIDS_H
#define UI_MATHSFORKIDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MathsForKids
{
public:
    QWidget *centralwidget;
    QLabel *titleLabel;
    QLabel *messageBox;
    QPushButton *changeSettingsBtn;
    QLabel *settingsLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *startBtn;
    QPushButton *resetScore;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *difficultyLabel;
    QSpinBox *spinBox_Difficulty;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *MultiplicationBtn;
    QPushButton *SubtractionBtn;
    QPushButton *SumBtn;
    QPushButton *DivisionBtn_2;
    QLabel *pointsLabel;
    QLabel *scoreLabel;
    QLabel *questionLabel;
    QLabel *mathQuestion;
    QLineEdit *AnswerText;
    QPushButton *SubmitBtn;
    QPushButton *skipBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MathsForKids)
    {
        if (MathsForKids->objectName().isEmpty())
            MathsForKids->setObjectName("MathsForKids");
        MathsForKids->resize(453, 456);
        MathsForKids->setStyleSheet(QString::fromUtf8("background-color: rgb(160, 160, 255);\n"
"\n"
""));
        centralwidget = new QWidget(MathsForKids);
        centralwidget->setObjectName("centralwidget");
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(110, 10, 311, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Tempus Sans ITC")});
        font.setPointSize(18);
        font.setBold(false);
        titleLabel->setFont(font);
        messageBox = new QLabel(centralwidget);
        messageBox->setObjectName("messageBox");
        messageBox->setGeometry(QRect(60, 190, 351, 41));
        messageBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 148, 241);\n"
"\n"
""));
        changeSettingsBtn = new QPushButton(centralwidget);
        changeSettingsBtn->setObjectName("changeSettingsBtn");
        changeSettingsBtn->setGeometry(QRect(240, 380, 111, 31));
        settingsLabel = new QLabel(centralwidget);
        settingsLabel->setObjectName("settingsLabel");
        settingsLabel->setGeometry(QRect(150, 270, 201, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Tempus Sans ITC")});
        font1.setPointSize(18);
        settingsLabel->setFont(font1);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(90, 320, 250, 20));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        startBtn = new QPushButton(layoutWidget);
        startBtn->setObjectName("startBtn");

        horizontalLayout_2->addWidget(startBtn);

        resetScore = new QPushButton(layoutWidget);
        resetScore->setObjectName("resetScore");

        horizontalLayout_2->addWidget(resetScore);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(60, 380, 131, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        difficultyLabel = new QLabel(layoutWidget1);
        difficultyLabel->setObjectName("difficultyLabel");

        horizontalLayout_4->addWidget(difficultyLabel);

        spinBox_Difficulty = new QSpinBox(layoutWidget1);
        spinBox_Difficulty->setObjectName("spinBox_Difficulty");
        spinBox_Difficulty->setMinimum(1);
        spinBox_Difficulty->setMaximum(3);

        horizontalLayout_4->addWidget(spinBox_Difficulty);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(50, 350, 334, 20));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        MultiplicationBtn = new QPushButton(layoutWidget2);
        MultiplicationBtn->setObjectName("MultiplicationBtn");

        horizontalLayout_5->addWidget(MultiplicationBtn);

        SubtractionBtn = new QPushButton(layoutWidget2);
        SubtractionBtn->setObjectName("SubtractionBtn");

        horizontalLayout_5->addWidget(SubtractionBtn);

        SumBtn = new QPushButton(layoutWidget2);
        SumBtn->setObjectName("SumBtn");

        horizontalLayout_5->addWidget(SumBtn);

        DivisionBtn_2 = new QPushButton(layoutWidget2);
        DivisionBtn_2->setObjectName("DivisionBtn_2");

        horizontalLayout_5->addWidget(DivisionBtn_2);

        pointsLabel = new QLabel(centralwidget);
        pointsLabel->setObjectName("pointsLabel");
        pointsLabel->setGeometry(QRect(300, 70, 121, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe Script")});
        font2.setPointSize(20);
        pointsLabel->setFont(font2);
        scoreLabel = new QLabel(centralwidget);
        scoreLabel->setObjectName("scoreLabel");
        scoreLabel->setGeometry(QRect(80, 70, 191, 29));
        scoreLabel->setFont(font2);
        questionLabel = new QLabel(centralwidget);
        questionLabel->setObjectName("questionLabel");
        questionLabel->setGeometry(QRect(10, 120, 131, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI Variable")});
        font3.setPointSize(18);
        questionLabel->setFont(font3);
        mathQuestion = new QLabel(centralwidget);
        mathQuestion->setObjectName("mathQuestion");
        mathQuestion->setGeometry(QRect(160, 120, 101, 41));
        mathQuestion->setFont(font3);
        mathQuestion->setStyleSheet(QString::fromUtf8("background-color: rgb(160, 160, 255);"));
        AnswerText = new QLineEdit(centralwidget);
        AnswerText->setObjectName("AnswerText");
        AnswerText->setGeometry(QRect(280, 130, 101, 31));
        SubmitBtn = new QPushButton(centralwidget);
        SubmitBtn->setObjectName("SubmitBtn");
        SubmitBtn->setGeometry(QRect(390, 150, 51, 18));
        skipBtn = new QPushButton(centralwidget);
        skipBtn->setObjectName("skipBtn");
        skipBtn->setGeometry(QRect(390, 120, 51, 20));
        MathsForKids->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MathsForKids);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 453, 17));
        MathsForKids->setMenuBar(menubar);
        statusbar = new QStatusBar(MathsForKids);
        statusbar->setObjectName("statusbar");
        MathsForKids->setStatusBar(statusbar);

        retranslateUi(MathsForKids);

        QMetaObject::connectSlotsByName(MathsForKids);
    } // setupUi

    void retranslateUi(QMainWindow *MathsForKids)
    {
        MathsForKids->setWindowTitle(QCoreApplication::translate("MathsForKids", "MathsForKids", nullptr));
        titleLabel->setText(QCoreApplication::translate("MathsForKids", "Quick Math For Kiddos ", nullptr));
        messageBox->setText(QCoreApplication::translate("MathsForKids", "TextLabel", nullptr));
        changeSettingsBtn->setText(QCoreApplication::translate("MathsForKids", "Change Settings", nullptr));
        settingsLabel->setText(QCoreApplication::translate("MathsForKids", "Game Settings", nullptr));
        startBtn->setText(QCoreApplication::translate("MathsForKids", "Start Game", nullptr));
        resetScore->setText(QCoreApplication::translate("MathsForKids", "Restart", nullptr));
        difficultyLabel->setText(QCoreApplication::translate("MathsForKids", "Difficulty Mode", nullptr));
        MultiplicationBtn->setText(QCoreApplication::translate("MathsForKids", "Multiplication", nullptr));
        SubtractionBtn->setText(QCoreApplication::translate("MathsForKids", "Subtraction", nullptr));
        SumBtn->setText(QCoreApplication::translate("MathsForKids", "Sum ", nullptr));
        DivisionBtn_2->setText(QCoreApplication::translate("MathsForKids", "Division", nullptr));
        pointsLabel->setText(QCoreApplication::translate("MathsForKids", "scores", nullptr));
        scoreLabel->setText(QCoreApplication::translate("MathsForKids", "Score Board | ", nullptr));
        questionLabel->setText(QCoreApplication::translate("MathsForKids", "Question : ", nullptr));
        mathQuestion->setText(QCoreApplication::translate("MathsForKids", "Text Message Box", nullptr));
        SubmitBtn->setText(QCoreApplication::translate("MathsForKids", "Submit", nullptr));
        skipBtn->setText(QCoreApplication::translate("MathsForKids", "Skip", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MathsForKids: public Ui_MathsForKids {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATHSFORKIDS_H
