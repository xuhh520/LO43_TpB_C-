#include <iostream>
#include "Server.h"

using namespace std;

int main() {

	Server ServeurTEST;

	ServeurTEST.donne = 52;

	ServeurTEST.consoleWrite();

	ServeurTEST.fileWrite();

}
