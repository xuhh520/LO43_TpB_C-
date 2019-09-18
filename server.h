#include <iostream>
using namespace std;

#ifndef SERVER_H
#define SERVER_H

class Server
{
public:
	Server();
	Server(const Server& serv);
	virtual ~Server();
	Server operator=(Server const& serv);

	void consoleWrite();
	void fileWrite();
private:
	
};

#endif
