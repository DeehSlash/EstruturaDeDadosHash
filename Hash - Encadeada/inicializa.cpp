#include "inicializa.h"


void inicializa(tabelaHash &t){
    for(int i = 0; i < TAM; i++){
        TLista novaLista;
        novaLista.qtd = 0;
        novaLista.inicio = NULL;
        t.vet[i] = novaLista;
    }
}
