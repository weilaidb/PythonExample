#define _SDL_xinput_h
#define XUSER_MAX_COUNT 4
#define XUSER_INDEX_ANY     0x000000FF
#define XINPUT_CAPS_FFB_SUPPORTED 0x0001
#define XINPUT_DEVSUBTYPE_UNKNOWN 0x00
#define XINPUT_DEVSUBTYPE_GAMEPAD 0x01
#define XINPUT_DEVSUBTYPE_WHEEL 0x02
#define XINPUT_DEVSUBTYPE_ARCADE_STICK 0x03
#define XINPUT_DEVSUBTYPE_FLIGHT_STICK 0x04
#define XINPUT_DEVSUBTYPE_DANCE_PAD 0x05
#define XINPUT_DEVSUBTYPE_GUITAR 0x06
#define XINPUT_DEVSUBTYPE_GUITAR_ALTERNATE 0x07
#define XINPUT_DEVSUBTYPE_DRUM_KIT 0x08
#define XINPUT_DEVSUBTYPE_GUITAR_BASS 0x0B
#define XINPUT_DEVSUBTYPE_ARCADE_PAD 0x13
#define XINPUT_GAMEPAD_GUIDE 0x0400
#define BATTERY_DEVTYPE_GAMEPAD         0x00
#define BATTERY_TYPE_WIRED              0x01
#define BATTERY_TYPE_UNKNOWN            0xFF
#define BATTERY_LEVEL_EMPTY             0x00
#define BATTERY_LEVEL_LOW               0x01
#define BATTERY_LEVEL_MEDIUM            0x02
#define BATTERY_LEVEL_FULL              0x03
typedef struct
XINPUT_GAMEPAD_EX;
typedef struct
XINPUT_STATE_EX;
typedef struct
XINPUT_BATTERY_INFORMATION_EX;
typedef DWORD (WINAPI *XInputGetState_t)
(
DWORD         dwUserIndex,
XINPUT_STATE_EX* pState
);
typedef DWORD (WINAPI *XInputSetState_t)
(
DWORD             dwUserIndex,
XINPUT_VIBRATION* pVibration
);
typedef DWORD (WINAPI *XInputGetCapabilities_t)
(
DWORD                dwUserIndex,
DWORD                dwFlags,
XINPUT_CAPABILITIES* pCapabilities
);
typedef DWORD (WINAPI *XInputGetBatteryInformation_t)
(
DWORD                         dwUserIndex,
BYTE                          devType,
XINPUT_BATTERY_INFORMATION_EX *pBatteryInformation
);
extern int WIN_LoadXInputDLL(void);
extern void WIN_UnloadXInputDLL(void);
extern XInputGetState_t SDL_XInputGetState;
extern XInputSetState_t SDL_XInputSetState;
extern XInputGetCapabilities_t SDL_XInputGetCapabilities;
extern XInputGetBatteryInformation_t SDL_XInputGetBatteryInformation;
extern DWORD SDL_XInputVersion;
#define XINPUTGETSTATE          SDL_XInputGetState
#define XINPUTSETSTATE          SDL_XInputSetState
#define XINPUTGETCAPABILITIES   SDL_XInputGetCapabilities
#define XINPUTGETBATTERYINFORMATION   SDL_XInputGetBatteryInformation
