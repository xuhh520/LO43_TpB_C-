#include "projet1.h"
#include <iostream>
using namespace std;


Server::Server(){
	data_a=0;
	data_b=0;
}


Server::~Server(){}


Server::Server(const Server& server){
	data_a=server.getData_a();
	data_b=server.getData_b();

}


Server::Server &operator=(const Server& server){
	this->data_a=server.getData_a();
	this->data_b=server.getData_b();
	return this;
}


Server::Server consoleWrite (){

	cout<<"consoleWrite"<<endl;

}


Server::Server fileWrite (){

	cout<<"fileWrite"<<endl;

}

Server::Server &operator<<(const Server& server){

cout<<this->data_a;
cout<<this->data_b;


}
//Server::Server &operator<<(const Server&){


//}

Server::int getData_a(){
	return this->data_a;
}

Server::int getData_b(){
	return this->data_b;
}
