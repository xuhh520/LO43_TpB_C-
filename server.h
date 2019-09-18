#ifndef DEF_SERVER
#define DEF_SERVER

#include <string>
#include <fstream>

class Server
{
	public:

	Server();
	Server(float temp, float hum, float lum, float son);
	void consoleWrite(Server capteur);
	void fileWrite(Server capteur);
	~Server();

	private:
	
	float temperature;
	float humidite;
	float lumiere;
	float sonore;
};

#endif
