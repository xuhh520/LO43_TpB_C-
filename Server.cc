#include "Server.h"
std::ostream& operator<<(std::ostream& out, const Server& s){
    out<<s.a<<" "<<s.b;
    return out;
}
ofstream& operator<<(ofstream& out, const Server& s){
    out<<s.a<<" "<<s.b;
    return out;}
Server::Server(int first,int second){
    a=first;b=second;
}
Server::~Server(){}