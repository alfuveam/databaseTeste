//#pragma once

#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std;

class Pessoa
{
	public:
		void setNome(string nome);
		string getNome();
	private:
		string nome;		
};
#endif // !PESSOA_H
