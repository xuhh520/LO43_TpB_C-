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

void Server::consoleWrite(float temp, float hum, float lum, float son)
{
	cout << "Temperature : " << temp << endl << "Humidite : " << hum << endl << "Lumiere : " << lum << endl << "Sonore : " << son << endl;
}

void Server::fileWrite()
{
	
}

Server::~Server()
{
	
}

