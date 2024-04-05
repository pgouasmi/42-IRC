

#ifndef SERVER_HPP
#define SERVER_HPP

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <iostream>
#include <fstream>
#include <string>

#ifndef PORT
#define PORT 7777
#endif

class Server
{
	private:
		Server();
		Server(const Server &obj);
		Server &operator=(const Server &obj);

		int _socketfd;
		sockaddr_in _serverSocket;
		std::string _password;
	public:
		Server(char *port, char *password);
		~Server();
	class SocketFDException : public std::exception
	{
		const char *what() const throw() { return ("Error: Could not create the socket"); }
	};



};


#endif
