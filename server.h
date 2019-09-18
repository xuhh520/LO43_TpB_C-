#include <iostream>
using namespace std;

class Server{

	public :

	Server();
	Server(float temperature, float humidity, int sound, bool light);
	~Server();
	Server &operator = (const Server &server);
	friend ostream& operator<<(ostream &,Server &server);
	void fileWrite();
	void consoleWrite();	
	
	private:

	float s_temperature, s_humidity;
	int s_sound;
	bool s_light;
	
};
