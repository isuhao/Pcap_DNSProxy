﻿// This code is part of Pcap_DNSProxy
// A local DNS server based on WinPcap and LibPcap
// Copyright (C) 2012-2016 Chengr28
// 
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

#include "Base.h"

#if defined(ENABLE_TLS)
//Global variables
extern CONFIGURATION_TABLE Parameter;

#if defined(PLATFORM_WIN)
//Functions
bool SSPI_HandshakeLoop(
	SSPI_HANDLE_TABLE &SSPI_Handle, 
	std::vector<SOCKET_DATA> &SocketDataList, 
	std::vector<SOCKET_SELECTING_SERIAL_DATA> &SocketSelectingDataList, 
	std::vector<ssize_t> &ErrorCodeList);
bool SSPI_GetStreamSize(
	SSPI_HANDLE_TABLE &SSPI_Handle);
bool SSPI_EncryptPacket(
	SSPI_HANDLE_TABLE &SSPI_Handle, 
	std::vector<SOCKET_SELECTING_SERIAL_DATA> &SocketSelectingDataList);
bool SSPI_DecryptPacket(
	SSPI_HANDLE_TABLE &SSPI_Handle, 
	std::vector<SOCKET_SELECTING_SERIAL_DATA> &SocketSelectingDataList);
#endif
#endif
