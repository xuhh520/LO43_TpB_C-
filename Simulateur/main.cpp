#include <iostream>

#include "Server.h"

using namespace std;

int main()
{
    Server serv_1;
    Server* serv_2 = new Server(serv_1);

    serv_1.val = 3;
    cout << serv_1 << endl;

    delete(serv_2);

    serv_1.fileWrite("Je suis un message", "./log.txt");

    return 0;
}
