#include <Server.h>

// --------------------------------------
// ----- forme canonique de Coplien -----	
// --------------------------------------

// constructeur par defaut
Server::Server() {
	temperature_sensor = new 
}

Server::Server(Sensor temperature, Sensor humidity, Sensor light, Sensor sound) : temperature_sensor(temperature), humidity_sensor(humidity), light_sensor(light), sound_sensor(sound){
	
}

// destructeur
Server::~Server(){

}

// constructeur de recopie
Server::Server(Server const& other){
	// clonage (other);
}

// operateur d'affectation
Server::Server &operator=(const Server &some_server){
	
}


// --------------------------------------
// ---------- autres méthodes -----------	
// --------------------------------------

void clonage (const Server &some_server){
	temperature_sensor = some_server.temperature_sensor;
	humidity_sensor = some_server.humidity_sensor;
	light_sensor = some_server.light_sensor;
	sound_sensor = some_server.sound_sensor;
}

void consoleWrite(){
	cout << "************** Affichage des données collectées **************\n\n" << endl << endl;
		
	temperature_sensor.consoleWrite();
	humidity_sensor.consoleWrite();
	light_sensor.consoleWrite();
	sound_sensor.consoleWrite();
	
	cout << "************** FIn d'affichage des données collectées **************\n\n" << endl << endl;	
}

void fileWrite(){
	cout << "************** Enregistrement dans les logs des données collectées **************\n\n" << endl << endl;
		
	if (temperature_sensor.fileWrite() ) cout << "++ Données de température écrites avec succès."  << endl;
	else cout << "-- Erreur d'écriture des données de température." << endl; 

	if (humidity_sensor.fileWrite() ) cout << "++ Données d'humidité écrites avec succès."  << endl;
	else cout << "-- Erreur d'écriture des données d'humidité." << endl; 
	
	if (light_sensor.fileWrite() ) cout << "++ Données de lumière écrites avec succès."  << endl;
	else cout << "-- Erreur d'écriture des données de lumière." << endl; 
	
	if (sound_sensor.fileWrite() ) cout << "++ Données de son écrites avec succès."  << endl;
	else cout << "-- Erreur d'écriture des données de son." << endl; 		
	
	cout << "************** Fin d'enregistrement dans les logs **************\n\n" << endl << endl;		
}

	
	
