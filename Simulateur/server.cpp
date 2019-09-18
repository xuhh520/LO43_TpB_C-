#include <iostream>
#include <fstream>
#include "server.hpp"

using namespace std;

Server::Server() {}

Server::Server(const Server& s) {}

void Server::operator=(Server const& serv) {
	// this = &serv;
}

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
void Server::operator<<(ostream const& stream) {
	//stream << this->consoleWrite();
}
void Server::operator<<(ofstream const& file) {
	// file << this.fileWrite();
}
