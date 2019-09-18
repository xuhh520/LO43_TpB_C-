#include "server.h"
#include <string>

int main()
{
	Server *serv = new Server();
	serv->consoleWrite("Message");
	serv->fileWrite("log","Bonjour");
	return 0;
}
