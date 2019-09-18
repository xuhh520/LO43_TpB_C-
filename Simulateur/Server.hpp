#ifndef DEF_SERVER
#define DEF_SERVER

class Server{
	public:
		Server();
		Server (int Server& );
		~Server();
		Server &operator= (int Server&);
		
		void consoleWrite(); 
		void fileWrite();
	

};

#endif
