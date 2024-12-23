#pragma once

// STL
#include <chrono>
#include <cmath>
#include <codecvt>
#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <random>
#include <regex>
#include <sstream>
#include <string>
#include <thread>
#include <vector>

// Windows
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <Windows.h>
#include <endpointvolume.h>
#include <ImageHlp.h>
#include <intrin.h>
#include <mmdeviceapi.h>
#include <process.h>
#include <psapi.h>
#include <Functiondiscoverykeys_devpkey.h>

// External Dependenices
#include "Lib/Detours/detours.h"
#include "Lib/DirectX/d3d9types.h"
#include "Lib/DirectX/d3d9.h"
#include "Lib/DirectX/d3dx9tex.h"
#include "Lib/ImGUI/imgui.h"
#include "Lib/ImGUI/imgui_impl_dx9.h"
#include "Lib/ImGUI/imgui_impl_win32.h"
#include "Lib/ImGUI/RobotoFont.cpp"
#include "Lib/Ini/SimpleIni.h"
#include "Lib/Json/json.hpp"
#include "Lib/Midi/RtMidi.h"

// Crowd Control
#include "CC/CCEffect.hpp"
#include "CC/CCEffectList.hpp"

// Wwise
#include "Wwise/Exports.hpp"
#include "Wwise/Logging.hpp"
#include "Wwise/MemoryMgr.hpp"
#include "Wwise/Monitor.hpp"
#include "Wwise/MusicEngine.hpp"
#include "Wwise/PluginRegistration.hpp"
#include "Wwise/Root.hpp"
#include "Wwise/SoundEngine.hpp"
#include "Wwise/Types.hpp"

// Internal Dependencies
#include "D3D/D3D.hpp"
#include "D3D/D3DHooks.hpp"
#include "Functions.hpp"
#include "Log.hpp"
#include "MemHelpers.hpp"
#include "MemUtil.hpp"
#include "Offsets.hpp"
#include "Settings.hpp"
#include "Structs.hpp"
#include "VersioningStruct.h"