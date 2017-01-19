// CPlusPlusOrientadoObjeto.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Pessoa.h"
#include "Retangulo.h"
#include "ConexaoBanco.h"
#include <libpq-fe.h>
#include "Database.h"
using namespace std;

int main()
{
	Database rs;
	Database& db = Database::getDatabase();
	std::cout << "Mostra valor 1: " << db.getVerdade() << std::endl;;
	Database& a = Database::getDatabase();
	std::cout << "Mostra valor 2: " << a.getVerdade() << std::endl;;
	std::cout << "Mostra valor 3: " << rs.getVerdade() << std::endl;;
	system("PAUSE");
}

	//Pessoa p1;
	//Pessoa p2;
	//p1.setNome("Felipe");
	//
	//p2.setNome("Joao");
	//
	//cout << "a" << endl;
	//cout << p1.getNome() << endl;
	//cout << p2.getNome() << endl;
//-------------------------------------------------
	//Retangulo r1;
	//Retangulo r2(5,6);

	//int area = r1.getValores();	
	////r1.setValores(10, 20);
	//cout << "A1: " << r1.angulo << endl;
	//cout << "A2: " << r2.angulo << endl;	

	//r1.angulo = 100;

	//cout << "A1: " << r1.angulo << endl;
	//cout << "A2: " << r2.angulo << endl;
 //   //return 0;
//-------------------------------------------------
	//ConexaoBanco cb;
	//cb.ConnectDB();

/*
	--	Old modelo
class Pessoaa {
	private:
		string nome;
	public:
		string getNome() {
			return nome;
		}
		void setNome(string nome) {
				this->nome = nome;
		}
};
*/
//class Database
//{
//	public:
//		static Database* getDatabase();
//protected:
//	static Database *instance;
//};
//Database* Database::getDatabase()
//{
//
//}
//
//class PgSQLDatabase
//{
//public:
//
//};