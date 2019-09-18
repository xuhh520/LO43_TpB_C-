#ifndef DEF_SERVER
#define DEF_SERVER

#include "Sensor.h"
#include <string>
#include <iostream>
class Server{

	public:

	// --------------------------------------
	// ----- forme canonique de Coplien -----	
	// --------------------------------------
	// constructeur par defaut
	Server();
	// constructeur de copie
	Server(Server const& other);
	// destructeur
	~Server();
	// operateur d'affectation
	Server $operator=(const Server &some_server);
	
	

	private:
	
	Sensor temperature_sensor;
	Sensor humidity_sensor;
	Sensor light_sensor;
	Sensor sound_sensor;
	
	// --------------------------------------
	// ---------- autres méthodes -----------	
	// --------------------------------------
	void clonage (const Server &some_server);
	void consoleWrite();
	void fileWrite();

};
#endif
	
	
	
	
	
