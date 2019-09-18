#include "Server.cc"
int main(){
    Server s_test(1,2),s_test2;
    s_test.consoleWrite();
    s_test2=s_test;
    s_test2.consoleWrite();
    return 0;
}