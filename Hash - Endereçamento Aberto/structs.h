#ifndef STRUCTS_H_INCLUDED
#define STRUCTS_H_INCLUDED

#include <iostream>

using namespace std;

const int TAM = 1000;

struct TElemento{
    int chave;
    string dado;
};

struct tabelaHash{
    TElemento vet[TAM];
};

#endif // STRUCTS_H_INCLUDED
