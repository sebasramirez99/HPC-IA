#include "FUNCIONES/fm.h"
#include <iostream>


int main(int argc, char* argv[]){

    /* ExtraccionData extraer(argv[1], argv[2],argv[3]);*/

    fm M(argv[1]);
    M.muestra(argv[1]);
    std::cout << "holiii"<<std::endl;
    return 0;
}
