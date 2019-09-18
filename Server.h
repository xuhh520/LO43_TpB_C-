class Server
{
        public:

                Server ();
                Server (float temp, float hum, float lum, float son);
		Server (const Server&);
                ~Server ();
                Server &operator=(const Server&);

        void consoleWrite() const;
        void fileWrite();

        private:

        float m_temp;
        float m_hum;
        float m_lum;
        float m_son;
};

