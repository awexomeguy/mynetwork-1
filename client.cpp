#include "mytcp.h"

#include <string>
#include <iostream>
#include "exception.h"
using namespace std;

void dataReceived(const char* data)
{
  cout << "Data received: " << data << "\n";
  // when the client receives data from the server,
  // it will just write it to a file
}

int main()
{
  MyTcpSocket mySocket;
  mySocket.receiveCallback(dataReceived);
  mySocket.connect("127.0.0.1", 5555);
  
  // your code that reads the file from disk and puts it into a buffer
  
  mySocket.send(string("hello").c_str());
  // we can put the entire file buffer into the send, and just implement
  // the send to figure out how to break it up into segments

  return 0;
}

