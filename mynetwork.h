#ifndef MY_NETWORK
#define MY_NETWORK

#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include "constants.h"
using namespace std;

class MyNetwork
{
private:


public:
  int createSocket(sockaddr_in remoteAddress);
  void send(string test, int sockfd, const sockaddr * servAddr);
  unsigned int receive(int sockfd, char* data);
};

#endif
