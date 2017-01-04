#if SDL_HAPTIC_DINPUT
extern HWND SDL_HelperWindow;
static SDL_bool coinitialized = SDL_FALSE;
static LPDIRECTINPUT8 dinput = NULL;
static int
DI_SetError(const char *str, HRESULT err)
static int
DI_GUIDIsSame(const GUID * a, const GUID * b)
static BOOL CALLBACK
EnumHapticsCallback(const DIDEVICEINSTANCE * pdidInstance, VOID * pContext)
int
SDL_DINPUT_HapticInit(void)
int
SDL_DINPUT_MaybeAddDevice(const DIDEVICEINSTANCE * pdidInstance)
int
SDL_DINPUT_MaybeRemoveDevice(const DIDEVICEINSTANCE * pdidInstance)
static BOOL CALLBACK
DI_DeviceObjectCallback(LPCDIDEVICEOBJECTINSTANCE dev, LPVOID pvRef)
#define EFFECT_TEST(e,s)               \
if (DI_GUIDIsSame(&pei->guid, &(e)))   \
haptic->supported |= (s)
static BOOL CALLBACK
DI_EffectCallback(LPCDIEFFECTINFO pei, LPVOID pv)
static int
SDL_DINPUT_HapticOpenFromDevice(SDL_Haptic * haptic, LPDIRECTINPUTDEVICE8 device8, SDL_bool is_joystick)
int
SDL_DINPUT_HapticOpen(SDL_Haptic * haptic, SDL_hapticlist_item *item)
int
SDL_DINPUT_JoystickSameHaptic(SDL_Haptic * haptic, SDL_Joystick * joystick)
int
SDL_DINPUT_HapticOpenFromJoystick(SDL_Haptic * haptic, SDL_Joystick * joystick)
void
SDL_DINPUT_HapticClose(SDL_Haptic * haptic)
void
SDL_DINPUT_HapticQuit(void)
static DWORD
DIGetTriggerButton(Uint16 button)
static int
SDL_SYS_SetDirection(DIEFFECT * effect, SDL_HapticDirection * dir, int naxes)
#define CCONVERT(x)   (((x) > 0x7FFF) ? 10000 : ((x)*10000) / 0x7FFF)
#define CONVERT(x)    (((x)*10000) / 0x7FFF)
static int
SDL_SYS_ToDIEFFECT(SDL_Haptic * haptic, DIEFFECT * dest,
SDL_HapticEffect * src)
static void
SDL_SYS_HapticFreeDIEFFECT(DIEFFECT * effect, int type)
static REFGUID
SDL_SYS_HapticEffectType(SDL_HapticEffect * effect)
int
SDL_DINPUT_HapticNewEffect(SDL_Haptic * haptic, struct haptic_effect *effect, SDL_HapticEffect * base)
int
SDL_DINPUT_HapticUpdateEffect(SDL_Haptic * haptic, struct haptic_effect *effect, SDL_HapticEffect * data)
int
SDL_DINPUT_HapticRunEffect(SDL_Haptic * haptic, struct haptic_effect *effect, Uint32 iterations)
int
SDL_DINPUT_HapticStopEffect(SDL_Haptic * haptic, struct haptic_effect *effect)
void
SDL_DINPUT_HapticDestroyEffect(SDL_Haptic * haptic, struct haptic_effect *effect)
int
SDL_DINPUT_HapticGetEffectStatus(SDL_Haptic * haptic, struct haptic_effect *effect)
int
SDL_DINPUT_HapticSetGain(SDL_Haptic * haptic, int gain)
int
SDL_DINPUT_HapticSetAutocenter(SDL_Haptic * haptic, int autocenter)
int
SDL_DINPUT_HapticPause(SDL_Haptic * haptic)
int
SDL_DINPUT_HapticUnpause(SDL_Haptic * haptic)
int
SDL_DINPUT_HapticStopAll(SDL_Haptic * haptic)
typedef struct DIDEVICEINSTANCE DIDEVICEINSTANCE;
typedef struct SDL_hapticlist_item SDL_hapticlist_item;
int
SDL_DINPUT_HapticInit(void)
int
SDL_DINPUT_MaybeAddDevice(const DIDEVICEINSTANCE * pdidInstance)
int
SDL_DINPUT_MaybeRemoveDevice(const DIDEVICEINSTANCE * pdidInstance)
int
SDL_DINPUT_HapticOpen(SDL_Haptic * haptic, SDL_hapticlist_item *item)
int
SDL_DINPUT_JoystickSameHaptic(SDL_Haptic * haptic, SDL_Joystick * joystick)
int
SDL_DINPUT_HapticOpenFromJoystick(SDL_Haptic * haptic, SDL_Joystick * joystick)
void
SDL_DINPUT_HapticClose(SDL_Haptic * haptic)
void
SDL_DINPUT_HapticQuit(void)
int
SDL_DINPUT_HapticNewEffect(SDL_Haptic * haptic, struct haptic_effect *effect, SDL_HapticEffect * base)
int
SDL_DINPUT_HapticUpdateEffect(SDL_Haptic * haptic, struct haptic_effect *effect, SDL_HapticEffect * data)
int
SDL_DINPUT_HapticRunEffect(SDL_Haptic * haptic, struct haptic_effect *effect, Uint32 iterations)
int
SDL_DINPUT_HapticStopEffect(SDL_Haptic * haptic, struct haptic_effect *effect)
void
SDL_DINPUT_HapticDestroyEffect(SDL_Haptic * haptic, struct haptic_effect *effect)
int
SDL_DINPUT_HapticGetEffectStatus(SDL_Haptic * haptic, struct haptic_effect *effect)
int
SDL_DINPUT_HapticSetGain(SDL_Haptic * haptic, int gain)
int
SDL_DINPUT_HapticSetAutocenter(SDL_Haptic * haptic, int autocenter)
int
SDL_DINPUT_HapticPause(SDL_Haptic * haptic)
int
SDL_DINPUT_HapticUnpause(SDL_Haptic * haptic)
int
SDL_DINPUT_HapticStopAll(SDL_Haptic * haptic)
