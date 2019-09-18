#include <string>
using namespace std;

class Server {
	public:
		Server();
		Server(const Server&);
		virtual ~Server();
		void operator=(const Server&);
		void consoleWrite();
		void fileWrite(string);
};
