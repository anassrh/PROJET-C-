#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Change the background color of a widget using a stylesheet
    ui->centralWidget->setStyleSheet("background-color: purple");

    ui->btnBook->setStyleSheet("color: white; background-color: #87CEFA; padding: 10px 20px; border: 2px solid #4682B4; border-radius: 5px; font-size: 10px; font-weight: bold; font-style: italic;");
    ui->btnCancel->setStyleSheet("color: white; background-color: #87CEFA; padding: 10px 20px; border: 2px solid #4682B4; border-radius: 5px; font-size: 10px; font-weight: bold; font-style: italic;");
    ui->btnReset->setStyleSheet("color: white; background-color: #87CEFA; padding: 10px 20px; border: 2px solid #4682B4; border-radius: 5px; font-size: 10px; font-weight: bold; font-style: italic;");

    ui->label_3->setStyleSheet("color: white; font-family: Arial, sans-serif; font-size: 18px; font-weight: bold; border: 3px solid black; border-radius: 5px; padding: 5px; background-color: #FF0000;font-style: oblique;");
    ui->label_2->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 0px; padding: 1px;");
    ui->label->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 0px; padding: 1px;");

    ui->lblA1->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblA2->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblA3->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblA4->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblA5->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblA6->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblA7->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblA8->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblA9->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblA10->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblA11->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblA12->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");

    ui->lblB1->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblB2->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblB3->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblB4->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblB5->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblB6->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblB7->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblB8->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblB9->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblB10->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblB11->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblB12->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");

    ui->lblC1->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblC2->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblC3->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblC4->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblC5->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblC6->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblC7->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblC8->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblC9->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblC10->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblC11->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblC12->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblC13->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblC14->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");

    ui->lblD1->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblD2->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblD3->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblD4->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblD5->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblD6->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblD7->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblD8->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblD9->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblD10->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblD11->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblD12->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblD13->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblD14->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");

    ui->lblE1->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblE2->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblE3->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblE4->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblE5->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblE6->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblE7->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblE8->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblE9->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblE10->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblE11->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblE12->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblE13->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");
    ui->lblE14->setStyleSheet("background-color: red; color: white; border: 2px solid #2980b9; border-radius: 10px; padding: 1px;");










    QPixmap pm(":/assets/img/infoImage.jpg");
    ui->lblInfoImage->setPixmap(pm);

    ptrBook  = new book(this);
    ptrCancel = new cancel(this);

    connect(ptrBook, &book::mysignal, this, &MainWindow::updateUI);
    connect(ptrCancel, &cancel::mysignal1, this, &MainWindow::updateUI);

    updateUI();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete ptrBook;
    delete ptrCancel;
}

void MainWindow::updateUI()
{
    qDebug() << "in updateUI()";

    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    query.prepare("select Seat, Available from movie_ticket");

    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
        //ui->lblInfo->setText(query.lastError().text());
    }
    else{
        qDebug() << "read was successful "<< query.lastQuery();
    }

    int no = 1;
    while(query.next())
    {
        QString sLabel = "lbl" + query.value(0).toString();
        qDebug() <<"label is : "<< sLabel;
        QLabel * ptr = this->findChild<QLabel*>(sLabel);
        if(ptr!=nullptr)
        {   qDebug() << "label found "<<sLabel;
            if(query.value(1).toString().compare("N") == 0)
            {
                //int no = (qrand() % ((6 + 1) - 1) + 1);
                QPixmap pm(":/assets/img/booked.jpg");
                ptr->setPixmap(pm);
                ptr->setScaledContents(true);
                qDebug()<<query.value(0).toString() << " : is booked";
            }
            else
            {
                QPixmap pm(":/assets/img/available.jpg");
                ptr->setPixmap(pm);
                ptr->setScaledContents(true);
                qDebug()<<query.value(0).toString() << " : is Available";
            }


        }
    }

}

void MainWindow::on_btnBook_clicked()
{
    ptrBook->updateUI();
    ptrBook->show();
}

void MainWindow::on_btnCancel_clicked()
{
    ptrCancel->updateUI();
    ptrCancel->show();
}

void MainWindow::on_btnReset_clicked()
{

    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    query.prepare("update movie_ticket set Available = 'Y'");

    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
        //ui->lblInfo->setText(query.lastError().text());
    }
    else{
        if(query.numRowsAffected() > 0)
        {

            qDebug() << "Update was successful. "<< query.lastQuery();
        }
        else
        {
            qDebug() << "Update Failed. "<< query.lastQuery();
        }

    }

    updateUI();

}
