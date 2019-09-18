using namespace std;

class Server {
	public:
		Server();
		Server(const Server&);
		virtual ~Server();
		Server &operator=(const Server&);
		void consoleWrite();
		void fileWrite("monlog.log");
};
