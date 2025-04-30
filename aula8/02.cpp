// INSTRUÇÕES

// 1. Copie o código para a área de resposta.

// 2. Complemente o código declarando atributo da classe.

// 3. Complemente o código implementando método validar.

// 4. Método validar lança exceção se tamanho do valor passado como parâmetro for superior a TAMANHO_MAXIMO.

// 5. Parâmetro quando do lançamento da exceção é "Argumento invalido".

// 6. Complemente o código implementando os métodos set e get .

// 7. Método set armazena valor passado como parâmetro se método validar não lançar exceção.

// 8. Método get retorna valor do atributo da classe.

// CÓDIGO

#include <iostream>
#include <stdexcept>

using namespace std;

#define TAMANHO_MAXIMO 5

class Nome {
private:
    string valor;

    void validar(string texto) {
        if (texto.size() > TAMANHO_MAXIMO)
            throw invalid_argument("Argumento invalido");
    }

public:
    void set(string texto) {
        validar(texto);
        valor = texto;
    }

    string get() {
        return valor;
    }
};

int main() {
    string dadoA, dadoB;

    cin >> dadoA;
    cin >> dadoB;

    Nome nome;

    try {
        nome.set(dadoA);
    }
    catch (invalid_argument &excessao) {
        cout << excessao.what();
    }

    try {
        nome.set(dadoB);
    }
    catch (invalid_argument &excessao) {
        cout << excessao.what();
    }

    return 0;
}
