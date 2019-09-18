#include <iostream>
#include <fstream>
#include "server.hpp"

using namespace std;

Server::Server() {}

Server::Server(const Server& s) {}

Server::&operator=(const Server& serv) {}

Server::~Server() {}

void Server::consoleWrite() {
	cout << "donnees";
}
void Server::fileWrite(string filename) {
	ofstream file;
	file.open(filename);
	
	file << "donnees" << endl;
	
	file.close();
}
