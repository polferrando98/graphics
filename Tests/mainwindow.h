#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
class Inspector;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void ActionOneSlot();

private:
    Ui::MainWindow *ui_main;
    Ui::Inspector *ui_inspector;
};

#endif // MAINWINDOW_H
