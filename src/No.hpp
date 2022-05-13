// No.hpp
#include <iostream>
#ifndef __NO__HPP
#define __NO__HPP

using namespace std;

class No{
	private:
		string nome;
		No* prox;
	public:
		No(string nome);
		string obterValor();
		No* obterProx();
		void setProx(No* p);
		void setAtual(string nome);
		void anulaValor();
};

#endif
