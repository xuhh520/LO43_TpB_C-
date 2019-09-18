#include <iostream>
#include <string>

class Server
{
	protected:
		float temp;
		float hum;
		float lum;
		float son;

	public:
		Server(); // Constructeur par défaut
		Server::Server()
		{
			temp = 0;
			hum = 0;
			lum = 0;
			son = 0;
		}
		Server (const Server&); // Constructeur de recopie
		~Server (); // Destructeur éventuellement virtuel
		Server &operator=(const Server&); // Operator d'affectation

	void consoleWrite()
	{
	
	}

	void fileWrite()
	{
	
	}

};
