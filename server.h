#ifndef SERVER_H
#define SERVER_H


class Server
{
    public :
        Server();
        Server(const &Server);
        ~Server();
        Server &operator=(const &Server);

        void consoleWrite();
        void fileWrite();

    private :
        int data1,data2;
};

#endif // SERVER_H
