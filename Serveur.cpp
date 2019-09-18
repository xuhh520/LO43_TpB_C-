#include <iostream>
#include <fstream>
#include "Serveur.h"

using namespace std;



    // Constructeur par defaut
    Serveur::Serveur(){
        temperature = 0;
        humidite = 0 ;
    }

    // Constructeur par recopie
    Serveur :: Serveur(const Serveur& autre):
        temperature(autre.temperature),
        humidite(autre.humidite){

        }


    // Destructeur
    Serveur::~Serveur(){

    }

    /*----------------------------------*/

    void Serveur::consoleWrite(int aff){
        cout << "Info :" << aff << endl;
    }

    void Serveur::fileWrite(int aff){
        ofstream monFlux("logs_save.txt");
        if(monFlux){

            monFlux << "Info :"<< aff << endl;

        }else{
            cout << "ERREUR : Impossible d'accerder au fichier."<< endl;
        }
    }


