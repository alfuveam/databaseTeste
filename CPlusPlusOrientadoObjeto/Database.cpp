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
//Database Database::instance;

//Database* Database::instance = NULL;
Database& Database::getDatabase() {

		//PgSQLDatabase *a = new PgSQLDatabase();
	if (true) {
		std::cout << "Criando:" << std::endl;
		static PgSQLDatabase instance;
		return instance;
	}
	std::cout << "No database option" << std::endl;
	static Database instance;
	return instance;
}

std::string Database::getVerdade() {
	return "Database";
}
