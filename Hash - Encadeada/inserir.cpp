#include "inserir.h"

using namespace std;

bool inserir(tabelaHash &tabela, TElemento elemento, int &op){
    int indice = dispersao(tabela, elemento.chave);

   	TElemento* novo = new TElemento;
	if (novo == NULL) {
		return false;
	}
	*novo = elemento;
	if (tabela.vet[indice].inicio == NULL) {
		tabela.vet[indice].inicio = novo;
		op++;
	}
	else {
		TElemento* nav = tabela.vet[indice].inicio;
		op++;
		while (nav->proximo != NULL) {
            if (novo->chave == nav->chave){
                return false;
            }
			nav = nav->proximo;
			op++;
		}
		nav->proximo = novo;
		op++;
	}
	novo->proximo = NULL;
	tabela.vet[indice].qtd++;
	return true;
}
