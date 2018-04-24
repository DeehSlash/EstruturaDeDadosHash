#include "inserir.h"

using namespace std;

bool inserir(tabelaHash &tabela, TElemento elemento, int &op){
    int indice = dispersao(tabela, elemento.chave);

   	TElemento* novo = new TElemento;
	if (novo == NULL) {
		return false;
	}

	*novo = elemento;

	for(int i = indice; i < TAM; i++){
        if(tabela.vet[i].chave == novo->chave){
            return false;
        }
        if (tabela.vet[i].chave == NULL) {
            tabela.vet[i] = *novo;
            op++;
            return true;
        }
        op++;
	}
    for(int i = 0; i < indice; i++){
        if(tabela.vet[i].chave == novo->chave){
            return false;
        }
        if (tabela.vet[i].chave == NULL){
            tabela.vet[i] = *novo;
            op++;
            return true;
        }
        op++;
    }
	return false;
}
