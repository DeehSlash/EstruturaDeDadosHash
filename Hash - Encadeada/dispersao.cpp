#include "structs.h"
#include "dispersao.h"

using namespace std;

int dispersao(tabelaHash &tabela, int chave){
    return chave % TAM;
}
