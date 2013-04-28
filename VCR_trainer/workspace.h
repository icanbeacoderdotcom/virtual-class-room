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

  void on_saveImage_clicked();

  void on_clearCanvas_clicked();

  void on_horizontalSlider_valueChanged(int value);

  void on_penColor_clicked();

  void on_actionOpen_Image_triggered();

private:
  Ui::workSpace *ui;
MainWindow *w;
ChatterBoxServer *server;
Canvas *canvas;
};

#endif // WORKSPACE_H
