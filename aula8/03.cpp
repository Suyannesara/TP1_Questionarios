// INSTRUÇÕES

// 1. Copie o código para a área de resposta.

// 2. Complemente o código declarando e implementando a classe Codigo.

// 3. Classe Codigo armazena valor se o mesmo for menor ou igual a 100.

// 4. Complemente o código declarando e implementando a classe Preco.

// 5. Classe Preco armazena valor se o mesmo for menor ou igual a 200.

// 6. Complemente o código declarando e implementando a classe Pedido.

// 7. Classe Pedido é composta por atributos que são instâncias de Codigo e Preco.

// CÓDIGO

#include <iostream>
#include <stdexcept>
using namespace std;

class Codigo {
private:
    int valor;
public:
    void set(int dado){
        if(dado <= 100){
            valor = dado;
        } else {
            throw invalid_argument("Argumento invalido");
        }
    }

    int get(){
        return valor;
    }
};

class Preco {
private:
    int valor;
public:
    void set(int dado){
        if(dado <= 200){
            valor = dado;
        } else {
            throw invalid_argument("Argumento invalido");
        }
    }

    int get(){
        return valor;
    }
};

class Pedido {
private:
    Codigo codigo;
    Preco preco;
public:
    void setCodigo(Codigo codigo){
        this->codigo = codigo;
    }

    void setPreco(Preco preco){
        this->preco = preco;
    }

    Codigo getCodigo(){
        return codigo;
    }

    Preco getPreco(){
        return preco;
    }
};

int main(){  
    int dadoA, dadoB;
    cin >> dadoA;
    cin >> dadoB;

    Codigo codigo;
    Preco preco;

    try {
        codigo.set(dadoA);
        preco.set(dadoB);
    }
    catch(invalid_argument &excecao){
        cout << "FALHA";
        return 0;
    }

    Pedido pedido;
    pedido.setCodigo(codigo);
    pedido.setPreco(preco);

    cout << pedido.getCodigo().get();
    cout << pedido.getPreco().get();

    return 0;
}
