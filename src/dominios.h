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
        bool validarValor(int);

    public:
        void setValor(int);
        int getValor() const {
                return capacidade;
        }
};


class Cargo {
    private:
        string cargo;
        bool validarValor(string);

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

class Codigo {
    public:
        string codigo;
        bool validarValor(string);
    private:
        void setValor(string);
		string getValor() const {
            return codigo;
		}
};



class Data {
    public:
        string data;

    private:
};







#endif // DOMINIOS_H_INCLUDED
