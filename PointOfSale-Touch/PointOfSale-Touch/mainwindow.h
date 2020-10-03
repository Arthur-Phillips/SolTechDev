#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QVector>
#include <QPushButton>
#include <QObject>
#include <QLCDNumber>
#include <QMessageBox>
#include <QList>
#include <QCryptographicHash>
#include "validate.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void append_to_pwValidate();
    void on_pushButton_clear_clicked();
    void on_pushButton_login_clicked();

    void on_pushButton_addAnotherProduct_clicked();
    void on_pushButton_removeAProduct_clicked();
    void on_comboBox_selectTransactionType_currentIndexChanged(const QString &arg1);
    void on_comboBox_uniqueTransactionNumber_currentIndexChanged(const QString &arg1);
    void on_pushButton_nextTransactionNumber_clicked();
    void on_pushButton_previousTransactionNumber_clicked();
    void on_pushButton_editTransactionSettings_clicked();
    void on_pushButton_saveTransaction_clicked();
    void on_pushButton_printTransactionSummary_clicked();
protected:
    Ui::MainWindow *ui;
private:
    void randomizeInput();
    void setRandomDigits(QVector<QString> *array);

    //Access Control
    void app_startup();
    void app_logout();

    QList<QChar> m_pwValidateThis;
    QString lcdFiller;
    bool appLoginStatus = false;
    int maxPwLength = 5;
};
#endif // MAINWINDOW_H
