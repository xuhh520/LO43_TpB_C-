#include <string>
#include <fstream>
using namespace std;

class Server {
	public:
		Server();
		Server(const Server&);
		virtual ~Server();
		void operator=(Server const&);
		void operator<<(ostream const&);
		void operator<<(ofstream const&);
		void consoleWrite();
		void fileWrite(string);
};
