// INSTRUÇÕES

// 1. Copie o código para a área de resposta.

// 2. Implemente os métodos da classe Pilha.

// 3. Classe Pilha implementa uma estrutura de dados pilha (stack).

// 4. Estrutura de dados pilha é uma estrutura de dados LIFO (Last In First Out).

// 5. Método inserir insere no topo da pilha e método remover remove do topo da pilha.

// CÓDIGO

#include <iostream>

using namespace std;

class  Elemento{

	private:

		int dado;

		Elemento*ptr_proximo;

	public:

		void setDado(int);

		int getDado();

		void setProximo(Elemento*);

		Elemento* getProximo();

};

inline void Elemento::setDado(int dado){

	this->dado = dado;

}

inline int Elemento::getDado(){

	return dado;

}

inline void Elemento::setProximo(Elemento *ptr_elemento){

	ptr_proximo = ptr_elemento;

}

inline Elemento* Elemento::getProximo(){

	return ptr_proximo;

}

class Pilha {

	private:

		Elemento*ptr_primeiro;

	public:

		Pilha() { ptr_primeiro = NULL; }

		void inserir(Elemento*);

		Elemento* remover();

};

// Implementações dos métodos.
void Pilha::inserir(Elemento *elemento) {
    elemento->setProximo(ptr_primeiro);
    ptr_primeiro = elemento;
}

Elemento* Pilha::remover(){
    Elemento* elemento = ptr_primeiro;
    ptr_primeiro = ptr_primeiro->getProximo();
    return elemento;
}


int main() {

	Elemento elementoA, elementoB, elementoC;

	int dado;

	cin >> dado;

	elementoA.setDado(dado);

	cin >> dado;

	elementoB.setDado(dado);

	cin >> dado;

	elementoC.setDado(dado);

	Pilha pilha;

	pilha.inserir(&elementoA);

	pilha.inserir(&elementoB);

	pilha.inserir(&elementoC);

	cout << pilha.remover()->getDado();

	cout << pilha.remover()->getDado();

	cout << pilha.remover()->getDado();

	return 0;

}