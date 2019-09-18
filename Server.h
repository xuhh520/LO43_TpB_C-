class capteur{
    sensor s;
};

class sensor{
    private: 
    float temperature,humidity;
    int sound;
    bool light;
    public:
    sensor();
    sensor(const sensor & s);
    ~sensor();
    sensor &operator=(const Sensor& s);
};
sensor::sensor(){}
sensor::~sensor(){}


class scheduler{
    private: 
    Server s;
   
    public:
    scheduler();
    scheduler(const scheduler & s);
    ~scheduler();
    scheduler &operator=(const scheduler& s);
};
scheduler::scheduler(){}
scheduler::~scheduler(){}



#include<iostream>
#include<fstream>
std::ostream& operator<<(std::ostream& out, const Server& s);
std::ofstream& operator<<(std::ofstream& out, const Server& s);
class Server {
    private:
    //capteur * point_capteurs;
    int a,b;
   // int num;//number of capteurs


    public:
      Server();
      Server(const Server & S);
      ~Server();
      Server &operator=(const Server& s);
      friend std::ostream& operator<<(std::ostream& out, const Server& s);
      friend std::ofstream& operator<<(std::ofstream& out, const Server& s);
      void consoleWrite(){
          std::cout<<a<<" "<<b<<std::endl;
          //visualiser les donnees
      }
      void fileWrite(const char * filename){
          std::ofstream outfile;
          outfile.open(filename,ios::out);
          std::outfile<<a<<" "<<b<<std::endl;
          //stocker les donnes
      }
};
