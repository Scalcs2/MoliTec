#ifndef DB_MANAGER_H
#define DB_MANAGER_H
#include "head.h"


class DB_Manager
{
public:
    DB_Manager();
private:
    QSqlDatabase m_db;

};

#endif // DB_MANAGER_H
