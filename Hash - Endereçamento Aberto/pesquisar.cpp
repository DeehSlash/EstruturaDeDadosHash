#include "pesquisar.h"

using namespace std;

bool pesquisar(tabelaHash &tabela, int chave, int &op){
    int indice = dispersao(tabela, chave);

	if (tabela.vet[indice].chave == NULL) {
        op++;
		return false;
	}

	if (tabela.vet[indice].chave == chave){
        primeiro++;
        op++;
        return true;
	}

	for(int i = indice; i < TAM; i++){
        if(tabela.vet[i].chave == chave){
            encontrou++;
            op++;
            return true;
        }
        op++;
	}

	for(int i = 0; i < indice; i++){
        if(tabela.vet[i].chave == chave){
            encontrou++;
            op++;
            return true;
        }
        op++;
	}
	naoencontrou++;
	return false;
}
