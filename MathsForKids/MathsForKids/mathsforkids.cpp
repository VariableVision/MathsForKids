#include "mathsforkids.h"
#include "./ui_mathsforkids.h"
#include <cstdlib>

MathsForKids::MathsForKids(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MathsForKids)
{

    ui->setupUi(this);
    ui->messageBox->setText("Please Select A Mode And Difficulty Level And Press Start ");
    ui->SubmitBtn->setDefault(false);
    ui->resetScore->setDefault(false);
    ui->pointsLabel->setText("0");
    //ui->mathQuestion->setText(QString::number(numberOne) + " x " + QString::number(numberTwo)+ "  = " );
    ui->mathQuestion->setText("");
    ui->questionLabel->setText("Question 1 :");


}

MathsForKids::~MathsForKids()
{
    delete ui;
}

void MathsForKids::on_SubmitBtn_clicked()
{
    QString num = ui->AnswerText->text();
    double temp = num.toDouble();
    ui->questionLabel->setText("Question " + QString::number(questionCounter) + " : " );
    if (calculation == temp)
    {
        ui->messageBox->setText(" Congratulations, You Have Earned 1 Point");
        scores++;
        ui->pointsLabel->setText(QString::number(scores));
        if (mode == 1) // mode 1 multiply , difficutly 1 , easy
        {
            if ( difficultymode == 1)
            {
                numberOne = rand() %10 + 1;
                numberTwo = rand()%10 + 1;
                calculation = numberOne * numberTwo;
                qDebug()<< " Multiplication Mode,Difficulty 1 Calculated number is : " << QString::number(calculation);
                ui->mathQuestion->setText(QString::number(numberOne) + " x " + QString::number(numberTwo) + " = " );
            }else if ( difficultymode == 2)
            {
                numberOne = rand() %100 + 1;
                numberTwo = rand()%100 + 1;
                calculation = numberOne * numberTwo;
                qDebug()<< " Multiplication Mode, Difficulty 2 Calculated number is : " << QString::number(calculation);
                ui->mathQuestion->setText(QString::number(numberOne) + " x " + QString::number(numberTwo)+ " = "  );
            }else
            {
                numberOne = rand() %1000 + 1;
                numberTwo = rand()%1000 + 1;
                calculation = numberOne * numberTwo;
                qDebug()<< " Multiplication Mode, Difficulty 3 Calculated number is : " << QString::number(calculation);
                ui->mathQuestion->setText(QString::number(numberOne) + " x " + QString::number(numberTwo) + " = "  );
            }


        }
        else if ( mode == 2) // Subtraction
        {
            if ( difficultymode == 1)
            {
                numberOne = rand() %10 + 1;
                numberTwo = rand()%10 + 1;
                calculation = numberOne - numberTwo;
                qDebug()<< " Subtraction Mode, Difficulty 1 Calculated number is : " << QString::number(calculation);
                ui->mathQuestion->setText(QString::number(numberOne) + " - " + QString::number(numberTwo) + " = " );
            }else if ( difficultymode == 2)
            {
                numberOne = rand() %100 + 1;
                numberTwo = rand()%100 + 1;
                calculation = numberOne- numberTwo;
                qDebug()<< " Subtraction Mode, Difficulty 2 Calculated number is : " << QString::number(calculation);
                ui->mathQuestion->setText(QString::number(numberOne) + " - " + QString::number(numberTwo) + " = " );
            }else
            {
                numberOne = rand() %1000 + 1;
                numberTwo = rand()%1000 + 1;
                calculation = numberOne - numberTwo;
                qDebug()<< " Subtraction Mode, Difficulty 3 Calculated number is : " << QString::number(calculation);
                ui->mathQuestion->setText(QString::number(numberOne) + " - " + QString::number(numberTwo)+ " = " );
            }

        }
        else if ( mode == 3 ) //sum
        {
            if ( difficultymode == 1)
            {
                numberOne = rand() %10 + 1;
                numberTwo = rand()%10 + 1;
                calculation = numberOne + numberTwo;
                qDebug()<< " Sum Mode, Difficulty 1 Calculated number is : " << QString::number(calculation);
                ui->mathQuestion->setText(QString::number(numberOne) + " + " + QString::number(numberTwo)+ " = " );
            }else if ( difficultymode == 2)
            {
                numberOne = rand() %100 + 1;
                numberTwo = rand()%100 + 1;
                calculation = numberOne + numberTwo;
                qDebug()<< " Sum Mode, Difficulty 2 Calculated number is : " << QString::number(calculation);
                ui->mathQuestion->setText(QString::number(numberOne) + " + " + QString::number(numberTwo)+ " = " );
            }else
            {
                numberOne = rand() %1000 + 1;
                numberTwo = rand()%1000 + 1;
                calculation = numberOne + numberTwo;
                qDebug()<< " Sum Mode,  Difficulty 3 Calculated number is : " << QString::number(calculation);
                ui->mathQuestion->setText(QString::number(numberOne) + " + " + QString::number(numberTwo)+ " = " );
            }
        }
        else  { // Division Mode
            if ( difficultymode == 1)
            {
                numberOne = rand() %10 + 1;
                numberTwo = rand()%10 + 1;
                calculation = numberOne / numberTwo;
                qDebug()<< " Division Mode, Difficulty 1 Calculated number is : " << QString::number(calculation);
                ui->mathQuestion->setText(QString::number(numberOne) + " / " + QString::number(numberTwo)+ " = " );
            }else if ( difficultymode == 2)
            {
                numberOne = rand() %100 + 1;
                numberTwo = rand()%100 + 1;
                calculation = numberOne / numberTwo;
                qDebug()<< " Division Mode, Difficulty 2 Calculated number is : " << QString::number(calculation);
                ui->mathQuestion->setText(QString::number(numberOne) + " / " + QString::number(numberTwo)+ " = " );
            }else
            {
                numberOne = rand() %1000 + 1;
                numberTwo = rand()%1000 + 1;
                calculation = numberOne / numberTwo;
                qDebug()<< " Division Mode,  Difficulty 3 Calculated number is : " << QString::number(calculation);
                ui->mathQuestion->setText(QString::number(numberOne) + " / " + QString::number(numberTwo)+ " = " );
            }

        }
        ui->AnswerText->setText("");
        questionCounter++;
        ui->questionLabel->setText("Question " + QString::number(questionCounter) + " : " );
    }
    else {
        ui->messageBox->setText("Wrong Answer, Try again or skip");
    }
}


void MathsForKids::on_resetScore_clicked()
{
    scores = 0;
    ui->mathQuestion->setText("");
    ui->pointsLabel->setText(QString::number(scores));
    questionCounter = 1;
    ui->messageBox->setText("Scores and Questions have been reseted !");
    ui->questionLabel->setText("Question " + QString::number(questionCounter) +" :" );

}


void MathsForKids::on_changeSettingsBtn_clicked()
{
    difficultymode = ui->spinBox_Difficulty->value(); // set difficulty mode
    ui->mathQuestion->setText("");
    ui->pointsLabel->setText(QString::number(scores));
    if (mode == 0 )
     {
         ui->messageBox->setText("Please select The Mode ");
     }
    else if ( mode > 0 && difficultymode > 0 && difficultymode < 4){
        // default unselected 0, mutiply is 1, subtract is 2 , sum is 3 , divide is 4

         if (mode == 1) //
        {
            ui->messageBox->setText("The Mode Selected is Multiplication and Difficulty level " + QString::number(difficultymode));

        }else if ( mode == 2 )
         {
             ui->messageBox->setText("The Mode Selected is Subtraction and Difficulty level " + QString::number(difficultymode));
         }else if (mode == 3 )
        {
            ui->messageBox->setText("The Mode Selected is Sum and Difficulty level " + QString::number(difficultymode));
        }else if ( mode == 4 )
         {
               ui->messageBox->setText("The Mode Selected is Division and Difficulty level " + QString::number(difficultymode));
         }
    }

}


void MathsForKids::on_MultiplicationBtn_clicked()
{
      // default unselected 0, mutiply is 1, subtract is 2 , sum is 3 , divide is 4
    mode = 1;

}



void MathsForKids::on_SumBtn_clicked()
{
     // default unselected 0, mutiply is 1, subtract is 2 , sum is 3 , divide is 4
    mode = 3;
}


void MathsForKids::on_DivisionBtn_2_clicked()
{
    // default unselected 0, mutiply is 1, subtract is 2 , sum is 3 , divide is 4
    mode = 4;
}


void MathsForKids::on_SubtractionBtn_clicked()
{
    // default unselected 0, mutiply is 1, subtract is 2 , sum is 3 , divide is 4

    mode = 2;
}


void MathsForKids::on_startBtn_clicked()
{
      // default unselected 0, mutiply is 1, subtract is 2 , sum is 3 , divide is 4
    if (mode == 0)
      {
          ui->messageBox->setText("Please select Mode And Difficulty First");
      }else {
        if (mode == 1) // mode 1 multiply , difficutly 1 , easy
        {
            if ( difficultymode == 1)
            {
                numberOne = rand() %10 + 1;
                numberTwo = rand()%10 + 1;
                calculation = numberOne * numberTwo;
                qDebug()<< " Multiplication Mode,Difficulty 1 Calculated number is : " << QString::number(calculation);
                ui->mathQuestion->setText(QString::number(numberOne) + " x " + QString::number(numberTwo)+ " = " );
            }else if ( difficultymode == 2)
            {
                numberOne = rand() %100 + 1;
                numberTwo = rand()%100 + 1;
                calculation = numberOne * numberTwo;
                qDebug()<< " Multiplication Mode, Difficulty 2 Calculated number is : " << QString::number(calculation);
                ui->mathQuestion->setText(QString::number(numberOne) + " x " + QString::number(numberTwo)+ " = " );
            }else
            {
                numberOne = rand() %1000 + 1;
                numberTwo = rand()%1000 + 1;
                calculation = numberOne * numberTwo;
                qDebug()<< " Multiplication Mode, Difficulty 3 Calculated number is : " << QString::number(calculation);
                ui->mathQuestion->setText(QString::number(numberOne) + " x " + QString::number(numberTwo)+ " = " );
            }


        }
        else if ( mode == 2) // Subtraction
        {
            if ( difficultymode == 1)
            {
                numberOne = rand() %10 + 1;
                numberTwo = rand()%10 + 1;
                calculation = numberOne - numberTwo;
                qDebug()<< " Subtraction Mode, Difficulty 1 Calculated number is : " << QString::number(calculation);
                ui->mathQuestion->setText(QString::number(numberOne) + " - " + QString::number(numberTwo)+ " = " );
            }else if ( difficultymode == 2)
            {
                numberOne = rand() %100 + 1;
                numberTwo = rand()%100 + 1;
                calculation = numberOne- numberTwo;
                qDebug()<< " Subtraction Mode, Difficulty 2 Calculated number is : " << QString::number(calculation);
                ui->mathQuestion->setText(QString::number(numberOne) + " - " + QString::number(numberTwo)+ " = " );
            }else
            {
                numberOne = rand() %1000 + 1;
                numberTwo = rand()%1000 + 1;
                calculation = numberOne - numberTwo;
                qDebug()<< " Subtraction Mode, Difficulty 3 Calculated number is : " << QString::number(calculation);
                ui->mathQuestion->setText(QString::number(numberOne) + " - " + QString::number(numberTwo)+ " = " );
            }

        }
        else if ( mode == 3 ) //sum
        {
            if ( difficultymode == 1)
            {
                numberOne = rand() %10 + 1;
                numberTwo = rand()%10 + 1;
                calculation = numberOne + numberTwo;
                qDebug()<< " Sum Mode, Difficulty 1 Calculated number is : " << QString::number(calculation);
                ui->mathQuestion->setText(QString::number(numberOne) + " + " + QString::number(numberTwo)+ " = " );
            }else if ( difficultymode == 2)
            {
                numberOne = rand() %100 + 1;
                numberTwo = rand()%100 + 1;
                calculation = numberOne + numberTwo;
                qDebug()<< " Sum Mode, Difficulty 2 Calculated number is : " << QString::number(calculation);
                ui->mathQuestion->setText(QString::number(numberOne) + " + " + QString::number(numberTwo)+ " = " );
            }else
            {
                numberOne = rand() %1000 + 1;
                numberTwo = rand()%1000 + 1;
                calculation = numberOne + numberTwo;
                qDebug()<< " Sum Mode,  Difficulty 3 Calculated number is : " << QString::number(calculation);
                ui->mathQuestion->setText(QString::number(numberOne) + " + " + QString::number(numberTwo)+ " = " );
            }
        }
        else  { // Division Mode
            if ( difficultymode == 1)
            {
                numberOne = rand() %10 + 1;
                numberTwo = rand()%10 + 1;
                calculation = numberOne / numberTwo;
                qDebug()<< " Division Mode, Difficulty 1 Calculated number is : " << QString::number(calculation);
                ui->mathQuestion->setText(QString::number(numberOne) + " / " + QString::number(numberTwo)+ " = " );
            }else if ( difficultymode == 2)
            {
                numberOne = rand() %100 + 1;
                numberTwo = rand()%100 + 1;
                calculation = numberOne / numberTwo;
                qDebug()<< " Division Mode, Difficulty 2 Calculated number is : " << QString::number(calculation);
                ui->mathQuestion->setText(QString::number(numberOne) + " / " + QString::number(numberTwo)+ " = " );
            }else
            {
                numberOne = rand() %1000 + 1;
                numberTwo = rand()%1000 + 1;
                calculation = numberOne / numberTwo;
                qDebug()<< " Division Mode,  Difficulty 3 Calculated number is : " << QString::number(calculation);
                ui->mathQuestion->setText(QString::number(numberOne) + " / " + QString::number(numberTwo)+ " = " );
            }

        }

    }


}


void MathsForKids::on_skipBtn_clicked()
{
    if (mode == 1) // mode 1 multiply , difficutly 1 , easy
    {
        if ( difficultymode == 1)
        {
            numberOne = rand() %10 + 1;
            numberTwo = rand()%10 + 1;
            calculation = numberOne * numberTwo;
            qDebug()<< " Multiplication Mode,Difficulty 1 Calculated number is : " << QString::number(calculation);
            ui->mathQuestion->setText(QString::number(numberOne) + " x " + QString::number(numberTwo)+ " = " );
        }else if ( difficultymode == 2)
        {
            numberOne = rand() %100 + 1;
            numberTwo = rand()%100 + 1;
            calculation = numberOne * numberTwo;
            qDebug()<< " Multiplication Mode, Difficulty 2 Calculated number is : " << QString::number(calculation);
            ui->mathQuestion->setText(QString::number(numberOne) + " x " + QString::number(numberTwo)+ " = " );
        }else
        {
            numberOne = rand() %1000 + 1;
            numberTwo = rand()%1000 + 1;
            calculation = numberOne * numberTwo;
            qDebug()<< " Multiplication Mode, Difficulty 3 Calculated number is : " << QString::number(calculation);
            ui->mathQuestion->setText(QString::number(numberOne) + " x " + QString::number(numberTwo)+ " = " );
        }


    }
    else if ( mode == 2) // Subtraction
    {
        if ( difficultymode == 1)
        {
            numberOne = rand() %10 + 1;
            numberTwo = rand()%10 + 1;
            calculation = numberOne - numberTwo;
            qDebug()<< " Subtraction Mode, Difficulty 1 Calculated number is : " << QString::number(calculation);
            ui->mathQuestion->setText(QString::number(numberOne) + " - " + QString::number(numberTwo)+ " = " );
        }else if ( difficultymode == 2)
        {
            numberOne = rand() %100 + 1;
            numberTwo = rand()%100 + 1;
            calculation = numberOne- numberTwo;
            qDebug()<< " Subtraction Mode, Difficulty 2 Calculated number is : " << QString::number(calculation);
            ui->mathQuestion->setText(QString::number(numberOne) + " - " + QString::number(numberTwo)+ " = " );
        }else
        {
            numberOne = rand() %1000 + 1;
            numberTwo = rand()%1000 + 1;
            calculation = numberOne - numberTwo;
            qDebug()<< " Subtraction Mode, Difficulty 3 Calculated number is : " << QString::number(calculation);
            ui->mathQuestion->setText(QString::number(numberOne) + " - " + QString::number(numberTwo)+ " = " );
        }

    }
    else if ( mode == 3 ) //sum
    {
        if ( difficultymode == 1)
        {
            numberOne = rand() %10 + 1;
            numberTwo = rand()%10 + 1;
            calculation = numberOne + numberTwo;
            qDebug()<< " Sum Mode, Difficulty 1 Calculated number is : " << QString::number(calculation);
            ui->mathQuestion->setText(QString::number(numberOne) + " + " + QString::number(numberTwo)+ " = " );
        }else if ( difficultymode == 2)
        {
            numberOne = rand() %100 + 1;
            numberTwo = rand()%100 + 1;
            calculation = numberOne + numberTwo;
            qDebug()<< " Sum Mode, Difficulty 2 Calculated number is : " << QString::number(calculation);
            ui->mathQuestion->setText(QString::number(numberOne) + " + " + QString::number(numberTwo)+ " = " );
        }else
        {
            numberOne = rand() %1000 + 1;
            numberTwo = rand()%1000 + 1;
            calculation = numberOne + numberTwo;
            qDebug()<< " Sum Mode,  Difficulty 3 Calculated number is : " << QString::number(calculation);
            ui->mathQuestion->setText(QString::number(numberOne) + " + " + QString::number(numberTwo)+ " = " );
        }
    }
    else  { // Division Mode
        if ( difficultymode == 1)
        {
            numberOne = rand() %10 + 1;
            numberTwo = rand()%10 + 1;
            calculation = numberOne / numberTwo;
            qDebug()<< " Division Mode, Difficulty 1 Calculated number is : " << QString::number(calculation);
            ui->mathQuestion->setText(QString::number(numberOne) + " / " + QString::number(numberTwo)+ " = " );
        }else if ( difficultymode == 2)
        {
            numberOne = rand() %100 + 1;
            numberTwo = rand()%100 + 1;
            calculation = numberOne / numberTwo;
            qDebug()<< " Division Mode, Difficulty 2 Calculated number is : " << QString::number(calculation);
            ui->mathQuestion->setText(QString::number(numberOne) + " / " + QString::number(numberTwo)+ " = " );
        }else
        {
            numberOne = rand() %1000 + 1;
            numberTwo = rand()%1000 + 1;
            calculation = numberOne / numberTwo;
            qDebug()<< " Division Mode,  Difficulty 3 Calculated number is : " << QString::number(calculation);
            ui->mathQuestion->setText(QString::number(numberOne) + " / " + QString::number(numberTwo)+ " = " );
        }

    }
}

