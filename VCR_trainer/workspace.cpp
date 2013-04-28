#include "workspace.h"
#include "ui_workspace.h"
#include <vlc_on_qt.h>
#include <QPropertyAnimation>
#include <QDesktopServices>
#include <QUrl>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QNetworkAccessManager>
#include <QDebug>
#include <QColor>
#include <QColorDialog>
#include <QFileDialog>
workSpace::workSpace(QWidget *parent,QString nameofUser) :
  QMainWindow(parent),
  ui(new Ui::workSpace)
{
  //this->setWindowFlags(Qt::WindowStaysOnTopHint);
  nameofLoggedUser = nameofUser;
  ui->setupUi(this);
  Player *p = new Player();

     p->resize(640,480);
     p->playFile("v4l2:///dev/video0"); // Replace with what you want to play

     server = new ChatterBoxServer();

     ui->horizontalLayout->addWidget(p,0,0);
      p->show();
      canvas = new Canvas();
      ui->canvas->addWidget(canvas,0,0);
      canvas->show();
}

workSpace::~workSpace()
{
  delete ui;
}

void workSpace::on_chattbox_clicked()
{
  w=new MainWindow(this,nameofLoggedUser);
    w->show();

    QPropertyAnimation *animation = new QPropertyAnimation(w, "geometry");
    animation->setDuration(1000);
    QRect startRect(this->pos().x()+1034,this->pos().y()+50,w->width(),w->height());
    QRect endRect(this->pos().x()+1034,this->pos().y()+50,w->width(),w->height());
    animation->setStartValue(startRect);//QPoint(btnRight,btnBottom));//QPoint(0,0));
    animation->setEndValue(endRect);//QPoint(100,100));
    animation->start();

}

void workSpace::on_close_chatbox_clicked()
{

    w->close();
    w->~QWidget();
}

void workSpace::on_close_chatbox_3_clicked()
{
  QDesktopServices *openlink = new QDesktopServices();
   QNetworkRequest request;
  QUrl serviceUrl = QUrl("http://localhost/owncloud/index.php/apps/files?dir=//Presentations");
      QByteArray postData;

      QUrl params;
      params.addQueryItem("user","harshit");
      params.addQueryItem("password","sirius525");

      postData = params.encodedQuery();
     QNetworkAccessManager *networkManager = new QNetworkAccessManager();
      request.setHeader(QNetworkRequest::ContentTypeHeader,QVariant("application/x-www-form-urlencoded"));
       request.setUrl(serviceUrl);
    QNetworkReply *reply= networkManager->post(request, postData);

    openlink->openUrl( reply->url());
}

void workSpace::on_close_chatbox_4_clicked()
{
  QDesktopServices *openlink = new QDesktopServices();
   QNetworkRequest request;
  QUrl serviceUrl = QUrl("http://localhost/owncloud/index.php/apps/files?dir=//Assignments");
      QByteArray postData;

      QUrl params;
      params.addQueryItem("user","harshit");
      params.addQueryItem("password","sirius525");

      postData = params.encodedQuery();
     QNetworkAccessManager *networkManager = new QNetworkAccessManager();
      request.setHeader(QNetworkRequest::ContentTypeHeader,QVariant("application/x-www-form-urlencoded"));
       request.setUrl(serviceUrl);
    QNetworkReply *reply= networkManager->post(request, postData);

    openlink->openUrl( reply->url());
}

void workSpace::on_close_chatbox_5_clicked()
{
  QDesktopServices *openlink = new QDesktopServices();
   QNetworkRequest request;
  QUrl serviceUrl = QUrl("http://localhost/owncloud/index.php/apps/files?dir=//Class Notes");
      QByteArray postData;

      QUrl params;
      params.addQueryItem("user","harshit");
      params.addQueryItem("password","sirius525");

      postData = params.encodedQuery();
     QNetworkAccessManager *networkManager = new QNetworkAccessManager();
      request.setHeader(QNetworkRequest::ContentTypeHeader,QVariant("application/x-www-form-urlencoded"));
       request.setUrl(serviceUrl);
    QNetworkReply *reply= networkManager->post(request, postData);

    openlink->openUrl( reply->url());
}

void workSpace::on_saveImage_clicked()
{
  canvas->saveImage("doodle","png");
}

void workSpace::on_clearCanvas_clicked()
{
    canvas->clearImage();
}


void workSpace::on_horizontalSlider_valueChanged(int value)
{
    canvas->setPenWidth(value);
}

void workSpace::on_penColor_clicked()
{
  QColor newColor = QColorDialog::getColor(canvas->penColor());
  if (newColor.isValid())
      canvas->setPenColor(newColor);
}

void workSpace::on_actionOpen_Image_triggered()
{
  QString fileName = QFileDialog::getOpenFileName(this,
                             tr("Open File"), QDir::currentPath());
  if (!fileName.isEmpty())
      canvas->openImage(fileName);
}
