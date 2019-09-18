class Server{
	
	int data_a,data_b;
	
public:
	Server();
	~Server();
	Server(const Server&);
	Server &operator=(const Server&);
	Server &operator<<(const Server&);
	//Server &operator<<(const Server&);
	int consoleWrite ();
	int fileWrite ();
	int getData_a();
	int getData_b();
	

}
