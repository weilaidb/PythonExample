typedef struct XAUDIO2_DEVICE_DETAILS
XAUDIO2_DEVICE_DETAILS;
HRESULT IXAudio2_GetDeviceCount(IXAudio2 * unused, UINT32 * devcount);
HRESULT IXAudio2_GetDeviceDetails(IXAudio2 * unused, UINT32 index, XAUDIO2_DEVICE_DETAILS * details);
