/*
    @author: Igor Silva de Oliveira Cardoso

*/

#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;


class Capacidade {
    private:
        int capacidade;

    public:
        int getValor() const {
                return capacidade;
        }
};


class Cargo {
    private:
        string cargo;
        //bool validarValor(string);

    public:
        void setValor(string);
		string getValor() const {
            return cargo;
		}
};


class Classificacao {
    private:
        string classificacao;
        bool validarValor(string);
    public:
        void setValor(string);
		string getValor() const {
            return classificacao;
		}
};




#endif // DOMINIOS_H_INCLUDED
