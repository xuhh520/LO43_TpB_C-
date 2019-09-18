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

Server::Server(float temp, float hum, float lum, float son) : temperature(temp), humidite(hum),lumiere(lum), sonore(son)
{
	
}

void Server::consoleWrite(Server capteur)
{
	cout << "Temperature : " << capteur.temperature << endl << "Humidite : " << capteur.humidite << endl << "Lumiere : " << capteur.lumiere << endl << "Sonore : " << capteur.sonore << endl;
}

void Server::fileWrite()
{
	
}

Server::~Server()
{
	
}

