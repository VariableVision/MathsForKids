#ifndef MATHSFORKIDS_H
#define MATHSFORKIDS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MathsForKids;
}
QT_END_NAMESPACE

class MathsForKids : public QMainWindow
{
    Q_OBJECT

public:
    MathsForKids(QWidget *parent = nullptr);
    ~MathsForKids();

private slots:
    void on_SubmitBtn_clicked();

    void on_resetScore_clicked();

    void on_changeSettingsBtn_clicked();

    void on_MultiplicationBtn_clicked();

    void on_SubtractionBtn_clicked();

    void on_SumBtn_clicked();

    void on_DivisionBtn_2_clicked();

    void on_startBtn_clicked();

    void on_skipBtn_clicked();

private:
    Ui::MathsForKids *ui;
    int numOfSkips = 0;
    int scores = 0;
    double numberOne = 0;
    double numberTwo = 0;
    int mode = 0; // mutiply is 0, subtract is 1 , sum is 2 , divide is 4
    int difficultymode = 0; // 0 easy , 1 medium , 2 hard
    double calculation = 0;
    int questionCounter =1;
};
#endif // MATHSFORKIDS_H
