#pragma once

#include "Packets.h"

class Data
{
public:
	// All packets
	PacketHeader packetHeader;
	PacketSessionData packetSessionData;
	PacketLapData packetLapData;
	PacketMotionData packetMotionData;
	PacketEventData packetEventData;
	PacketParticipantsData packetParticipantsData;
	PacketCarSetupData packetCarSetupData;
	PacketCarTelemetryData packetCarTelemetryData;
	PacketCarStatusData packetCarStatusData;
	PacketFinalClassificationData packetFinalClassificationData;
	PacketLobbyInfoData packetLobbyInfoData;
	PacketCarDamageData packetCarDamageData;
	PacketSessionHistoryData packetSessionHistoryData;

	void insertPacket(char* buffer);
};

