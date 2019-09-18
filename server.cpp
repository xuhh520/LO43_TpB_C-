#include "server.h"
#include <fstream>
#include <iostream>
using namespace std;


Server::Server(){
	s_temperature = 0.0f;
	s_humidity = 0.0f;
	s_sound = 0;
	s_light = false;
}

Server::Server(float temperature, float humidity, int sound, bool light){
	s_temperature = temperature;
	s_humidity = humidity;
	s_sound = sound;
	s_light = light;
}

Server::~Server(){
}

Server& Server::operator=(const Server& server){
	s_temperature = server.s_temperature;
	s_humidity = server.s_humidity;
	s_sound = server.s_sound;
	s_light = server.s_light;
	return *this;
}

ostream& operator<<(ostream &out,Server &server){
	server.consoleWrite();
	//server.fileWrite();
	return out;
}

void Server::consoleWrite(){
	cout << "Température du capteur : " << s_temperature << endl << "Valeur d'humidité : " << s_humidity << endl << "Valeur sonore : " << s_sound << endl << "Lumière allumée : " << s_light << endl;
}

void Server::fileWrite(){
	ofstream tempWriter("Files/temp_log.txt");
	ofstream humWriter("Files/humidity_log.txt");
	ofstream soundWriter("Files/sound_log.txt");
	ofstream lightWriter("Files/light_log.txt");
	if(tempWriter){
		tempWriter << s_temperature;
	}
	else{
		cout << "Erreur de fichier" << endl;
	}
	if(humWriter){
		tempWriter << s_humidity;
	}
	else{
		cout << "Erreur de fichier" << endl;
	}
	if(soundWriter){
		tempWriter << s_sound;
	}
	else{
		cout << "Erreur de fichier" << endl;
	}
	if(lightWriter){
		tempWriter << s_light;
	}
	else{
		cout << "Erreur de fichier" << endl;
	}
	tempWriter.close();
	humWriter.close();
	soundWriter.close();
	lightWriter.close();
};
