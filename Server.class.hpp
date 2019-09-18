#define Server_h

#include <iostream>
#include <fstream>

class Server
{
    public:
        Server();
        Server(const Server& unAutreObjet);
        virtual ~Server();
        Server& operator=(const Server& s);

        void consoleWrite(char strToDisplay);
        void fileWrite(char strToWrite);
    
    private:
        int unAttribut, unAutreAttribut; // Ces noms seront changés plus tard.
}