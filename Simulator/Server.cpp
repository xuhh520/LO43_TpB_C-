#include "Server.hpp"

Server::Server()
{
  //Not yet implemented
}

Server::Server(Server &server)
{
  //Not yet implemented
}

Server::~Server()
{
  //Not yet implemented
}

Server& Server::operator=(const Server& server)
{
  //Not yet implemented
}

ostream& operator<<(ostream& output, Server& server)
{
    output << server.toString() << endl;
    return output;
}

const string Server::toString()
{
  return "Not implemented yet (server.cpp).";
}

void Server::consoleWrite(string message)
{
  cout << message << endl;
  return;
}

void Server::fileWrite(string filePath, string message)
{
  ofstream file;
  file.open(filePath.c_str());
  file << message;
  file.close();
  return;
}
