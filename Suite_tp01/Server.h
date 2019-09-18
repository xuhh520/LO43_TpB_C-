#include <iostream>
#include <fstream>

using namespace std;

class Server {

	public :

		Server ();//constructeur par défault
		Server(const Server&);// constructeur de recopie
		~Server ();//Destructeur écentuellement virtuel
		Server &operator=(const Server&);//oprateur d'affection
	
		int donne;// valeur capteur

		void consoleWrite(){// visualisation des données arrivantes
		cout << "Donnée :" << donne;
		}

		void fileWrite(){//stocker les données dans des fichiers log
	
		std::ofstream mon_fichier( "DonnéesCapteur.txt");
		mon_fichier << donne;
	
		}	
	
};
