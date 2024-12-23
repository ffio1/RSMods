#include "../stdafx.h"
#include "Exports.hpp"

void Wwise::Exports::Initialize() {
	// Root
	func_Wwise_Root_IsRestoreSinkRequested = { {0x00ec5d70, 0x00c954b0} };
	func_Wwise_Root_IsUsingDummySink = { {0x00ec5d60, 0x00c954a0} };

	// IAkStreamMgr
	// Only has a single pointer, and is protected https://www.audiokinetic.com/library/2015.1.9_5624/?source=SDK&id=class_a_k_1_1_i_ak_stream_mgr_a85c6043c1a45f13b7df2f05729248b1f.html
	func_Wwise_IAkStreamMgr_m_pStreamMgr = { {0x00f1c460, 0x01123580} }; // Idk

	// MemoryMgr
	func_Wwise_Memory_CheckPoolId = { {0x00E9FF70, 0x00c6eee0} };
	func_Wwise_Memory_CreatePool = { {0x00E9FC80, 0x00c6ebd0} };
	func_Wwise_Memory_DestroyPool = { {0x00E9FE20, 0x00c6ed70} };
	func_Wwise_Memory_Falign = { {0x00EA01E0, 0x00c6f150} };
	func_Wwise_Memory_GetBlock = { {0x00EA0230, 0x00c6f1a0} };
	func_Wwise_Memory_GetBlockSize = { {0x00E9FF30, 0x00c6eea0} };
	func_Wwise_Memory_GetMaxPools = { {0x00E9FF60, 0x00c6eed0} };
	func_Wwise_Memory_GetNumPools = { {0x00E9FF50, 0x00c6eec0} };
	func_Wwise_Memory_GetPoolAttributes = { {0x00E9FF10, 0x00c6ee80} };
	func_Wwise_Memory_GetPoolMemoryUsed = { {0x00EA01A0, 0x00c6f110} };
	func_Wwise_Memory_GetPoolName = { {0x00c94f80, 0x00642340} }; // TODO: may be worth a check, this one came from a different place in the exe than the rest
	func_Wwise_Memory_GetPoolStats = { {0x00EA0130, 0x00c6f0a0} };
	func_Wwise_Memory_IsInitialized = { {0x00E9FED0, 0x00c6ee20} };
	func_Wwise_Memory_Malign = { {0x00EA00D0, 0x00c6f040} };
	func_Wwise_Memory_Malloc = { {0x00EA0050, 0x00c6efc0} };
	func_Wwise_Memory_Free = { {0x00EA01E0, 0x00c6f150} };
	func_Wwise_Memory_ReleaseBlock = { {0x00EA0280, 0x00c6f1f0} };
	func_Wwise_Memory_SetMonitoring = { {0x00d3f130, 0x00399bf0} };
	func_Wwise_Memory_SetPoolName = { {0x00E9FEE0, 0x00c6ee30} };
	func_Wwise_Memory_Term = { {0x00EA02D0, 0x00c6f240} };

	// Monitor
	func_Wwise_Monitor_PostCode = { {0x00a004a, 0x00a64b00} };

	// Motion Engine
	func_Wwise_Motion_AddPlayerMotionDevice = { {0x00ec2a00, 0x00c92060} };
	func_Wwise_Motion_RegisterMotionDevice = { {0x00ec2ab0, 0x00c92110} };
	func_Wwise_Motion_RemovePlayerMotionDevice = { {0x00ec2a60, 0x00c920c0} };
	func_Wwise_Motion_SetPlayerListener = { {0x00ec2ac0, 0x00c92120} };
	func_Wwise_Motion_SetPlayerVolume = { {0x00ec2b00, 0x00c92160} };

	// Music Engine
	func_Wwise_Music_GetDefaultInitSettings = { {0x00ea16a0, 0x00c70610} };
	func_Wwise_Music_GetPlayingSegmentInfo = { {0x00ea16f0, 0x00c70660} };
	func_Wwise_Music_Init = { {0x00ea23e0, 0x00c714a0} };
	func_Wwise_Music_Term = { {0x00ea22b0, 0x00c71370} };

	// Sound Engine
	func_Wwise_Sound_AddBehaviorExtension = { {0x00ec46a0, 0x00c93d60} };
	func_Wwise_Sound_CancelBankCallbackCookie = { {0x00ec2400, 0x00c91a60} };
	func_Wwise_Sound_CancelEventCallback = { {0x00ec1c80, 0x00c912e0} };
	func_Wwise_Sound_CancelEventCallbackCookie = { {0x00ec1c60, 0x00c912c0} };
	func_Wwise_Sound_ClearBanks = { {0x00ec3140, 0x00c927d0} };
	func_Wwise_Sound_ClearPreparedEvents = { {0x00ec2530, 0x00c91b90} };
	func_Wwise_Sound_CloneActorMixerEffect = { {0x00ec5b70, 0x00c95270} };
	func_Wwise_Sound_CloneBusEffect = { {0x00ec5b50, 0x00c95250} };
	func_Wwise_Sound_DynamicDialogue_ResolveDialogueEvent_UniqueID = { {0x00ec5560, 0x00c94c20} };
	func_Wwise_Sound_DynamicDialogue_ResolveDialogueEvent_Char = { {0x00ec5640, 0x00c94d20} };
	func_Wwise_Sound_DynamicSequence_Break = { {0x00ec58d0, 0x00c94fd0} };
	func_Wwise_Sound_DynamicSequence_Close = { {0x00ec5950, 0x00c95050} };
	func_Wwise_Sound_DynamicSequence_LockPlaylist = { {0x00ec59d0, 0x00c950d0} };
	func_Wwise_Sound_DynamicSequence_Open = { {0x00ec1cd0, 0x00c91330} };
	func_Wwise_Sound_DynamicSequence_Pause = { {0x00ec5750, 0x00c94e50} };
	func_Wwise_Sound_DynamicSequence_Play = { {0x00ec56d0, 0x00c94dd0} };
	func_Wwise_Sound_DynamicSequence_Resume = { {0x00ec57d0, 0x00c94ed0} };
	func_Wwise_Sound_DynamicSequence_Stop = { {0x00ec5850, 0x00c94f50} };
	func_Wwise_Sound_DynamicSequence_UnlockPlaylist = { {0x00ec5a10, 0x00c95110} };
	func_Wwise_Sound_ExecuteActionOnEvent_UniqueID = { {0x00ec5240, 0x00c94900} };
	func_Wwise_Sound_ExecuteActionOnEvent_Char = { {0x00ec52f0, 0x00c949b0} };
	func_Wwise_Sound_g_PlayingID = { {0x00ec0890, 0x01122810} }; // Idk
	func_Wwise_Sound_GetDefaultInitSettings = { {0x00ec1120, 0x00c90750} };
	func_Wwise_Sound_GetDefaultPlatformInitSettings = { {0x00ec1180, 0x00c907b0} };
	func_Wwise_Sound_GetIDFromString = { {0x00ec2c30, 0x00c922b0} };
	func_Wwise_Sound_GetPanningRule = { {0x00ec1190, 0x00c907c0} };
	func_Wwise_Sound_GetSourcePlayPosition = { {0x00ec1ca0, 0x00c91300} };
	func_Wwise_Sound_GetSpeakerConfiguration = { {0x00ec11a0, 0x00c907d0} };
	func_Wwise_Sound_Init = { {0x00ec5b90, 0x00c95290} };
	func_Wwise_Sound_IsInitialized = { {0x00ec1110, 0x00c90740} };
	func_Wwise_Sound_LoadBank_BankID_MemPoolID = { {0x00ec2070, 0x00c916d0} };
	func_Wwise_Sound_LoadBank_Void_UInt32_BankID = { {0x00ec2130, 0x00c91790} };
	func_Wwise_Sound_LoadBank_BankID_Callback = { {0x00ec21e0, 0x00c91840} };
	func_Wwise_Sound_LoadBank_Void_UInt32_Callback = { {0x00ec2240, 0x00c918a0} };
	func_Wwise_Sound_LoadBank_Char_MemPoolID = { {0x00ec33a0, 0x00c92a60} };
	func_Wwise_Sound_LoadBank_Char_Callback = { {0x00ec34b0, 0x00c92b70} };
	func_Wwise_Sound_LoadBankUnique = { {0x00ec3510, 0x00c92bd0} };
	func_Wwise_Sound_PlaySourcePlugin = { {0x00ec1b90, 0x00c911f0} };
	func_Wwise_Sound_PostEvent_Char = { {0x00ec51b0, 0x00c94870} };
	func_Wwise_Sound_PostEvent_UniqueID = { {0x00ec5cc0, 0x00c95400} };
	func_Wwise_Sound_PostTrigger_TriggerID = { {0x00ec1610, 0x00c90c70} };
	func_Wwise_Sound_PostTrigger_Char = { {0x00ec2ee0, 0x00c92570} };
	func_Wwise_Sound_PrepareBank_BankID_Callback = { {0x00ec2420, 0x00c91a80} };
	func_Wwise_Sound_PrepareBank_BankID_BankContent = { {0x00ec36f0, 0x00c92db0} };
	func_Wwise_Sound_PrepareBank_Char_Callback = { {0x00ec3800, 0x00c92ec0} };
	func_Wwise_Sound_PrepareBank_Char_BankContent = { {0x00ec4590, 0x00c93c50} };
	func_Wwise_Sound_PrepareEvent_EventID_UInt32 = { {0x00ec2480, 0x00c91ae0} };
	func_Wwise_Sound_PrepareEvent_EventID_UInt32_Callback_Void = { {0x00ec2500, 0x00c91b60} };
	func_Wwise_Sound_PrepareEvent_Char_UInt32 = { {0x00ec39f0, 0x00c930b0} };
	func_Wwise_Sound_PrepareEvent_Char_UInt32_Callback_Void = { {0x00ec3ce0, 0x00c933a0} };
	func_Wwise_Sound_PrepareGameSyncs_UInt32_UInt32_UInt32_Callback_Void = { {0x00ec3f60, 0x00c91c30} };
	func_Wwise_Sound_PrepareGameSyncs_UInt32_UInt32_UInt32 = { {0x00ec41a0, 0x00c91c60} };
	func_Wwise_Sound_PrepareGameSyncs_Char_Char_UInt32_Callback_Void = { {0x00ec25d0, 0x00c93620} };
	func_Wwise_Sound_PrepareGameSyncs_Char_Char_UInt32 = { {0x00ec2600, 0x00c93860} };
	func_Wwise_Sound_Query_GetActiveGameObjects = { {0x00ec0790, 0x00c8fdc0} };
	func_Wwise_Sound_Query_GetActiveListeners = { {0x00ec0a90, 0x00c900c0} };
	func_Wwise_Sound_Query_GetCustomPropertyValue_Int32 = { {0x00ec08c0, 0x00c8fef0} };
	func_Wwise_Sound_Query_GetCustomPropertyValue_Real32 = { {0x00ec0950, 0x00c8ff80} };
	func_Wwise_Sound_Query_GetEventIDFromPlayingID = { {0x00ec0850, 0x00c8fe80} };
	func_Wwise_Sound_Query_GetGameObjectAuxSendValues = { {0x00ec0d90, 0x00c903c0} };
	func_Wwise_Sound_Query_GetGameObjectDryLevelValue = { {0x00ec0e80, 0x00c904b0} };
	func_Wwise_Sound_Query_GetGameObjectFromPlayingID = { {0x00ec0870, 0x00c8fea0} };
	func_Wwise_Sound_Query_GetIsGameObjectActive = { {0x00ec07c0, 0x00c8fdf0} };
	func_Wwise_Sound_Query_GetListenerPosition = { {0x00ec05b0, 0x00c8fbe0} };
	func_Wwise_Sound_Query_GetListenerSpatialization = { {0x00ec061, 0x00c8fc40} };
	func_Wwise_Sound_Query_GetMaxRadius_RadiusList = { {0x00ec07f0, 0x00c8fe20} };
	func_Wwise_Sound_Query_GetMaxRadius_GameObject = { {0x00ec0820, 0x00c8fe50} };
	func_Wwise_Sound_Query_GetObjectObstructionAndOcclusion = { {0x00ec0f10, 0x00c90540} };
	func_Wwise_Sound_Query_GetPlayingIDsFromGameObject = { {0x00ec0890, 0x00c8fec0} };
	func_Wwise_Sound_Query_GetPosition = { {0x00ec09e0, 0x00c90010} };
	func_Wwise_Sound_Query_GetPositioningInfo = { {0x00ec0730, 0x00c8fd60} };
	func_Wwise_Sound_Query_GetRTPCValue_RTPCID = { {0x00ec0b20, 0x00c90150} };
	func_Wwise_Sound_Query_GetRTPCValue_Char = { {0x00ec0c50, 0x00c90280} };
	func_Wwise_Sound_Query_GetState_StateGroupID = { {0x00ec0650, 0x00c8fc80} };
	func_Wwise_Sound_Query_GetState_Char = { {0x00ec06e0, 0x00c8fd10} };
	func_Wwise_Sound_Query_GetSwitch_SwitchGroupID = { {0x00ec0c90, 0x00c902c0} };
	func_Wwise_Sound_Query_GetSwitch_Char = { {0x00ec0d60, 0x00c90390} };
	func_Wwise_Sound_Query_QueryAudioObjectIDs_UniqueID = { {0x00ec0fd0, 0x00c90600} };
	func_Wwise_Sound_Query_QueryAudioObjectIDs_Char = { {0x00ec1080, 0x00c906b0} };
	func_Wwise_Sound_RegisterBusVolumeCallback = { {0x00ec1780, 0x00c90de0} };
	func_Wwise_Sound_RegisterCodec = { {0x00ec11d0, 0x00c90800} };
	func_Wwise_Sound_RegisterGameObj = { {0x00ec1d70, 0x00c913d0} };
	func_Wwise_Sound_RegisterGlobalCallback = { {0x00ec4770, 0x00c93e30} };
	func_Wwise_Sound_RegisterPlugin = { {0x00ec11c0, 0x00c907f0} };
	func_Wwise_Sound_RemoveBehavioralExtension = { {0x00ec4710, 0x00c93dd0} };
	func_Wwise_Sound_RenderAudio = { {0x00ec11b0, 0x00c907e0} };
	func_Wwise_Sound_ResetRTPCValue_RTPCID = { {0x00ec16a0, 0x00c90d00} };
	func_Wwise_Sound_ResetRTPCValue_Char = { {0x00ec30a0, 0x00c92730} };
	func_Wwise_Sound_SeekOnEvent_UniqueID_Int32 = { {0x00ec5320, 0x00c949e0} };
	func_Wwise_Sound_SeekOnEvent_Char_Int32 = { {0x00ec53c0, 0x00c94a80} };
	func_Wwise_Sound_SeekOnEvent_UniqueID_Float = { {0x00ec53f0, 0x00c94ab0} };
	func_Wwise_Sound_SeekOnEvent_Char_Float = { {0x00ec54e0, 0x00c94ba0} };
	func_Wwise_Sound_SetActiveListeners = { {0x00ec13c0, 0x00c90a20} };
	func_Wwise_Sound_SetActorMixerEffect = { {0x00ec26e0, 0x00c91d40} };
	func_Wwise_Sound_SetAttenuationScalingFactor = { {0x00ec1320, 0x00c90980} };
	func_Wwise_Sound_SetBankLoadIOSettings = { {0x00ec1e80, 0x00c914e0} };
	func_Wwise_Sound_SetBusEffect_UniqueID = { {0x00ec2690, 0x00c91cf0} };
	func_Wwise_Sound_SetBusEffect_Char = { {0x00ec4320, 0x00c939e0} };
	func_Wwise_Sound_SetEffectParam = { {0x00ec2730, 0x00c91d90} };
	func_Wwise_Sound_SetGameObjectAuxSendValues = { {0x00ec1720, 0x00c90d80} };
	func_Wwise_Sound_SetGameObjectOutputBusVolume = { {0x00ec17b0, 0x00c90e10} };
	func_Wwise_Sound_SetListenerPipeline = { {0x00ec1510, 0x00c90b70} };
	func_Wwise_Sound_SetListenerPosition = { {0x00ec1400, 0x00c90a60} };
	func_Wwise_Sound_SetListenerScalingFactor = { {0x00ec1370, 0x00c909d0} };
	func_Wwise_Sound_SetListenerSpatialization = { {0x00ec14a0, 0x00c90b00} };
	func_Wwise_Sound_SetMaxNumVoicesLimit = { {0x00ec3100, 0x00c92790} };
	func_Wwise_Sound_SetMultiplePositions = { {0x00ec1240, 0x00c90870} };
	func_Wwise_Sound_SetObjectObstructionAndOcclusion = { {0x00ec17f0, 0x00c90e50} };
	func_Wwise_Sound_SetPanningRule = { {0x00ec1b10, 0x00c91170} };
	func_Wwise_Sound_SetPosition = { {0x00ec2d10, 0x00c923a0} };
	func_Wwise_Sound_SetPositionInternal = { {0x00ec11e0, 0x00c90810} };
	func_Wwise_Sound_SetRTPCValue_RTPCID = { {0x00ec1550, 0x00c90bb0} };
	func_Wwise_Sound_SetRTPCValue_Char = { {0x00ec2d70, 0x00c92400} };
	func_Wwise_Sound_SetState_StateGroupID = { {0x00ec2f30, 0x00c925c0} };
	func_Wwise_Sound_SetState_Char = { {0x00ec2ff0, 0x00c92680} };
	func_Wwise_Sound_SetSwitch_SwitchGroupID = { {0x00ec15d0, 0x00c90c30} };
	func_Wwise_Sound_SetSwitch_Char = { {0x00ec2e20, 0x00c924b0} };
	func_Wwise_Sound_SetVolumeThreshold = { {0x00ec30e0, 0x00c92770} };
	func_Wwise_Sound_StartOutputCapture = { {0x00ec27a0, 0x00c91e00} };
	func_Wwise_Sound_StopAll = { {0x00ec2970, 0x00c91fd0} };
	func_Wwise_Sound_StopOutputCapture = { {0x00ec2850, 0x00c91eb0} };
	func_Wwise_Sound_StopPlayingID = { {0x00ec29b0, 0x00c92010} };
	func_Wwise_Sound_StopSourcePlugin = { {0x00ec1c00, 0x00c91260} };
	func_Wwise_Sound_Term = { {0x00ec4c70, 0x00c94330} };
	func_Wwise_Sound_UnloadBank_BankID_MemPoolID = { {0x00ec22c0, 0x00c91920} };
	func_Wwise_Sound_UnloadBank_BankID_Callback = { {0x00ec23a0, 0x00c91a00} };
	func_Wwise_Sound_UnloadBank_Char_MemPoolID = { {0x00ec35a0, 0x00c92c60} };
	func_Wwise_Sound_UnloadBank_Char_Callback = { {0x00ec3620, 0x00c92ce0} };
	func_Wwise_Sound_UnloadBankUnique = { {0x00ec3680, 0x00c92d40} };
	func_Wwise_Sound_UnregisterAllGameObj = { {0x00ec1e10, 0x00c91470} };
	func_Wwise_Sound_UnregisterGameObj = { {0x00ec1dc0, 0x00c91420} };
	func_Wwise_Sound_UnregisterGlobalCallback = { {0x00ec47a0, 0x00c93e60} };

	// StreamMgr - This Section has way too many dependancies for us to really use it.
	//func_Wwise_Stream_AddLanguageChangeObserver = { {0x1fbc23a, 0x00cece20} };
	//func_Wwise_Stream_Create = { {0x1fbbf66, 0x00cecb50} };
	//func_Wwise_Stream_CreateDevice = { {0x1fbc3dc, 0x00cecfc0} };
	//func_Wwise_Stream_DestroyDevice = { {0x1fbbfe6, 0x00cecbd0} };
	//func_Wwise_Stream_FlushAllCaches = { {0x1fbc076, 0x00cecc60} };
	//func_Wwise_Stream_GetCurrentLanguage = { {0x1fbb4c3, 0x00cec170} };
	//func_Wwise_Stream_GetDefaultDeviceSettings = { {0x1fbb433, 0x00cec0e0} };
	//func_Wwise_Stream_GetDefaultSettings = { {0x1fbb423, 0x00cec0d0} };
	//func_Wwise_Stream_GetFileLocationResolver = { {0x1fbb493, 0x00cec140} };
	//func_Wwise_Stream_GetPoolID = { {0x1fbb4b3, 0x00cec160} };
	//func_Wwise_Stream_RemoveLanguageChangeObserver = { {0x1fbc056, 0x00cecc40} };
	//func_Wwise_Stream_SetCurrentLanguage = { {0x1fbc036, 0x00cecc20} };
	//func_Wwise_Stream_SetFileLocationResolver = { {0x1fbb4a3, 0x00cec150} };

}