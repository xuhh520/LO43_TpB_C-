#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <string>

using namespace std;

class Server
{
public:
	
	Server();
	Server(const Server& serv);
	virtual ~Server();
	Server operator=(Server const& serv);

	void consoleWrite(string logs) const;
	void fileWrite(string file, string logs) const;
};

#endif
