// INSTRUÇÕES

// 1. Copie o código para a área de resposta.

// 2. Declare e as classes Poligono, Quadrado e Pentagono e implemente os seus métodos.

// 3. Quadrado consiste de polígono com quatro lados.

// 4. Pentágono regular consiste de polígono com cinco lados.

// 5. A área de um quadrado é calculada pela fórmula: Area = lado × lado

// 6. A área um pentágo regular é calculada pela fórmula: Area = 5 x lado x apotema / 2

// CÓDIGO

#include <iostream>

using namespace std;

// Declaração e implementação da classe Poligono.
class Poligono {
    protected:
        float lado;
    public:
        Poligono(float lado) {
            this->lado = lado;
        };
        virtual int getNumeroLados() = 0;
        virtual float calcularArea() = 0;
};

// Declaração e implementação da classe Quadrado.
class Quadrado:public Poligono{
    public:
        Quadrado(float lado):Poligono(lado){};
        virtual int getNumeroLados() override { return 4; };
        virtual float calcularArea() override { return lado * lado; };

};

// Declaração e implementação da classe Pentagono.
class Pentagono:public Poligono {
    private:
        float apotema;
    public:
        Pentagono(float lado, float apotema):Poligono(lado), apotema(apotema){};
        virtual int getNumeroLados() override { return 5; };
        virtual float calcularArea() override { return 5 * lado * apotema / 2; };
};


// Implementação de método main.

int main() {

     float lado, apotema;   

     cin >> lado;

     cin >> apotema;

     Poligono*ptr;

     ptr = new Quadrado(lado);

     cout << ptr->getNumeroLados();

     cout << ptr->calcularArea();

     ptr = new Pentagono(lado, apotema);

    cout << ptr->getNumeroLados();

     cout << ptr->calcularArea();

     return 0;

}