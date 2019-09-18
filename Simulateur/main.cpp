#include <iostream>
#include "server.h"
using namespace std;
int main(){
	Server *s = new Server();
	s->consoleWrite("Message");
	s->fileWrite("log.txt","Bonjour");
	return 0;
}
