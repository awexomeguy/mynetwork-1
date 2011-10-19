#include "mytcp.h"
#include <iostream>
void MyTcpSocket::connect(string ip, unsigned short port)
{
  // Create address
  bzero(&servaddr, sizeof(servaddr));
  servaddr.sin_family = AF_INET;
  servaddr.sin_port = htons(port);
  inet_pton(AF_INET, string(ip).c_str(), &servaddr.sin_addr);

  // Pass the address on to the network layer and get a socket back
  localfd = myNetwork.createSocket(servaddr);
  std::cout << "client sock: " << localfd << "\n";
  
  myNetwork.send("test", localfd, (sockaddr *) &servaddr);

  //tcphdr header;
  //header.dest = port;
  
  // put 3 way handshake here
//  myNetwork.send("SYN");
//  myNetwork.send("SYNACK");
}


#include <iostream>
using namespace std;

void MyTcpSocket::listen(unsigned int port)
{
	struct sockaddr_in servaddr, cliaddr;

  // Create the local address
	bzero(&servaddr, sizeof(servaddr));
	servaddr.sin_family      = AF_INET;
	servaddr.sin_port        = htons(port);
	servaddr.sin_addr.s_addr = htonl(INADDR_ANY);

  // Create the local socket
	localfd = socket(AF_INET, SOCK_DGRAM, 0);

  // Bind the local socket
	bind(localfd, (sockaddr *) &servaddr, sizeof(servaddr));

  char data[MSS];
  std::cout << receive(data);
  cout << "HERE\n";


  // Listen for data
  // logic for 3 way handshake
  // return
}

unsigned int MyTcpSocket::receive(char* data)
{
  return myNetwork.receive(localfd, data);
}



