#include "mytcp.h"

void MyTcpSocket::connect(string ip, int port)
{

}


void MyTcpSocket::send(const char* data)
{
  myNetwork.send();
}


void MyTcpSocket::receiveCallback(void (*callback)(const char* data))
{
  if(callback == NULL)
    throw Exception("The callback function passed was null");

  dataReceivedCallback = callback;
  dataReceivedCallback(string("some data").c_str());
}
