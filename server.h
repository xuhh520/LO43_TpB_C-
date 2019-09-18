#ifndef DEF_SERVER
#define DEF_SERVER

#include <string>

class Server
{
	public:

	Server();
	//Server(std::float temp, float hum, float lum, float son);
	void consoleWrite();
	void fileWrite();
	~Server();

	private:
	
	float temperature;
	float humidite;
	float lumiere;
	float sonore;
};

#endif
