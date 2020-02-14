#include <QtWidgets>
#if defined(QT_PRINTSUPPORT_LIB)
#include <QtPrintSupport/qtprintsupportglobal.h>
#if QT_CONFIG(printdialog)
#include <QtPrintSupport>
#endif
#endif

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_inspector.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui_main(new Ui::MainWindow),
    ui_inspector(new Ui::Inspector)
{


    ui_main->setupUi(this);

    QWidget* widget_inspector = new QWidget();

    ui_inspector->setupUi(widget_inspector);
    ui_main->dockInspector->setWidget(widget_inspector);
    connect(ui_main->action,SIGNAL(triggered()),SLOT(ActionOneSlot()));

}

void MainWindow::ActionOneSlot() {

}


MainWindow::~MainWindow()
{
    delete ui_main;
}
