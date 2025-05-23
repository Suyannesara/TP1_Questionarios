// INSTRUÇÕES

// 1. Copie o código para a área de resposta.

// 2. Complemente o código declarando os atributos.

// 3. Complemente o código declarando e implementando a classe Elemento.

// CÓDIGO

#include <iostream>

using namespace std;

// Declaração e implementação da classe Elemento.
class Elemento {
    private:
        Elemento *ptr_prox;
        int chave;
    public:
        Elemento(int chave){
            this->chave = chave;
            ptr_prox = nullptr;
        }
        int getChave(){
            return chave;
        }

        Elemento* getProximo(){
            return ptr_prox;
        }

        void setProximo(Elemento* ptr_prox){
            this->ptr_prox = ptr_prox;
        }
};


// Declaração e implementação da classe TabelaDispersao.

class TabelaDispersao {

private:

    int dimensao;

    Elemento **entrada;

    int funcaoDispersao(int);

public:

    TabelaDispersao(int);

    ~TabelaDispersao(){delete []entrada;}

    Elemento* ler(int);

    void inserir(Elemento*);

    void remover(int);

};

inline int TabelaDispersao::funcaoDispersao(int valor){

    return valor % dimensao;

}

TabelaDispersao::TabelaDispersao(int dimensao){

    entrada = new Elemento*[dimensao];

    for(int n = 0; n < dimensao; n++)

        entrada[n] = nullptr;

    this->dimensao = dimensao;

}

Elemento* TabelaDispersao::ler(int chave){

    Elemento* ponteiro = entrada[funcaoDispersao(chave)];

    while(ponteiro != nullptr){

        if(ponteiro->getChave() == chave)

            return ponteiro;

        ponteiro = ponteiro->getProximo();

    }

    return nullptr;

}

void TabelaDispersao::inserir(Elemento* elemento){

    Elemento *ponteiro = entrada[funcaoDispersao(elemento->getChave())];

    Elemento *anterior;

    if(ponteiro == nullptr){

        entrada[funcaoDispersao(elemento->getChave())] = elemento;

    }

    else {

        while(ponteiro != nullptr){

            if(ponteiro->getChave() == elemento->getChave())

                return;

            anterior = ponteiro;

            ponteiro = ponteiro->getProximo();

        }

        anterior->setProximo(elemento);

    }

}

void TabelaDispersao::remover(int chave){

    Elemento *ponteiro = entrada[funcaoDispersao(chave)];

    Elemento *anterior;

    if(ponteiro->getChave() == chave){

        entrada[funcaoDispersao(chave)] = ponteiro->getProximo();

    }

    else{

        while(ponteiro->getProximo() != nullptr){

            anterior = ponteiro;

            ponteiro = ponteiro->getProximo();

            if(ponteiro->getChave() == chave){

                anterior->setProximo(ponteiro->getProximo());

                break;

            }

        }

    }

    return;

}

// Declaração e implementação da função main.

int main()

{

    TabelaDispersao tabela(2);

    Elemento *ponteiro;

    int entrada;

    tabela.inserir(new Elemento(100));

    tabela.inserir(new Elemento(200));

    tabela.inserir(new Elemento(300));

    tabela.inserir(new Elemento(401));

    tabela.inserir(new Elemento(501));

    tabela.remover(200);

    for(int n = 1; n < 6;n++){

        cin >> entrada;

        ponteiro = tabela.ler(entrada);

        if(ponteiro == nullptr)

            cout << 0 ;

        else

            cout << ponteiro->getChave() ;

    }

    return 0;

}