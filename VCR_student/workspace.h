#ifndef WORKSPACE_H
#define WORKSPACE_H

#include <QMainWindow>
#include "MainWindow.h"
#include "ChatterBoxServer.h"
#include "canvas.h"
namespace Ui {
  class workSpace;
}

class workSpace : public QMainWindow
{
  Q_OBJECT
  
public:
  QString nameofLoggedUser;
  explicit workSpace(QWidget *parent = 0,QString nameofUser="Teacher");
  ~workSpace();
  
private slots:
  void on_chattbox_clicked();

  void on_close_chatbox_clicked();

  void on_close_chatbox_3_clicked();

  void on_close_chatbox_4_clicked();

  void on_close_chatbox_5_clicked();

  void on_openImage_clicked();

private:
  Ui::workSpace *ui;
MainWindow *w;

Canvas *canvas;
};

#endif // WORKSPACE_H
