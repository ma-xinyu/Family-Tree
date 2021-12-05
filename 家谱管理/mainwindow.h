#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mytreewidgetitem.h"
#include "result.h"
#include "search.h"
#include "mytreewidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
 //   void showInfor(QString);
public slots:
    void lbl_show(MyTreeWidgetItem* );
    void condButtonPressed();
    void condButtonPressed2();
    //void average(MyTreeWidget*);
    void emitSearchResults(QString);

private:
    Ui::MainWindow *ui;
    Result *result;
    Search *search;

signals:
    void signal_emitSearchResults(MyTreeWidgetItem*);
};
#endif // MAINWINDOW_H
