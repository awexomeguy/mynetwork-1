#include "mytcp.h"


int main()
{
  MyTcpSocket socket;
  socket.listen(5555);
//  socket.receive();

  return 0;
}
