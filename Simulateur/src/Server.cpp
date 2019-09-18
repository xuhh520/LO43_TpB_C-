#include <iostream>
#include <fstream>

#include "Server.h"

using namespace std;

// Constructeurs & Destructeur

Server::Server()
{
    //ctor
}

Server::Server(Server const& serv_2)
{
    this->val = serv_2.val;
}

Server::~Server()
{
    //dtor
}

// Surcharge des opérateurs

Server& Server::operator=(Server const& serv_2)
{

}

ostream &operator<<(ostream& out, Server const& serv)
{
    out << "Affichage de l'objet : " << endl;
    out << "val = " << serv.val << endl;
    return out;
}

// Méthodes

void Server::consoleWrite(string text)
{
    cout << "LOG : " << text << endl;
}

void Server::fileWrite(string text, string filePath)
{
    ofstream monFlux(filePath.c_str());
    if(monFlux)
    {
        monFlux << text << endl;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }
}
