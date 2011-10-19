#include "mynetwork.h"
#include <iostream>

int MyNetwork::createSocket(sockaddr_in remoteAddress)
{
  return socket(AF_INET, SOCK_DGRAM, 0);
}

void MyNetwork::send(string test, int sockfd, const sockaddr * servAddr)
{
  sendto(sockfd, test.c_str(), test.length(), 0, servAddr, sizeof(servAddr));
}

unsigned int MyNetwork::receive(int sockfd, char* data)
{
  unsigned int length = 0;

  while(length == 0)
  {
    cout << "MMMMMMMMMM\n";
	  length = recvfrom(sockfd, data, MSS, 0, NULL, NULL);
  }

  return length;
}
