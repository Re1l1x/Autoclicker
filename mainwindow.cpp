#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "windows.h"
#include <QRegularExpressionValidator>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    isActive = false;
    modifier = MOD_CONTROL;
    vk = 'K';
    positionX = 0;
    positionY = 0;

    QRegularExpression regExp("[a-zA-Z]*");
    QRegularExpressionValidator *textValidator = new QRegularExpressionValidator(regExp, this);
    ui->shortcut->setValidator(textValidator);

    QIntValidator *numberValidator = new QIntValidator(0, 99999, this);
    ui->interval_s->setValidator(numberValidator);
    ui->interval_ms->setValidator(numberValidator);
    ui->locationX->setValidator(numberValidator);
    ui->locationY->setValidator(numberValidator);
    RegisterHotKey((HWND)MainWindow::winId(), 101, 0, VK_F1);
    RegisterHotKey((HWND)MainWindow::winId(), 100, modifier, vk);
    RegisterHotKey((HWND)MainWindow::winId(), 99, 0, VK_F2);
}

MainWindow::~MainWindow()
{
    UnregisterHotKey((HWND)winId(), 100);
    isActive = false;
    if (clickerThread.joinable()) {
        clickerThread.join();
    }
    setWindowTitle("no title");
    delete ui;
}

bool MainWindow::nativeEvent(const QByteArray &eventType, void *message, qintptr *result)
{
    Q_UNUSED(eventType)
    Q_UNUSED(result)
    MSG* msg = reinterpret_cast<MSG*>(message);
    if (msg->message == WM_HOTKEY){
        if(msg->wParam == 100 || msg->wParam == 101){
            isActive = !isActive;
            if (!clickerThread.joinable()) {
                clickerThread = std::thread(&MainWindow::clicker, this);
            }
            else{
                clickerThread.join();
            }
            return true;
        }
        else if (msg->wParam == 99){
            QPoint globalPos = QCursor::pos();
            ui->locationX->setText(QString::number(globalPos.x()));
            ui->locationY->setText(QString::number(globalPos.y()));
            return true;
        }
    }
    return false;
}

void MainWindow::clicker()
{
    if (!ui->isLocated->isChecked())
    {
        INPUT inputs[2]{};
        inputs[0].type = INPUT_MOUSE;
        inputs[0].mi.dwFlags = MOUSEEVENTF_LEFTDOWN;

        inputs[1].type = INPUT_MOUSE;
        inputs[1].mi.dwFlags = MOUSEEVENTF_LEFTUP;

        while(isActive){
            SendInput(2, inputs, sizeof(INPUT));
            Sleep(ui->interval_s->text().toInt() * 1000 + ui->interval_ms->text().toInt());
        }
    }
    else if (ui->isLocated->isChecked()){
        INPUT inputs[3]{};

        inputs[0].type = INPUT_MOUSE;
        inputs[0].mi.dx = (positionX * 65535) / GetSystemMetrics(SM_CXSCREEN);
        inputs[0].mi.dy = (positionY * 65535) / GetSystemMetrics(SM_CYSCREEN);
        inputs[0].mi.dwFlags = MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE;

        inputs[1].type = INPUT_MOUSE;
        inputs[1].mi.dwFlags = MOUSEEVENTF_LEFTDOWN;

        inputs[2].type = INPUT_MOUSE;
        inputs[2].mi.dwFlags = MOUSEEVENTF_LEFTUP;

        while(isActive){
            SendInput(2, inputs, sizeof(INPUT));
            Sleep(ui->interval_s->text().toInt() * 1000 + ui->interval_ms->text().toInt());
        }
    }
}

void MainWindow::on_closeButton_clicked()
{
    close();
}

void MainWindow::on_minimizeButton_clicked()
{
    showMinimized();
}

void MainWindow::on_selectMenu1button_clicked()
{
    ui->menu1Box->raise();
}

void MainWindow::on_selectMenu2Button_clicked()
{
    ui->menu2Box->raise();
}

void MainWindow::on_modifierBox_currentIndexChanged(int index)
{
    UnregisterHotKey((HWND)winId(), 100);
    if (index == 0){
        modifier = MOD_CONTROL;
    }
    else if (index == 1){
        modifier = MOD_SHIFT;
    }
    else if (index == 2){
        modifier = MOD_ALT;
    }
    RegisterHotKey((HWND)MainWindow::winId(), 100, modifier, vk);
}

void MainWindow::on_shortcut_textChanged(const QString &arg1)
{
    ui->shortcut->setText(arg1.toUpper());

    UnregisterHotKey((HWND)winId(), 100);
    vk = (char)ui->shortcut->text().toStdString()[0];
    RegisterHotKey((HWND)MainWindow::winId(), 100, modifier, vk);
}

void MainWindow::on_interval_s_textChanged(const QString &arg1)
{
    while (ui->interval_s->text().startsWith('0') && ui->interval_s->text().length() > 1) {
        ui->interval_s->setText(QString::number(ui->interval_s->text().toInt()));
    }
    if (arg1.isEmpty()){
        ui->interval_s->setText("0");
    }
}

void MainWindow::on_interval_ms_textChanged(const QString &arg1)
{
    while (ui->interval_ms->text().startsWith('0') && ui->interval_ms->text().length() > 1) {
        ui->interval_ms->setText(QString::number(ui->interval_ms->text().toInt()));
    }
    if (arg1.isEmpty()){
        ui->interval_ms->setText("0");
    }
}

void MainWindow::on_locationX_textChanged(const QString &arg1)
{
    while (ui->locationX->text().startsWith('0') && ui->locationX->text().length() > 1) {
        ui->locationX->setText(QString::number(ui->locationX->text().toInt()));
    }
    if (arg1.isEmpty()){
        ui->locationX->setText("0");
    }

    positionX = ui->locationX->text().toLong();
}

void MainWindow::on_locationY_textChanged(const QString &arg1)
{
    while (ui->locationY->text().startsWith('0') && ui->locationY->text().length() > 1) {
        ui->locationY->setText(QString::number(ui->locationY->text().toInt()));
    }
    if (arg1.isEmpty()){
        ui->locationY->setText("0");
    }

    positionY = ui->locationY->text().toLong();
}

