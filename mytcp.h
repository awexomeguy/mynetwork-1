#ifndef MY_TCP
#define MY_TCP

#include <netinet/tcp.h>
#include "mynetwork.h"
#include "exception.h"
#include "constants.h"
using namespace std;

typedef struct _MYTCP_Header 
{
  struct tcphdr tcp_hdr;
  u_short data_len; //  the actual number of bytes in the data field (optional)
} __attribute__ ((packed)) MYTCPHeader;


class MyTcpSocket
{
private:
  MyNetwork myNetwork;
  int localfd;
  struct sockaddr_in servaddr;

public:
  MyTcpSocket() { localfd = 0; };
  void connect(string ip, unsigned short port);
  void listen(unsigned int port);
  unsigned int receive(char* data);


};


#endif
