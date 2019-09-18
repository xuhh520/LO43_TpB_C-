#include "server.h"
#include <iostream>

using namespace std;

Server::Server()
{
	temperature=20;
	humidite=3;
	lumiere=5.5;
	sonore=23.24;
}

/*Server::Server(float temp, float hum, float lum, float son) : temperature(temp), humidite(hum),lumiere(lum), sonore(son)
{
	
}*/

void consoleWrite()
{
	cout << "Temperature : " << temperature << endl << "Humidite : " << humidite << endl << "Lumiere : " << lumiere << endl << "Sonore : " << sonore << endl;
}

void fileWrite()
{
	
}

Server::~Server()
{
	
}

