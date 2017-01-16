#include "stdafx.h"
#include "ConexaoBanco.h"

//	Fecha a conexao
void ConexaoBanco::CloseConn(PGconn *conn) {
	PQfinish(conn);
	getchar();
	exit(1);
}

//	Conecta no banco

void ConexaoBanco::ConnectDB() {
	PGconn *conn = NULL;

	//	String de conexao
	conn = PQconnectdb("user=postgres password=9960038 dbname=testdb hostaddr=127.0.0.1 port=5432");

	if (PQstatus(conn) != CONNECTION_OK)
	{
		printf("Conexao falhou");
		CloseConn(conn);
	}
	printf("Conectado a database - OK");	
}