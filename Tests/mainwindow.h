#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class Hierarchy;
class Inspector;

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

    Hierarchy *hierarchy;
    Inspector *inspector;
};

#endif // MAINWINDOW_H
