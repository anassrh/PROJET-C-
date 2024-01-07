#include "mydb.h"

MyDB* MyDB::instance = nullptr;

MyDB::MyDB()
{
    init();
}
void MyDB::init()
{
    qDebug() << "in init()";
    db = QSqlDatabase::addDatabase("QSQLITE", "Data");
    db.setDatabaseName("C:/Users/Lenovo/Downloads/QT_Project_on_Movie_Ticket_Booking/QT_Project_On_Movie_Ticket_Booking/movie_ticket_booking.sqlite");

    if(QFile::exists("C:/Users/Lenovo/Downloads/QT_Project_on_Movie_Ticket_Booking/QT_Project_On_Movie_Ticket_Booking/movie_ticket_booking.sqlite"))
            qDebug() << "DB file exist";
        else
           qDebug() << "DB file doesn't exists";

        if (!db.open())
            qDebug() << db.lastError().text();
        else
            qDebug() << "Database loaded successfull!";

}

MyDB *MyDB::getInstance()
{
    qDebug() << "in MyDB::getInstance()";

    if(instance == nullptr)
        instance = new MyDB();

    return instance;
}

QSqlDatabase MyDB::getDBInstance()
{
    qDebug() <<"in getDBInstance()";
    return db;
}

void MyDB::ResetInstance()
{
      qDebug() << "deleting instance of MyDB";
      delete instance;
      instance = nullptr;
}

MyDB::~MyDB()
{
   qDebug() << "closing database connection";
   db.close();
}
