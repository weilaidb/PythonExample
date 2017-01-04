#  define M_PI     3.14159265358979323846
#define MAX_HAPTICS  32
static int MaybeAddDevice(const char *path);
#if SDL_USE_LIBUDEV
static int MaybeRemoveDevice(const char *path);
void haptic_udev_callback(SDL_UDEV_deviceevent udev_type, int udev_class, const char *devpath);
typedef struct SDL_hapticlist_item
SDL_hapticlist_item;
struct haptic_hwdata
;
struct haptic_hweffect
;
static SDL_hapticlist_item *SDL_hapticlist = NULL;
static SDL_hapticlist_item *SDL_hapticlist_tail = NULL;
static int numhaptics = 0;
#define test_bit(nr, addr) \
(((1UL << ((nr) & 31)) & (((const unsigned int *) addr)[(nr) >> 5])) != 0)
#define EV_TEST(ev,f) \
if (test_bit((ev), features)) ret |= (f);
static int
EV_IsHaptic(int fd)
static int
EV_IsMouse(int fd)
int
SDL_SYS_HapticInit(void)
int
SDL_SYS_NumHaptics()
static SDL_hapticlist_item *
HapticByDevIndex(int device_index)
#if SDL_USE_LIBUDEV
void haptic_udev_callback(SDL_UDEV_deviceevent udev_type, int udev_class, const char *devpath)
static int
MaybeAddDevice(const char *path)
#if SDL_USE_LIBUDEV
static int
MaybeRemoveDevice(const char* path)
static const char *
SDL_SYS_HapticNameFromFD(int fd)
const char *
SDL_SYS_HapticName(int index)
static int
SDL_SYS_HapticOpenFromFD(SDL_Haptic * haptic, int fd)
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
static Uint16
SDL_SYS_ToButton(Uint16 button)
static int
SDL_SYS_ToDirection(Uint16 *dest, SDL_HapticDirection * src)
#define  CLAMP(x)    (((x) > 32767) ? 32767 : x)
static int
SDL_SYS_ToFFEffect(struct ff_effect *dest, SDL_HapticEffect * src)
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
