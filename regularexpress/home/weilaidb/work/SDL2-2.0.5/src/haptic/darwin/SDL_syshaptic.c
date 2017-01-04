#define IO_OBJECT_NULL  ((io_service_t)0)
typedef struct SDL_hapticlist_item
SDL_hapticlist_item;
struct haptic_hwdata
;
struct haptic_hweffect
;
static void SDL_SYS_HapticFreeFFEFFECT(FFEFFECT * effect, int type);
static int HIDGetDeviceProduct(io_service_t dev, char *name);
static SDL_hapticlist_item *SDL_hapticlist = NULL;
static SDL_hapticlist_item *SDL_hapticlist_tail = NULL;
static int numhaptics = -1;
static const char *
FFStrError(unsigned int err)
int
SDL_SYS_HapticInit(void)
int
SDL_SYS_NumHaptics()
static SDL_hapticlist_item *
HapticByDevIndex(int device_index)
int
MacHaptic_MaybeAddDevice( io_object_t device )
int
MacHaptic_MaybeRemoveDevice( io_object_t device )
const char *
SDL_SYS_HapticName(int index)
static int
HIDGetDeviceProduct(io_service_t dev, char *name)
#define FF_TEST(ff, s) \
if (features.supportedEffects & (ff)) supported |= (s)
static unsigned int
GetSupportedFeatures(SDL_Haptic * haptic)
static int
SDL_SYS_HapticOpenFromService(SDL_Haptic * haptic, io_service_t service)
int
SDL_SYS_HapticOpen(SDL_Haptic * haptic)
int
SDL_SYS_HapticMouse(void)
int
SDL_SYS_JoystickIsHaptic(SDL_Joystick * joystick)
int
SDL_SYS_JoystickSameHaptic(SDL_Haptic * haptic, SDL_Joystick * joystick)
int
SDL_SYS_HapticOpenFromJoystick(SDL_Haptic * haptic, SDL_Joystick * joystick)
void
SDL_SYS_HapticClose(SDL_Haptic * haptic)
void
SDL_SYS_HapticQuit(void)
static DWORD
FFGetTriggerButton(Uint16 button)
static int
SDL_SYS_SetDirection(FFEFFECT * effect, SDL_HapticDirection * dir, int naxes)
#define CCONVERT(x)   (((x) > 0x7FFF) ? 10000 : ((x)*10000) / 0x7FFF)
#define CONVERT(x)    (((x)*10000) / 0x7FFF)
static int
SDL_SYS_ToFFEFFECT(SDL_Haptic * haptic, FFEFFECT * dest, SDL_HapticEffect * src)
static void
SDL_SYS_HapticFreeFFEFFECT(FFEFFECT * effect, int type)
CFUUIDRef
SDL_SYS_HapticEffectType(Uint16 type)
int
SDL_SYS_HapticNewEffect(SDL_Haptic * haptic, struct haptic_effect *effect,
SDL_HapticEffect * base)
int
SDL_SYS_HapticUpdateEffect(SDL_Haptic * haptic,
struct haptic_effect *effect,
SDL_HapticEffect * data)
int
SDL_SYS_HapticRunEffect(SDL_Haptic * haptic, struct haptic_effect *effect,
Uint32 iterations)
int
SDL_SYS_HapticStopEffect(SDL_Haptic * haptic, struct haptic_effect *effect)
void
SDL_SYS_HapticDestroyEffect(SDL_Haptic * haptic, struct haptic_effect *effect)
int
SDL_SYS_HapticGetEffectStatus(SDL_Haptic * haptic,
struct haptic_effect *effect)
int
SDL_SYS_HapticSetGain(SDL_Haptic * haptic, int gain)
int
SDL_SYS_HapticSetAutocenter(SDL_Haptic * haptic, int autocenter)
int
SDL_SYS_HapticPause(SDL_Haptic * haptic)
int
SDL_SYS_HapticUnpause(SDL_Haptic * haptic)
int
SDL_SYS_HapticStopAll(SDL_Haptic * haptic)
