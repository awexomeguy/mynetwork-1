#include "mytcp.h"

#include <string>
#include <iostream>
#include "exception.h"
using namespace std;

int main()
{
  MyTcpSocket mySocket;

  // Create remote host address
  mySocket.connect("127.0.0.1", 5555);  // Connect

  // Send data
  //while (fgets(sendline, 1024, fp) != NULL)
  //{
		//mySocket.send(string("test").data, );

		//n = mySocket.receive(recvline, MAXLINE);

		//recvline[n] = 0;	/* null terminate */
		//fputs(recvline, stdout);
  //}

  //mySocket.disconnect();

  return 0;
}

