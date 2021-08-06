/*
    @author: Igor Silva de Oliveira Cardoso

*/

#include <string>
#include <stdexcept>
#include <ctype.h>
#include <vector>

#include "dominios.h"

using namespace std;
//using std::find;
//using std::string;


// Capacidade
bool Capacidade::validarValor(int valor) {
    if(valor == 100 || valor == 200 || valor == 300 || valor == 400 || valor == 500)
        return true;
    throw invalid_argument("Erro no parametro da classe Capacidade.");
}

void Capacidade::setValor(int valor) {
    validarValor(valor);
    this->capacidade = valor;
}

// Cargo
bool Cargo::validarValor(string valor) {
    //vector<string> cargos = {"ator", "cenógrafo", "figurinista", "maquiador", "sonoplasta", "iluminador"};

    //if(*find(cargos.begin(), cargos.end(), valor) == valor)
    //    return true;

    if(valor.compare("ator") == 0 || valor.compare("cenógrafo") == 0 ||
        valor.compare("figurinista") == 0 || valor.compare("maquiador") == 0 ||
        valor.compare("sonoplasta") == 0 || valor.compare("iluminador") == 0)
        return true;
    throw invalid_argument("Erro no parametro da classe Cargo.");
}

void Cargo::setValor(string valor) {
    validarValor(valor);
    this->cargo = valor;
}

// Classificacao
bool Classificacao::validarValor(string classificacao) {
    if(classificacao.compare("livre") == 0 || classificacao.compare("10") == 0 ||
        classificacao.compare("12") == 0 || classificacao.compare("14") == 0 ||
        classificacao.compare("16") == 0 || classificacao.compare("18") == 0)
        return true;
    throw invalid_argument("Erro no parametro da classe Classificacao.");
}

void Classificacao::setValor(string classificacao) {
	validarValor(classificacao);
	this->classificacao = classificacao;
}

// Codigo
bool Codigo::validarValor(string valor) {

}
void Codigo::setValor(string valor) {
    validarValor(valor);
    this->codigo = valor;
}

//Data

