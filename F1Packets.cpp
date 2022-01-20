#pragma comment(lib, "ws2_32.lib")

#include <iostream>
#include "Network.h"
#include "Packets.h"
#include "Data.h"
#include <array>

#define PORT 20777

int main()
{
    try
    {
        WSASession Session;
        UDPSocket Socket;
        char buffer[2000]; // TODO: Can we make this better?
        Data data;

        Socket.Bind(PORT);
        while (1)
        {
            // Collect packet and cast information into PacketHeader format
            sockaddr_in add = Socket.RecvFrom(buffer, sizeof(buffer));
            data.insertPacket(buffer); // Insert buffer into data object
        }
    }
    catch (std::system_error& e)
    {
        std::cout << e.what();
    }
}