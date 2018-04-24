#include "pesquisar.h"

using namespace std;

bool pesquisar(tabelaHash &tabela, int chave, int &op){
    int indice = dispersao(tabela, chave);

	if (tabela.vet[indice].inicio == NULL) {
		return false;
	}
	TElemento* nav = tabela.vet[indice].inicio;
	op++;
	if(nav->chave == chave){
        primeiro ++;
	}
    while (nav != NULL) {
        if(nav->chave == chave){
            encontrou++;
            return true;
        }
		nav = nav->proximo;
		op++;
	}
	naoencontrou++;
	return false;
}
