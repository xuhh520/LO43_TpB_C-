#include <iostream>
using namespace std;

class Server
{
public:
	Server();
	virtual ~Server();
	Server(const Server&);
	Server operator=(const Server& s);
	void consoleWrite();
	void fileWrite();
private:

};
