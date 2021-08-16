#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void Main();

private slots:
    void on_pushButton_3_clicked();

    void on_StartButton_clicked();

    void on_FiltercomboBox_activated(int index);

    void on_OutputName_returnPressed();

private:
    Ui::MainWindow *ui;
    QString inputFilePath;
    QString outputFileName;
};
#endif // MAINWINDOW_H
