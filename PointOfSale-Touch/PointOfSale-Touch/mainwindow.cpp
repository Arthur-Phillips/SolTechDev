#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lcdNumber_inputDisplay->display("");
    randomizeInput();
    app_startup();
    connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(append_to_pwValidate()));
    connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(append_to_pwValidate()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(append_to_pwValidate()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(append_to_pwValidate()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(append_to_pwValidate()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(append_to_pwValidate()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(append_to_pwValidate()));
    connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(append_to_pwValidate()));
    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(append_to_pwValidate()));
    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(append_to_pwValidate()));
    //End
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::app_startup()
{
    ui->tab_login->activateWindow();
    for(int i = 1; i < 7; i++){
        ui->tab_main->setTabVisible(i, appLoginStatus);
        ui->tab_main->setTabEnabled(i, appLoginStatus);
    }
}

void MainWindow::app_logout()
{
    app_startup();
}

void MainWindow::append_to_pwValidate()
{
    QString temp_lcdStr = sender()->objectName();
    for (int i = 0; i < temp_lcdStr.length(); i++){
        if(temp_lcdStr.at(i).isDigit() && maxPwLength != 0){
            m_pwValidateThis.append(temp_lcdStr.at(i));
        }
    }
    --maxPwLength;
    if(maxPwLength < 0){
        QMessageBox::warning(this, tr("Password Incorrect"),\
                             tr("The password you have entered is incorrect"),\
                             QMessageBox::Ok);
        m_pwValidateThis.clear();
        maxPwLength = 5;
        lcdFiller = "";
        ui->lcdNumber_inputDisplay->display("");
        randomizeInput();
        return;
    }
    lcdFiller += "-";
    ui->lcdNumber_inputDisplay->display(lcdFiller);
}

void MainWindow::on_pushButton_clear_clicked()
{
    m_pwValidateThis.clear();
    maxPwLength = 5;
    lcdFiller = "";
    ui->lcdNumber_inputDisplay->display("");
    randomizeInput();
}



void MainWindow::on_pushButton_login_clicked()
{
    Validate obj(m_pwValidateThis);
    if(obj.validate_keypad_input()){
        appLoginStatus = true;
        ui->tab_Ttransactions->activateWindow();
        for(int i = 1; i < 7; i++){
            ui->tab_main->setTabVisible(i, appLoginStatus);
            ui->tab_main->setTabEnabled(i, appLoginStatus);
        }
        ui->tab_main->setTabVisible(0, !appLoginStatus);
    }else{
        QMessageBox msg;
        msg.setText("Password is incorrect");
        msg.exec();
        on_pushButton_clear_clicked();
    }
}

void MainWindow::randomizeInput()
{
    QVector<QString> generatedArray = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    std::srand(time(0));
    std::random_shuffle(std::begin(generatedArray), std::end(generatedArray));
    setRandomDigits(&generatedArray);
}

void MainWindow::setRandomDigits(QVector<QString> *array)
{
    QPushButton *ui_array[] = {ui->pushButton_0, ui->pushButton_1, ui->pushButton_2, ui->pushButton_3, ui->pushButton_4, \
                                 ui->pushButton_5, ui->pushButton_6, ui->pushButton_7, ui->pushButton_8, ui->pushButton_9};
    std::srand(time(0));
    std::random_shuffle(array->begin(), array->end());
    for (int i = 0; i < array->size(); i++) {
        QString tempStr = array->at(i);
        ui_array[i]->setText(tempStr);
        ui_array[i]->setObjectName(QString("pushButton_%1").arg(ui_array[i]->text()));
    }
}

//Transaction
void MainWindow::on_pushButton_addAnotherProduct_clicked(){
    QComboBox *newComboBox = new  QComboBox;
    QLineEdit *newLineEdit = new QLineEdit;
    QLineEdit *newLineEdit_2 = new QLineEdit;
    QDoubleSpinBox *newDoubleSpinBox = new QDoubleSpinBox;
    QSpinBox *newSpinBox = new QSpinBox;
}

void MainWindow::on_pushButton_removeAProduct_clicked(){

}

void MainWindow::on_comboBox_selectTransactionType_currentIndexChanged(const QString &arg1){

}

void MainWindow::on_comboBox_uniqueTransactionNumber_currentIndexChanged(const QString &arg1){

}

void MainWindow::on_pushButton_nextTransactionNumber_clicked(){

}

void MainWindow::on_pushButton_previousTransactionNumber_clicked(){

}

void MainWindow::on_pushButton_editTransactionSettings_clicked(){

}

void MainWindow::on_pushButton_saveTransaction_clicked(){

}

void MainWindow::on_pushButton_printTransactionSummary_clicked(){

}
