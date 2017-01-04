#error SDL now requires a Linux 2.4+ kernel with /dev/input/event support.
#define SYN_DROPPED 3
static int MaybeAddDevice(const char *path);
#if SDL_USE_LIBUDEV
static int MaybeRemoveDevice(const char *path);
void joystick_udev_callback(SDL_UDEV_deviceevent udev_type, int udev_class, const char *devpath);
typedef struct SDL_joylist_item
SDL_joylist_item;
static SDL_joylist_item *SDL_joylist = NULL;
static SDL_joylist_item *SDL_joylist_tail = NULL;
static int numjoysticks = 0;
static int instance_counter = 0;
#define test_bit(nr, addr) \
(((1UL << ((nr) % (sizeof(long) * 8))) & ((addr)[(nr) / (sizeof(long) * 8)])) != 0)
#define NBITS(x) ((((x)-1)/(sizeof(long) * 8))+1)
static int
IsJoystick(int fd, char *namebuf, const size_t namebuflen, SDL_JoystickGUID *guid)
#if SDL_USE_LIBUDEV
void joystick_udev_callback(SDL_UDEV_deviceevent udev_type, int udev_class, const char *devpath)
static int
MaybeAddDevice(const char *path)
#if SDL_USE_LIBUDEV
static int
MaybeRemoveDevice(const char *path)
static int
JoystickInitWithoutUdev(void)
#if SDL_USE_LIBUDEV
static int
JoystickInitWithUdev(void)
int
SDL_SYS_JoystickInit(void)
int SDL_SYS_NumJoysticks()
void SDL_SYS_JoystickDetect()
static SDL_joylist_item *
JoystickByDevIndex(int device_index)
const char *
SDL_SYS_JoystickNameForDeviceIndex(int device_index)
SDL_JoystickID SDL_SYS_GetInstanceIdOfDeviceIndex(int device_index)
static int
allocate_hatdata(SDL_Joystick * joystick)
static int
allocate_balldata(SDL_Joystick * joystick)
static void
ConfigJoystick(SDL_Joystick * joystick, int fd)
int
SDL_SYS_JoystickOpen(SDL_Joystick * joystick, int device_index)
SDL_bool SDL_SYS_JoystickAttached(SDL_Joystick *joystick)
static SDL_INLINE void
HandleHat(SDL_Joystick * stick, Uint8 hat, int axis, int value)
static SDL_INLINE void
HandleBall(SDL_Joystick * stick, Uint8 ball, int axis, int value)
static SDL_INLINE int
AxisCorrect(SDL_Joystick * joystick, int which, int value)
static SDL_INLINE void
PollAllValues(SDL_Joystick * joystick)
static SDL_INLINE void
HandleInputEvents(SDL_Joystick * joystick)
void
SDL_SYS_JoystickUpdate(SDL_Joystick * joystick)
void
SDL_SYS_JoystickClose(SDL_Joystick * joystick)
void
SDL_SYS_JoystickQuit(void)
SDL_JoystickGUID SDL_SYS_JoystickGetDeviceGUID( int device_index )
SDL_JoystickGUID SDL_SYS_JoystickGetGUID(SDL_Joystick * joystick)
