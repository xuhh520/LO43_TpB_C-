#include <iostream>
#include "Serveur.h"

using namespace std;

class Serveur{

    // Constructeur par defaut
    Serveur::Serveur(){
        temperature = 0;
        humidite = 0 ;
        lumiere = 0 ;
        sonore = 0 ;
    }

    // Constructeur par recopie
    Serveur :: Serveur(const Serveur& autre):
        temperature(autre.temperature),
        humidite(autre.humidite),
        lumiere(autre.lumiere),
        sonore(autre.sonore){

        }


    // Destructeur
    Serveur::~Serveur(){

    }

    /*----------------------------------*/

    void consoleWrite(int aff){
        cout << "Info :" << aff << endl;
    }

    void fileWrite{


    }
}

/*---------------------------------------------*/

int main(int argc, char **argv) {

    Serveur serv;
    serv.consoleWrite(4);

    return EXIT_SUCCESS;

}



