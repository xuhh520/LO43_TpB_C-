#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Server
{
public:
  Server();
  Server(Server&);
  ~Server();
  
  Server& operator=(const Server& server);
  friend ostream& operator<<(ostream&, const Server&);

  const string toString();
  void consoleWrite(string);
  void fileWrite(string, string);
};

