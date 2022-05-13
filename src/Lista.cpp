// Lista.cpp
#include <iostream>
#include "No.hpp"
#include "Lista.hpp"

using namespace std;

Lista::Lista(){
	cabeca = NULL;
	cauda = NULL;
}

Lista::Lista(string nome){
	cabeca = new No(nome);
	cauda = cabeca;
}

bool Lista::verificaVazia(){
	return (cabeca == NULL);
}

void Lista::MostarTodos(){
	this->test = "empty";
	cout << "\nImprimindo elementos.\n";
	No* c = cabeca;
	int i = 0;
	string valor;
	if(verificaVazia())
		cout << "Lista vazia!\n";
	else
	{
		for (i = 0; i< this->Size(); i++)
		{
			valor = c->obterValor();
			if (valor != test){
				cout << valor << endl;
			}
			c = c->obterProx();
		}
	}
}

void Lista::inserirFinal(string nome){
	No* novo_no = new No(nome);

	if(verificaVazia())
	{
		cabeca = novo_no;
		cauda = novo_no;
	}
	else{
		bool ver;
		ver = true;
		this->test = "empty";
		No* ant = cabeca;
		No* c = ant->obterProx();
		while(c){
		// O custo operacional para n�o mover os ponteiros � O(n), Teta(3n/2) e �mega(2n).
			if (ant->obterValor() == test){
				ant->setAtual(nome);
				ver = false;
				cont++;
				break;
			}
			else if(c->obterValor() == test){
				c->setAtual(nome);
				ver = false;
				cont++;
				break;
			}
			ant = ant->obterProx();
			c = c->obterProx();
		}
		if (ver && cont == 100){
			cout << "\nLista cheia\n";
		}
		else if (ver && cont < 100){
			cauda->setProx(novo_no);
			cauda = novo_no;
			cont++;
		}	
	}
}

int Lista::Size(){
	if(verificaVazia()){
		cout << "\nLista vazia -> tamanho = 0.";	
	}
	No* c = cabeca;
	int tam = 0;
	do
	{
		c = c->obterProx();
		tam++;
	}
	while(c);
	
	return tam;
}
void Lista::removeReplicas(){
	if(verificaVazia()){
		cout << "\nLista vazia -> tamanho = 0.";	
	}
	else{
		No* ant = cabeca;
		No* aux = ant->obterProx();
		while (aux){
			No* c = ant->obterProx();
			while(c){
				No* d = c;
				if (d->obterValor() == ant->obterValor()){
					d->anulaValor();
				}
				c = c->obterProx();
			}
			ant = ant->obterProx();
			aux = aux->obterProx();
		}
	}
}
