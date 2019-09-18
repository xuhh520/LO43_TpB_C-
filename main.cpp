#include <iostream>
#include "Serveur.h"


using namespace std;

int main(int argc, char **argv) {

    Serveur serv;

    serv.consoleWrite(4);
    serv.fileWrite(4);


    return EXIT_SUCCESS;

}



