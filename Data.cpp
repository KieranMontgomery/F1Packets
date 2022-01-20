#include "Data.h"

void Data::insertPacket(char* buffer)
{
	// Copy start of buffer to PacketHeader type
	packetHeader = *(PacketHeader*)buffer;

	if (packetHeader.m_packetId == 0)       packetMotionData = *(PacketMotionData*)buffer;
	else if (packetHeader.m_packetId == 1)  packetSessionData = *(PacketSessionData*)buffer;
	else if (packetHeader.m_packetId == 2)  packetLapData = *(PacketLapData*)buffer;
	else if (packetHeader.m_packetId == 3)  packetEventData = *(PacketEventData*)buffer;
	else if (packetHeader.m_packetId == 4)  packetParticipantsData = *(PacketParticipantsData*)buffer;
	else if (packetHeader.m_packetId == 5)  packetCarSetupData = *(PacketCarSetupData*)buffer;
	else if (packetHeader.m_packetId == 6)  packetCarTelemetryData = *(PacketCarTelemetryData*)buffer;
	else if (packetHeader.m_packetId == 7)  packetCarStatusData = *(PacketCarStatusData*)buffer;
	else if (packetHeader.m_packetId == 8)  packetFinalClassificationData = *(PacketFinalClassificationData*)buffer;
	else if (packetHeader.m_packetId == 9)  packetLobbyInfoData = *(PacketLobbyInfoData*)buffer;
	else if (packetHeader.m_packetId == 10) packetCarDamageData = *(PacketCarDamageData*)buffer;
	else if (packetHeader.m_packetId == 11) packetSessionHistoryData = *(PacketSessionHistoryData*)buffer;
}
