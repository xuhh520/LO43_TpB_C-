#include <iostream>
#include "Server.hpp"

using namespace std;

int main() 
{
  Server server;
  server.consoleWrite("This is a server console message.");
  server.fileWrite("server.txt", "This is a server file message.");
  return 0;
}

