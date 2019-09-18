#include <iostream>

using namespace std;

class Serveur{


    public:

    // Constructeur par defaut
    Serveur();
    // Constructeur par recopie

    // Destructeur
    ~Serveur();

    private:

    int temperature;
    int humidite;
    int lumiere;
    int sonore;

    void consoleWrite();
    void fileWrite;

}


int main(int argc, char **argv) {



    return EXIT_SUCCESS;

}



