// Lista.hpp
#include <iostream>
#ifndef __LISTA__HPP
#define __LISTA__HPP
#include "No.hpp"

using namespace std;

class Lista{
	private:
		No* cabeca;
		No* cauda;
		string test;
		int cont = 0;
	public:
		Lista();
		Lista (string nome);
		void MostarTodos();
		bool verificaVazia();
		void inserirFinal(string nome);
		int Size();
		void removeReplicas();
		
};

#endif

