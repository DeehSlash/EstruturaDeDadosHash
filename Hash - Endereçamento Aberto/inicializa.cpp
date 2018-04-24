#include "inicializa.h"

using namespace std;

void inicializa(tabelaHash &t){
    for(int i = 0; i < TAM; i++){
        TElemento novoElemento;
        novoElemento.chave = NULL;
        novoElemento.dado = "";
        t.vet[i] = novoElemento;
    }
}
