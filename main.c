#include <stdio.h>
#include <stdlib.h>
#include "forca.h"




int main()
{
    NoSecreto * lstSecreta = inicializaListaSecreta();

    lstSecreta = carregaListaArquivo(lstSecreta,
                                     "C:\\Users\\aluno\\Desktop\\forca\\palavras.dat");
    imprimeListaSecreta(lstSecreta);

    return 0;
}
