#include <iostream>
# include <fstream>  //un flux par fichier
using namespace std;

///file se trouvera dans /home/users/imelouno/Bureau/LO43/LO43_TpB_C-


class Server{
	public :
		Server(); 								//conctructor
		Server(const &Server  S); 				//copy constructor
		~Server(); 								//destructor
		Server &operator=(const &Server S);		//operator =
		ostream &operator<<(ostream& out, const &Server S);	//operator << console
		/*type file*/ &operator<<(/*file*/, const &Server S);
		
		
		void consoleWrite (int data1, int data2); //visualiser les données arrivantes dans la console.
		fileWrite
		
	private :
	/*données capteur integer 
	 *int data1 
	 *int data2
	 *  fichier log*/

}

/**4 fondamentaux*/
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
		if (this != &S)					//faut pas que le S de base be the same 
		{
			/*delete data ... et copie du new objet */}
		else
		{
			return *this;}
}

ostream &operator<<(ostream& out, const &Server S)
{
	cout << "Data 1 :  " << data1;
	cout << "Data 2 :   " << data2;
}

/*type file*/ &operator<<(/*file*/, const &Server S)
{
	
}

/**Functions*/

void consoleWrite (int data1, int data2)
{
	cout << "data1 : " << data1 << endl;
	cout << "data2 : " << data2 << endl;
}


