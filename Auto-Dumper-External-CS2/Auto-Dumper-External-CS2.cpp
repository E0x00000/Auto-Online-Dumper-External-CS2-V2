
#include "Offsets.h"
#include <Windows.h>
#include <string>
#include <iostream>
using namespace Offset;




int main()
{

	std::string url = "https://raw.githubusercontent.com/E0x00000/CS2-Basic-Dump-V2/refs/heads/main/offsets.json";


	std::string jsonContent = DownloadString2(url);


	parseAndAssignConstants(jsonContent);

	std::cout << "Offset:" << std::endl;
	std::cout << ("DECIMAL VALUE | EntityList:%llX\n",  Offset::client_dll.dwEntityList) << std::endl;
	std::cout << ("DECIMAL VALUE | Matrix:%llX\n", Offset::client_dll.dwViewAngles) << std::endl;
	std::cout << ("DECIMAL VALUE | LocalPlayerController:%llX\n", Offset::client_dll.dwLocalPlayerController) << std::endl;
	std::cout << ("DECIMAL VALUE | ViewAngles:%llX\n", Offset::client_dll.dwViewAngles) << std::endl;
	std::cout << ("DECIMAL VALUE | LocalPlayerPawn:%llX\n", Offset::client_dll.dwLocalPlayerPawn) << std::endl;
	std::cout << "\n";
	std::cout << "Offset:" << std::endl;
	std::cout << "HEX VALUE | EntityList: " << std::hex << Offset::client_dll.dwEntityList << std::endl;
	std::cout << "HEX VALUE | Matrix: " << std::hex << Offset::client_dll.dwViewAngles << std::endl;
	std::cout << "HEX VALUE | LocalPlayerController: " << std::hex << Offset::client_dll.dwLocalPlayerController << std::endl;
	std::cout << "HEX VALUE | ViewAngles: " << std::hex << Offset::client_dll.dwViewAngles << std::endl;
	std::cout << "HEX VALUE | LocalPlayerPawn: " << std::hex << Offset::client_dll.dwLocalPlayerPawn << std::endl;


	return 0;
}
