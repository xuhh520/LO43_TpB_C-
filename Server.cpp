class Server
{
	Server::Server()
	{
		m_temp = 20;
		m_hum = 30;
		m_lum = 40;
		m_son = 50;
	}

	Server::Server(float temp, float hum, float lum, float son) : m_temp(temp),m_hum(hum),m_lum(lum),m_son(son) { }

	void Server::consoleWrite () const
	{
		cout << m_temp , m_hum , m_lum , m_son << endl;
		return;
	}

	void Server::fileWrite
	{

	}

};


