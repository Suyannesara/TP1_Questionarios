// INSTRUÇÕES

// 1. Copie o código para a área de resposta.

// 2. Complemente o código com as implementações dos métodos set e get membros da classe Codigo. 

// 3. Método set deve atribuir valor ao atributo.

// 4. Método  get deve retornar valor do atributo.

// CÓDIGO

#include <iostream>

using namespace std;

class Codigo {
    private:
        int valor;

     public:
        void set(int valor){
            this->valor = valor;
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

    codigo.set(valor);

    cout << codigo.get();

    return 0;

}