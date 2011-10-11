#include "mytcp.h"

void MyTcpSocket::connect(string ip, int port)
{
  // put 3 way handshake here
}


void MyTcpSocket::send(const char* data)
{
  // sliding window nonsense
  myNetwork.send();
}


void MyTcpSocket::receiveCallback(void (*callback)(const char* data))
{
  // need to check source IP to make sure it is from the right source
  
  if(callback == NULL)
    throw Exception("The callback function passed was null");

  dataReceivedCallback = callback;
  dataReceivedCallback(string("some data").c_str());
  
  // need to send ACKs for data received
}

// we will need a disconnect() for the client side with the 4 way handshake