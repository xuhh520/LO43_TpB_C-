#include <iostream>
#include "server.h"
using namespace std;


int main(){
	Server serv;
	Server serv2(10.5f,12.4f,2,true);
	//serv.consoleWrite();
	//serv2.consoleWrite();
	serv = serv2;
	//serv.consoleWrite();
	//cout << serv2;
	serv2.fileWrite();
}
