#include <iostream>
#include <fstream>
#include <string>
#include "server.h"
using namespace std;


Server::Server() {}
Server::~Server() {}
Server::Server(Server const& s) {}
Server Server::operator=(Server const& s) {return s;}

void Server::fileWrite(string file, string log)
{
	ofstream str(file);
	if(str)
	{
		str << log << endl;
	}
}

void Server::consoleWrite(string log)
{
	cout << log;
}
