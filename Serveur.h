#include <iostream>

using namespace std;

class Serveur{


    public:

    // Constructeur par defaut
    Serveur();

    // Constructeur par recopie
    Serveur :: Serveur(const Serveur& autre);

    // Destructeur
    ~Serveur();


    void consoleWrite(int);
    void fileWrite();


    private:

    int temperature;
    int humidite;

};


int main(int argc, char **argv) {



    return EXIT_SUCCESS;

}



