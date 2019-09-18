#include "server.hpp"

using namespace std;

int main() {
	Server *s = new Server();
	s->consoleWrite();
	s->fileWrite();

	return 0;
}
