// INSTRUÇÕES

// 2. Implemente o método da classe Poligono.

// 3. Declare a classe Retangulo e implemente os seus métodos.

// 4. Retângulo consiste de polígono com quatro lados.

// 5. A área de um retângulo é calculada pela fórmula: Area = base × altura

// 6. O perímetro de um retângulo é calculado pela fórmula: Perimetro = 2 x (base + altura)

// CÓDIGO

#include <iostream>

using namespace std;

// Declaração e implementação da classe Poligono.

class Poligono {

protected:
    int numero_lados;

public:
    Poligono(int);
    int getNumeroLados() const {return numero_lados;};

};

Poligono::Poligono(int numLados){
    numero_lados = numLados;
}

// Declaração e implementação da classe Retangulo.
class Retangulo:public Poligono {
    private:
        static const int NUMERO_LADOS;
        float base;
        float altura;
    public:
        Retangulo(float b, float a):Poligono(NUMERO_LADOS), base(b), altura(a){};
        float calcularArea(){
            return base * altura;
        };

        float calcularPerimetro(){
            return 2*(base + altura);
        };
};

const int Retangulo::NUMERO_LADOS = 4;
// Implementação de método main.

int main() {

     float base, altura;   

     cin >> base;

     cin >> altura;

     Retangulo retangulo(base, altura);

     cout << retangulo.getNumeroLados();

     cout << retangulo.calcularArea();

     cout << retangulo.calcularPerimetro();

     return 0;

}