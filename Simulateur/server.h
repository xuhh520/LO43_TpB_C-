#include <iostream>
#include <string>
using namespace std;

class Server
{
public:
	Server();
	virtual ~Server();
	Server(const Server& s);
	Server operator=(const Server& s);
	void consoleWrite(string log);
	void fileWrite(string fichier, string log);
private:

};
