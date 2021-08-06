/*
    @author: Igor Silva de Oliveira Cardoso

*/

#include <iostream>
#include "dominios.h"

using namespace std;

int main(void) {
    Classificacao classificacao;
    Capacidade capacidade;
    Cargo cargo;

    cargo.setValor("ator");

    cout << cargo.getValor();

    return 0;
}
