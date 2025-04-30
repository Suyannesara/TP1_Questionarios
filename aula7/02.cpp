// INSTRUÇÕES

// 1. Copie o código para a área de resposta.

// 2. Implemente os métodos da classe Poligono.

// 3. Declare as classes Paralelogramo e Trapezio e implemente os seus métodos.

// 4. O perímetro de um paralelograma é calculado pela fórmula: Perimetro = 2 x (a + b)

// 5. O perímetro de um trapézio é calculado pela fórmula: Perimetro = B + b + L1 + L2

// CÓDIGO

#include <iostream>

using namespace std;

// Declaração e implementação da classe Poligono.

class Poligono {
    private:
        string cor;
    protected:
        float b;
    public:

        Poligono(string cor, float b): cor(cor), b(b) {};

        virtual ~Poligono(){}

        string getCor() const { return cor; };

        virtual float calcularPerimetro() = 0;
};

// Declaração e implementação da classe Paralelograma.
class Paralelograma:public Poligono {
    private:
        float a;
        
    public:
        Paralelograma(float a, float b, string cor):Poligono(cor, b), a(a){};
        virtual float calcularPerimetro() override { return 2*(a+b);};
};


// Declaração e implementação da classe Trapezio.
class Trapezio:public Poligono {
    private:
        float B;
        float L1;
        float L2;

    public:
        Trapezio(float B, float b, float L1, float L2, string cor):Poligono(cor, b) {
            this->B = B;
            this->L1 = L1;
            this->L2 = L2;
        };
        virtual float calcularPerimetro() override { return B + b + L1 + L2;};
};


// Implementação de método main.

int main() {

     Poligono*ptr;

     string cor;

     float a, b, B, L1, L2;  

     cin >> cor;

     cin >> a;

     cin >> b;

     cin >> B;

     cin >> L1;

     cin >> L2;

     ptr = new Paralelograma(a,b, cor);

     cout << ptr->getCor();

     cout << ptr->calcularPerimetro();

     delete ptr;

     ptr = new Trapezio(B, b, L1, L2, cor);

     cout << ptr->getCor();

     cout << ptr->calcularPerimetro();

     delete ptr;

     return 0;

}