#pragma once
#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo
{
	public:
		static int angulo;
		Retangulo();
		Retangulo(int altura, int largura);
		~Retangulo();
		void setValores(int altura, int largura);
		int getValores();
	private:
		int altura;
		int largura;
};

#endif /* RETANGULO_H */