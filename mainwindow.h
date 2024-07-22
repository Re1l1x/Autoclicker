#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <thread>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override;

private slots:
    void clicker();

    void on_closeButton_clicked();

    void on_minimizeButton_clicked();

    void on_selectMenu1button_clicked();

    void on_selectMenu2Button_clicked();

    void on_modifierBox_currentIndexChanged(int index);

    void on_shortcut_textChanged(const QString &arg1);

    void on_interval_s_textChanged(const QString &arg1);

    void on_interval_ms_textChanged(const QString &arg1);

    void on_locationX_textChanged(const QString &arg1);

    void on_locationY_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    std::thread clickerThread;
    bool isActive;
    uint modifier;
    uint vk;
    long positionX;
    long positionY;


};
#endif // MAINWINDOW_H
