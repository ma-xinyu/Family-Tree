#ifndef SEARCH_H
#define SEARCH_H
#include "mytreewidgetitem.h"

#include <QDialog>

namespace Ui {
class Search;
}

class Search : public QDialog
{
    Q_OBJECT

public:
    explicit Search(QWidget *parent = nullptr);
    void lbl_show(MyTreeWidgetItem* );
    ~Search();

public slots:
    void emitSearchName();
    void showSearchResults(MyTreeWidgetItem*);



private:
    Ui::Search *ui;

signals:
    void signal_clicked(QPushButton*);
    void signal_emitSearchName(QString);
};

#endif // SEARCH_H
