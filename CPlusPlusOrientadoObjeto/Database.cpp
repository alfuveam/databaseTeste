#include "stdafx.h"
#include "Database.h"
#include "PgSQLDatabase.h"


//Database::Database()
//{
//}
//Database::Database PgSQLDatabase

//Database::~Database()
//{
//}
Database* Database::instance;

//Database* Database::instance = NULL;
Database* Database::getDatabase() {
	if (!instance) {
		//PgSQLDatabase *a = new PgSQLDatabase();
		instance = new PgSQLDatabase();
		std::cout << "Criando:" << std::endl;
	}
	else {
		std::cout << "Criado:" << std::endl;
	}
	return instance;
}

std::string Database::getVerdade() {
	return "Database";
}
