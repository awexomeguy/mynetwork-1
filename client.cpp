#include "mytcp.h"

#include <string>
#include <iostream>
#include "exception.h"
using namespace std;

void dataReceived(const char* data)
{
  cout << "Data received: " << data << "\n";
}

int main()
{
  MyTcpSocket mySocket;
  mySocket.receiveCallback(dataReceived);
  mySocket.connect("127.0.0.1", 5555);
  mySocket.send(string("hello").c_str());

  return 0;
}

