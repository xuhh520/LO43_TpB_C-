#include <iostream>
using namespace std;

class Server{
	public :
		Server(); 				//conctructor
		Server(const &Server); 	//copy constructor
		~Server(); 				//destructor
		Server &operator=(const &Server Serv);		//operator
		
		void consoleWrite (/*type donnée*/ data);
		fileWrite
		
	private :
	/*données capteur integer 
	 *int data1 
	 *int data2
	 *  fichier log*/

}

Server::Server(){
	 data1 = 0;
	 data2 = 0; }

Server::Server(const &Server Serv){
	data1 = data1.Serv;
	data2 = data2.Serv;
}

Server::~Server(){
	
}

void consoleWrite (/*type donnée integer*/ data)
{
	cout >> "data : " >> data >> endl;
}
