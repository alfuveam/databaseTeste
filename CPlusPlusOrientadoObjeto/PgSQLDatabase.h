#include "Database.h"

class PgSQLDatabase : public Database
{
public:
	PgSQLDatabase();
	~PgSQLDatabase();
	std::string getVerdade();	
};

class PgSQLDBResult : public DBResult
{
public:
	friend class PgSQLDatabase;
};