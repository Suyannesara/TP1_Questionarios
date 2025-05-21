// INSTRUÇÕES

// 1. Copie o código para a área de resposta.

// 2. Declare e implemente as classes Elemento e Fila.

// 3. Classe Fila implementa fila (queue) de elementos.

// 4. Estrutura de dados fila é uma estrutura de dados FIFO (First In First Out).

// CÓDIGO

#include <iostream>

using namespace std;

// Declarações das classes e implementações dos métodos.
class Elemento
{
private:
    int dado;
    Elemento *ptr_prox;

public:
    void setDado(int dado)
    {
        this->dado = dado;
        setProx(nullptr);
    }
    void setProx(Elemento *prox)
    {
        ptr_prox = prox;
    }

    int getDado()
    {
        return dado;
    }

    Elemento *getProximo()
    {
        return ptr_prox;
    }
};

class Fila
{
private:
    Elemento *ptr_primeiro = nullptr;
    Elemento *ptr_ultimo;

public:
    void inserir(Elemento *novo)
    {
        if (ptr_primeiro == nullptr)
        {
            ptr_primeiro = novo;
            ptr_ultimo = novo;
            return;
        }

        ptr_ultimo->setProx(novo);
        ptr_ultimo = novo;
        novo->setProx(nullptr);
    }

    Elemento *remover()
    {
        if (ptr_primeiro == nullptr)
        {
            return nullptr; // Fila vazia
        }
        Elemento *removido = ptr_primeiro;
        ptr_primeiro = ptr_primeiro->getProximo();

        if (ptr_primeiro == nullptr)
        {
            ptr_ultimo = nullptr;
        }

        return removido;
    }
};

int main()
{

    Elemento elementoA, elementoB, elementoC;

    int dado;

    cin >> dado;

    elementoA.setDado(dado);

    cin >> dado;

    elementoB.setDado(dado);

    cin >> dado;

    elementoC.setDado(dado);

    Fila fila;

    fila.inserir(&elementoA);

    fila.inserir(&elementoB);

    fila.inserir(&elementoC);

    cout << fila.remover()->getDado();

    cout << fila.remover()->getDado();

    cout << fila.remover()->getDado();

    return 0;
}
