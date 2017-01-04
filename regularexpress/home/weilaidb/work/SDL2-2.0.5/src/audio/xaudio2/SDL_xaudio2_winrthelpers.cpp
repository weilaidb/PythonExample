#if WINAPI_FAMILY != WINAPI_FAMILY_PHONE_APP
using Windows::Devices::Enumeration::DeviceClass;
using Windows::Devices::Enumeration::DeviceInformation;
using Windows::Devices::Enumeration::DeviceInformationCollection;
extern "C" HRESULT __cdecl IXAudio2_GetDeviceCount(IXAudio2 * ixa2, UINT32 * devcount)
extern "C" HRESULT IXAudio2_GetDeviceDetails(IXAudio2 * unused, UINT32 index, XAUDIO2_DEVICE_DETAILS * details)
