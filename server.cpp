#include "server.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Server::Server() {}
Server::Server(Server const& serv) {}
Server::operator=(Server const& serv) { this = serv; }
Server::~Server() {}

Server::consoleWrite(string logs) 
{
	cout << log;
}

Server::fileWrite(string file, string logs)
{
	ofstream str(file);
	if(file)
	{
		file << logs << endl;
	}
}
