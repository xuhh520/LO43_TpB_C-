#include <iostream>
#include <string>
#include <fstream>

#include "server.hpp"
 
using namespace std;

void Server::fileWrite(string nomFichier) {
	ofstream fichier;
	fichier.open(nomFichier);
	
	fichier << "donnees a entrees" << endl;
	
	file.close();
}

/*void Server::filewrite()
    {
 	cout<<"file write"<<endl;
    }*/
 
 
    void Server::consolewrite()
    {
 	cout<<"console write"<<endl;
    }
 
int main()
{

  Server serv;

   serv.consolewrite("a.out");
   serv.filewrite();
 
    return 0;
}
