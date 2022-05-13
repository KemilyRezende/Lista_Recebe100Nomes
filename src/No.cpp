//No.cpp
#include <iostream>
#include "No.hpp"

using namespace std;

No::No(string nome){
	this->nome = nome;
	this->prox =  NULL;
}

string No::obterValor(){
	return this->nome;
}

No* No::obterProx(){
	return prox;
}

void No::setProx(No* p){
	prox = p;
}
void No::setAtual(string nome){
	this->nome = nome;
}
void No::anulaValor(){
	this->nome = "empty";
}

