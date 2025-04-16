// INSTRUÇÕES

// 1. Copie o código para a área de resposta.

// 2. Complemente o código declarando os atributos necessários.

// 3. Complemente o código declarando e implementando os métodos construtores necessários.

// 4. Complemente o código declarando e implementando os métodos get necessários.

#include <iostream>

using namespace std;

class Endereco {
    private:
        string cidade;
        string estado;
    // Declarações de atributos.

    public:    
    // Declarações de métodos.  
        // Sobrecarga de construtores -> 2 com assinaturas diferentes
        Endereco(string cidade, string estado){
            this->cidade = cidade;
            this->estado = estado;
        };
        Endereco(string cidade){
            this->cidade = cidade;
            estado = "";
        };
        string getCidade() const {
            return cidade;
        };
        string getEstado() const {
            return estado;
        };



};

// Implementações de métodos.
int main(){

    string cidade, estado;

    cin >> cidade;

    cin >> estado;    

    Endereco enderecoA(cidade);

    Endereco enderecoB(cidade, estado);   

    cout << enderecoA.getCidade();

    cout << enderecoB.getCidade();

    cout << enderecoB.getEstado();

    return 0;

}

