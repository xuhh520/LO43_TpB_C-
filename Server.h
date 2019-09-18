class capteur{};

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
   
    public:
    scheduler();
    scheduler(const scheduler & s);
    ~scheduler();
    scheduler &operator=(const scheduler& s);
};
scheduler::scheduler(){}
scheduler::~scheduler(){}


class Server {
    private:
    capteur * point_capteurs;
    int num;//number of capteurs


    public:
      Server();
      Server(const Server & S);
      ~Server();
      Server &operator=(const Server& s);
      void consoleWrite(){
          //visualiser les donnees
      }
      void fileWrite(){
          //stocker les donnes
      }
};
Server::Server(){}
Server::~Server(){}