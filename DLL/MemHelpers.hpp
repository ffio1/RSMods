#pragma once

#include "Structs.hpp"

namespace MemHelpers {
	byte getLowestStringTuning();
	byte* GetCurrentTuning(bool verbose = false);
	void ToggleLoft();
	float SongTimer();
	bool IsExtendedRangeSong();
	int* GetHighestLowestString();
	int* GetHighestLowestString(Tuning tuningOverride);
	bool IsSongInDrop(Tuning tuning);
	bool IsSongInStandard(Tuning tuning);
	int GetTrueTuning();
	Resolution GetWindowSize();
	bool Contains(std::string stringToCheckIfInsideArray, std::vector<std::string> stringVector = std::vector<std::string>());
	void DX9DrawText(std::string textToDraw, int textColorHex, int topLeftX, int topLeftY, int bottomRightX, int bottomRightY, LPDIRECT3DDEVICE9 pDevice, Resolution setFontSize = { NULL, NULL }, DWORD format = DT_LEFT | DT_NOCLIP);
	void ToggleDrunkMode(bool enable);
	bool IsInSong();
	Tuning GetTuningAtTuner();
	bool IsExtendedRangeTuner();
	bool IsMultiplayer();
	std::string CurrentSelectedUser();
	std::string GetSongKey();
	float GetGreyNoteTimer();
	void SetGreyNoteTimer(float timeInSeconds);
	double GetNonStopPlayTimer();
	void SetNonStopPlayTimer(double NewTimer);

	inline std::string lastSongKey = "";

	std::string GetCurrentMenu(bool GameNotLoaded=false);
	void ToggleCB(bool enabled);

	inline static std::string lastMenu = "";
	inline static bool canGetRealMenu = false;

	inline HRESULT CustomDX9Font = NULL;
	inline ID3DXFont* DX9FontEncapsulation = NULL;
	inline int fontWidth = NULL, fontHeight = NULL;
};

namespace Util {
	inline void SendKey(unsigned int key) {
		PostMessage(FindWindow(NULL, L"Rocksmith 2014"), WM_KEYDOWN, key, 0);
		Sleep(30);
		PostMessage(FindWindow(NULL, L"Rocksmith 2014"), WM_KEYUP, key, 0);
	}
};
