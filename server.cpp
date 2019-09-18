#include <iostream>
#include <string>
using namespace std;

class Server{
	
	protected:
		float temperature;
		float humidite;
		float lumiere;
		float sonore;
	
	public:
		Server(); 		//Constructeur par défaut
		
		Server(float t,float h,float l,float s){
			temperature = t;
			humidite = h;
			lumiere = l;
			sonore = s;
		};  //Constructeur
		
		Server(const Server&);	//Constructeur par recopie
		~Server();	//Déstructeur
		Server &operator = (const Server&);		//Opérateur d'affectation
		
	void consoleWrite(){
		cout << "La température est :" << temperature <<"°C." << endl;
		cout << "Le taux d'humidité est :" << humidite <<"%." << endl;
		cout << "L'intensité lumineuse est de :" << lumiere <<"Lux." << endl;
		cout << "Le niveau sonore est de :" << sonore <<"dB." << endl;
	}
	
	void fileWrite(){
		
	}
};

int main(){
	Server Serveur(35,25,24,25);
	cout << "test" << endl;
	Serveur.consoleWrite();
	return 0;
}
