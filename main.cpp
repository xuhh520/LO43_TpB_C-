#include "Server.cc"
int main(){
    Server s_test(1,2),s_test2;
    s_test.consoleWrite();
    s_test2=s_test;
    s_test2.consoleWrite();
    s_test2.fileWrite("log_fichiers");
    std::ofstream outfile("log_fichiers",std::ofstream::app);
    outfile<<s_test2;
    return 0;
}