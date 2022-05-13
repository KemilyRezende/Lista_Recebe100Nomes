// Main.cpp
#include <iostream>
#include "Lista.hpp"
#include <locale.h>

using namespace std;

int main() {
	int op, num, i;
	string Nome;
	Lista l;
	setlocale (LC_ALL, "Portuguese");
	do{
		cout << "\nOP��ES:\n    1. Adicionar Nomes.\n    2. Excluir R�plicas.\n    3. Mostrar Nomes.\n    4. Encerrar programa.\n";
		cin >> op;
		switch(op){
			case 1:
				do{
					cout << "Quantos nomes desejas adicionar? ";
					cin >> num;	
					if (num > 100){
						cout << "\nH� apenas 100 espa�os de mem�ria reservados para nomes.\n";
					}
				}while (num >100 || num < 0);
				cin.ignore();
				for (i = 0; i< num; i++){
					cout << "\nNome: ";
					cin >> Nome;
					l.inserirFinal(Nome);
				}
				break;
			case 2:
				cout << "\nPreparando para excluir r�plicas.\n";
				l.removeReplicas();
				break;
			case 3:
				cout << "\nMostrar nomes armazenados:\n";
				l.MostarTodos();
				break;	
		}		 
	}while (op < 4);
	return 0;
}

