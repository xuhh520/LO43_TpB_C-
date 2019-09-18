#include "server.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


Server::Server() {}
Server::Server(Server const& serv) {}
Server Server::operator=(Server const& serv) { return serv; }
Server::~Server() {}


void Server::consoleWrite(string logs) const
{
	cout << logs;
}

void Server::fileWrite(string file, string logs) const
{
	ofstream str(file);
	if(str)
	{
		str << logs << endl;
	}
}
