#include "virtualclassroom.h"
#include "ui_virtualclassroom.h"
#include <QDebug>
#include <QCryptographicHash>

VirtualClassRoom::VirtualClassRoom(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VirtualClassRoom)
{
   dbName = "db_virtual_classroom";
   userName = "root";
   HostName = "localhost";
   dbPassword ="sirius525";
   Database = "QMYSQL";

   // Connection to database
   db = QSqlDatabase::addDatabase(Database);
   db.setHostName(HostName);
   db.setDatabaseName(dbName);
   db.setUserName(userName);
   db.setPassword(dbPassword);

   ui->setupUi(this);

}

VirtualClassRoom::~VirtualClassRoom()
{
    delete ui;
    db.close();
}

void VirtualClassRoom::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void VirtualClassRoom::on_pushButton_3_clicked() // Sign In
{

  // Hashing the password using SHA1
  wObject = new workSpace(0,ui->email->text());
    QByteArray pass = ui->password->text().toUtf8();
    QCryptographicHash hasher(QCryptographicHash::Sha1);
    hasher.addData(pass);
    QByteArray password = hasher.result();

    if (!db.open())
       {
        ui->email->setText("Connection to Database not possible");
       }
    else
    {
        QString qry = "SELECT * FROM users WHERE roll_id=:roll AND password=:passwd";
        QSqlQuery query;
        query.prepare(qry);
        query.bindValue(":roll",ui->email->text(),QSql::Out);
        query.bindValue(":passwd",password,QSql::Out);
        if(query.exec())
        {
            if(query.size()==1)
            {

                wObject->show();
                this->close();
                qDebug() << "true";
            }
            else
            {
                ui->email->setText("Incorrect Details");
            }
        }

    }


}

void VirtualClassRoom::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void VirtualClassRoom::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void VirtualClassRoom::on_pushButton_5_clicked() // Create New Account
{
  if(!ui->checkBox->checkState())
    {
      ui->error->setText("Check the Box that says agree with terms and condition");
    }
  else {

  QByteArray pass = ui->lineEditPassword->text().toUtf8();
  QCryptographicHash hasher(QCryptographicHash::Sha1);
  hasher.addData(pass);
  QByteArray password = hasher.result();
  if (!db.open())
     {
      ui->email->setText("Connection to Database not possible");
     }
  else {
      QString qry = "INSERT INTO users (name,roll_id,email,password,role,year) values (:name,:roll,:email,:password,:role,:year)";
      QSqlQuery query;
      query.prepare(qry);
      query.bindValue(":name",ui->lineEditName->text(),QSql::Out);
      query.bindValue(":roll",ui->lineEditRoll->text(),QSql::Out);
      query.bindValue(":email",ui->lineEditEmail->text(),QSql::Out);
      query.bindValue(":passwd",password,QSql::Out);
      query.bindValue(":role",ui->comboBox->currentText(),QSql::Out);
      query.bindValue(":year",ui->comboBoxYear->currentText(),QSql::Out);
      if(query.exec())
      {

          ui->error->setText( "Account Created");
          ui->stackedWidget->setCurrentIndex(1);
          ui->label_5->setText("Account Created Login to attend the session ");

      }
      else
          {
          ui->error->setText( "User Already Exist");

          }
      }
  db.close();
 }
}
