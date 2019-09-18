class Server
{
	public:
		Server();
		~Server();
		Server(const Server&);
		Server &operator=(const Server&);
		Server consoleWrite ();
		Server fileWrite ();


}
