#include "server.h"
#include "Server.cpp"
#include <iostream>

using namespace std;

int main()
{
	Server test;
	test.consoleWrite(test);
	test.fileWrite(test);
	
	return 0;
};
