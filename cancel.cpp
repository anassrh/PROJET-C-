#include "cancel.h"
#include "ui_cancel.h"

cancel::cancel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cancel)
{
    ui->setupUi(this);
    this->setStyleSheet("QDialog { background-color: #87CEFA; border: 2px solid #e6e6e6; border-radius: 10px; padding: 10px; }");

}

cancel::~cancel()
{
    delete ui;
}

void cancel::updateUI()
{
    ui->cmbSeats->clear();
    //ui->lblInfo->setText("");

    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    query.prepare("select Seat from movie_ticket where Available='N'");

    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
        ui->lblInfo->setText(query.lastError().text());
    }
    else{
        qDebug() << "read was successful "<< query.lastQuery();
       }

    while(query.next())
    {
        ui->cmbSeats->addItem(query.value(0).toString());
    }

    if(ui->cmbSeats->count()<=0)
        ui->btnCancel->setEnabled(false);

}

void cancel::on_btnCancel_clicked()
{
    QString sSeat = ui->cmbSeats->currentText();

    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    query.prepare("update movie_ticket set Available='Y' where Seat= '" + sSeat +"'");

    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
        ui->lblInfo->setText(query.lastError().text());
    }
    else{
        if(query.numRowsAffected() > 0)
        {
            ui->lblInfo->setText("Success!");
            qDebug() << "read was successful "<< query.lastQuery();
        }
        else
        {
            ui->lblInfo->setText("Unable to update data");
        }
       }

    updateUI();
    emit mysignal1();
}
