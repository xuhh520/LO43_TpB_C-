#include <iostream>
using namespace std;

class Server
{
public:
	Server();
	~Server();
	Server(const Server&);
	Server& server=(const Server& s);
};
