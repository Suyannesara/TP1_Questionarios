// INSTRUÇÕES

// 1. Copie o código para a área de resposta.

// 2. Declare e implemente a classe Triangulo.

// 3. Triângulo consiste de polígono com três lados.

// 4. A área de um triângulo é calculada pela fórmula: Area = (base x altura) / 2

// CÓDIGO

#include <iostream>

using namespace std;

// Declaração e implementação da classe Poligono.

class Poligono {

private:

     string nome;

     int numero_lados;

public:

     Poligono(string, int);

     string getNome(){ return nome;}

     int getNumeroLados(){ return numero_lados;}

};

Poligono::Poligono(string nome, int numero_lados){

     this->nome = nome;

     this->numero_lados = numero_lados;

}

// Declaração e implementação da classe Triangulo.
class Triangulo:public Poligono{
    private:
        float base;
        float altura;
    public:
        Triangulo(float base, float altura, std::string nome, int numeroLados): Poligono(nome, numeroLados){
            this->base = base;
            this->altura = altura;
        };

        float calcularArea(){
            return (base*altura)/2;
        }
};

// Implementação de método main.

int main() {

     string nome; 

     float base, altura;   

     cin >> nome;

     cin >> base;

     cin >> altura;

     Triangulo triangulo(base, altura, nome, 3);

     cout << triangulo.getNome();

     cout << triangulo.getNumeroLados();

     cout << triangulo.calcularArea();

     return 0;

}