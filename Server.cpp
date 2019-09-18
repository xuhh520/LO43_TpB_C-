#include <iostream>
using namespace std;

class Server{
	public :
		Server(); 				//conctructor
		Server(const &Server  S); 	//copy constructor
		~Server(); 				//destructor
		Server &operator=(const &Server S);		//operator
		
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

Server::Server(const &Server S){
	data1 = data1.S;
	data2 = data2.S;
}

Server::~Server(){
	//pas delete qué ??
}

Server &operator=(const &Server S){
		
}
void consoleWrite (/*type donnée integer*/ data)
{
	cout >> "data : " >> data >> endl;
}
