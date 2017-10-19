#include "db_manager.h"

DB_Manager::DB_Manager()
{
//SQLITE

//    m_db = QSqlDatabase::addDatabase("QSQLITE");
//    m_db.setDatabaseName("acopio.db");




//AZURE

//    QString conexion = "Driver={ODBC Driver 13 for SQL Server};"
//                       "Server=tcp:dds2017.database.windows.net,1433;"
//                       "Database=cdp_db2;"
//                       "Uid=jcisneros@dds2017;"
//                       "Pwd=CDP2017!;"
//                       "Encrypt=yes;"
//                       "TrustServerCertificate=no;"
//                       "Connection Timeout=30;";
//    m_db = QSqlDatabase::addDatabase("QODBC");
//    m_db.setDatabaseName(conexion);



//MARIADB

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("emtarg.com.ar");
    db.setUserName("emtargc1_jose12");
    db.setPassword("a123456789");
    db.setDatabaseName("emtargc1_diseno");
    db.open();





    if (m_db.open())
    {
       qDebug() << "Database: connection ok";
//       QSqlQuery query;
//       QString q = "CREATE TABLE Persona (id INTEGER, dni INTEGER, nom VARCHAR(40), PRIMARY KEY(id));";
//       query.exec(q);
//       if (query.lastError().isValid())
//           qDebug() << query.lastError();
     }
    else
    {

       qDebug() << "Error: connection with database fail";
       qDebug() << m_db.lastError();
    }


}
