#ifndef VIRTUALCLASSROOM_H
#define VIRTUALCLASSROOM_H

#include <QMainWindow>
#include <QtSql>
#include "workspace.h"
namespace Ui {
class VirtualClassRoom;
}

class VirtualClassRoom : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit VirtualClassRoom(QWidget *parent = 0);

    ~VirtualClassRoom();


    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
  workSpace *wObject;
  QString dbName, userName, HostName, dbPassword, Database;
   QSqlDatabase db;
    Ui::VirtualClassRoom *ui;
};

#endif // VIRTUALCLASSROOM_H
