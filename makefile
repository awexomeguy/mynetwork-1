# Author: Elliott Kopp
# Makefile for the CS365 project
#
# Usage:
#   To compile all targets use "make"
#   To compile a specific target use "make [target]" (i.e. make client)
#   To clean (delete binaries) use "make clean"

CLIENT_OBJECTS =  mytcp.h mynetwork.h exception.h mytcp.cpp mynetwork.cpp client.cpp
SERVER_OBJECTS =  mytcp.h mynetwork.h exception.h mytcp.cpp mynetwork.cpp server.cpp


default: client server

client: ${CLIENT_OBJECTS}
	g++ ${CLIENT_OBJECTS} -o client

server: ${SERVER_OBJECTS}
	g++ ${SERVER_OBJECTS} -o server

clean:
	-@rm -f client
	-@rm -f server
