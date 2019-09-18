#include "Server.hpp"
#include <iostream> 
usingnamespace std;

int main() 
{
  Server server;
  server.consoleWrite("Hi.");
  server.fileWrite( "le message envoye au server.");
  return 0;
}

}   


