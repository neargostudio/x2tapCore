#pragma once
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <iostream>

#include <WinSock2.h>
#include <netioapi.h>
#include <iphlpapi.h>

#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "iphlpapi.lib")

using namespace std;