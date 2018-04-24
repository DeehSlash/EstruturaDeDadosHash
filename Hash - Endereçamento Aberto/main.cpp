#include <iostream>
#include <time.h>
#include <windows.h>
#include <fstream>
#include "structs.h"
#include "inserir.h"
#include "inicializa.h"
#include "pesquisar.h"
#include "variavelglobal.h"

using namespace std;

int main()
{
    srand (time(NULL));
    tabelaHash tabela;
    TElemento elemento;
    elemento.dado = "Teste";
    inicializa(tabela);
    bool retorno = true;
    int chave, op;
    for(int i = 0; i < operacoes; i++){
        op = 0;
        chave = rand() % 32000+1;
        elemento.chave = chave;
        if(i >= operacoes-10){
            retorno = inserir(tabela, elemento, op);
            amostras[i%10][0] = op;                         // Amostra de inserção.
        } else {
            retorno = inserir(tabela, elemento, op);
        }
        if (retorno == false){
            falhouInsere++;
        }
    }
    for(int i = 0; i < operacoes; i++){
        op = 0;
        chave = rand() % 32000+1;
        if(i >= operacoes-10){
            pesquisar(tabela, chave, op);
            amostras[i%10][1] = op;                         // Amostra de leitura
        } else {
            pesquisar(tabela, chave, op);
        }
    }
    ofstream out ("export.txt");
    for(int i = 0; i < TAM; i++){
        out << "\nVet[" << i << "]: " << tabela.vet[i].chave;
    }

    for(int i = 0; i < 10; i++){
        out << "\n Amostras de performance <escrita> - <leitura>: " << amostras[i][0] << " - " << amostras[i][1];
    }
    out << "\n\nFalhou ao inserir: " << falhouInsere;
    out << "\nEra primeiro da lista: " << primeiro;
    out << "\nEncontrou no meio da lista: " << encontrou;
    out << "\nNao encontrou: " << naoencontrou;
    out.close();

    return 0;
}
