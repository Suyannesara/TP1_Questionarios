// INSTRUÇÕES

// 1. Copie o código para a área de resposta.

// 2. Para cada classe, complemente o código declarando os atributos necessários.

// 3. Para cada classe, complemente o código implementando os métodos necessários.

#include <iostream>

using namespace std;

class Nome {

    private:
        // Declaração de atributo.
        string valor;

    public:
        void set(string valor){
            this->valor = valor;
        };

        string get() const {
            return valor;
        };

};

class Matricula {

    private:
        // Declaração de atributo.
        int valor;

    public:

        void set(int valor){
            this->valor = valor;
        };

        int get() const {
            return valor;
        };    

};

class Estudante {

    private:
        Nome nome;
        Matricula matricula;
        // Declarações de atributos.

    public:
        // Nome& é só uma declaração, um aviso do tipo: vou receber aqui um parametro por referencia, ou seja, o original e ele é do tipo Nome. Mas esse parametro precisa de algo que o identifique dentro da func, que é o  "nome" nesse caso
        Estudante(Nome& nome, Matricula& matricula){
            this->nome = nome;
            this->matricula = matricula;
        };

        Nome getNome(){
            return nome;
        };

        Matricula getMatricula(){
            return matricula;
        };
};

// Implementações de métodos.



int main(){

    string dadoA;

    int dadoB;  

    cin >> dadoA;

    cin >> dadoB;

    Nome nome;

    Matricula matricula;

    // dadoA = Nome
    nome.set(dadoA);

    // dadoB = Matricula
    matricula.set(dadoB);

    Estudante estudante(nome, matricula);

    cout << estudante.getNome().get();

    cout << estudante.getMatricula().get();

    return 0;

}