#include <iostream>

using namespace std;

class Serveur{


    public:

    // Constructeur par defaut
    Serveur();

    // Constructeur par recopie
    Serveur(const Serveur& autre);

    // Destructeur
    ~Serveur();


    void consoleWrite(int);
    void fileWrite();


    private:

    int temperature;
    int humidite;

};

