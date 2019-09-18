using namespace std;

class Server {
	public:
		Server();
		Server(const Server&);
		~Server();
		Server &operator=(const T&);
		void consoleWrite();
		void fileWrite();
}
