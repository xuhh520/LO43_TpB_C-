#include <iostream>
#include <fstream>

class Server
{
    public Server()
    {

    }

    public Server(const Server& unAutreObjet)
    {

    }

    virtual ~Server()
    {

    }

    Server& operator=(const Server& s)
    {

    }

    public void consoleWrite(char strToDisplay)
    {
        std::cout << strToDisplay;
    }

    public void fileWrite(char strToWrite)
    {
        ofstream logfile;
        logfile.open("lo43Project.log");
        logfile << strToWrite;
        logfile.close();
    }
}