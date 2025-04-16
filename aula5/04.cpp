// INSTRUÇÕES

// 1. Copie o código para a área de resposta.

// 2. Complemente o código com a declaração do atributo e as implementações dos métodos set e get membros da classe Codigo. 

// 3. Método set deve retornar true e atribuir um valor ao atributo apenas se o valor for par.

// 4. Método set deve retornar false e não atribuir um valor ao atributo se o valor for ímpar.

// 5. Método  get deve retornar o valor do atributo.

// CÓDIGO

#include <iostream>

using namespace std;

class Codigo {

    private:
        int valor;
        // Declaração de atributo.
        bool ehPar(int valor){
            return valor % 2 == 0;
        }

    public:

        bool set(int valor){
            if(ehPar(valor)){
                this->valor = valor;
                return true;
            }
            return false;
        };

        int get() const {
            return valor;
        };

};

// Implementações de métodos.


int main(){

    Codigo codigo; 

    int valor;

    cin >> valor;

    if(valor % 2 == 0 && codigo.set(valor) && codigo.get() == valor) {
        cout << "SUCESSO";

        return 0;
    }

    if(valor % 2 != 0 && !codigo.set(valor) && codigo.get() != valor){
        cout << "SUCESSO";

        return 0;
    }

    cout << "FALHA";

    return 0;
}