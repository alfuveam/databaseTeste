#include "stdafx.h"
#include "Retangulo.h"

void Retangulo::setValores(int altura, int largura) {
	this->altura = altura;
	this->largura = largura;
}

int Retangulo::getValores() {
	return this->altura * this->largura;
}

Retangulo::Retangulo() {	
	this->altura = 1;
	this->largura = 1;
}

Retangulo::Retangulo(int altura, int largura) {
	this->altura = altura;
	this->largura = largura;
}

Retangulo::~Retangulo() {
	printf("Destruido");	
}

int Retangulo::angulo = 90;