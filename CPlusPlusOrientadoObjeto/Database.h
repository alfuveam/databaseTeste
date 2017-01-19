#pragma once

class Database
{
public:
	Database() {};
	virtual ~Database() {};
		
		static Database& getDatabase();
		virtual std::string getVerdade();
	protected:
		//static Database instance;		
private:
		
	
};

class DBResult
{
public:
	DBResult();
	~DBResult();
};