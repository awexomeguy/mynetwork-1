#ifndef EXCEPTION
#define EXCEPTION

#include <string>
using std::string;

class Exception
{
private:
  string m_message;

public:
  Exception(string errorMessage) { m_message = errorMessage; }
  string message() { return m_message; }
};

#endif
