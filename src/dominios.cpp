/*
    @author: Igor Silva de Oliveira Cardoso

*/

#include <string>
#include <stdexcept>
#include <ctype.h>

#include "dominios.h"

using namespace std;

// Capacidade


// Cargo


// Classificacao
bool Classificacao::validarValor(string classificacao) {
    if(classificacao.compare("livre") == 0 || classificacao.compare("10") == 0 ||
        classificacao.compare("12") == 0 || classificacao.compare("14") == 0 ||
        classificacao.compare("16") == 0 || classificacao.compare("18") == 0)
        return true;
    else
        throw invalid_argument("Erro no parametro da classe Classificacao.");
}

void Classificacao::setValor(string classificacao) {
	validarValor(classificacao);
	this->classificacao = classificacao;
}
