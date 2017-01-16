#pragma once
#ifndef CONEXAOBANCO_H
#define CONEXAOBANCO_H

#include <string>
#include <libpq-fe.h>

class ConexaoBanco
{
	public:
		void CloseConn(PGconn *conn);
		void ConnectDB();		
	private:
		
};

#endif /* CONEXAOBANCO_H*/