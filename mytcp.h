#ifndef MY_TCP
#define MY_TCP

#include <netinet/tcp.h>
#include "mynetwork.h"
#include "exception.h"
#include <string>
using namespace std;

#define WINSIZE 1024  // sender and receiver buffer size (in bytes)
#define MSS 256       // the maximum number of bytes in the data field of a TCP segment

typedef struct _MYTCP_Header 
{
	struct tcphdr tcp_hdr;
  u_short data_len; //  the actual number of bytes in the data field (optional)
} __attribute__ ((packed)) MYTCPHeader;


class MyTcpSocket
{
private:
  MyNetwork myNetwork;

  // The callback to invoke when data has been received
  void (*dataReceivedCallback)(const char* data);

public:
  void connect(string ip, int port);
  void disconnect();
  void receiveCallback(void (*callback)(const char* data));
  void send(const char* data);
};


#endif
