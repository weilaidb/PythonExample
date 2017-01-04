#define SDL_JOYSTICK_RUNLOOP_MODE CFSTR("SDLJoystick")
static IOHIDManagerRef hidman = NULL;
static recDevice *gpDeviceList = NULL;
static int s_joystick_instance_id = -1;
static recDevice *GetDeviceForIndex(int device_index)
static void
FreeElementList(recElement *pElement)
static recDevice *
FreeDevice(recDevice *removeDevice)
static SInt32
GetHIDElementState(recDevice *pDevice, recElement *pElement)
static SInt32
GetHIDScaledCalibratedState(recDevice * pDevice, recElement * pElement, SInt32 min, SInt32 max)
static void
JoystickDeviceWasRemovedCallback(void *ctx, IOReturn result, void *sender)
static void AddHIDElement(const void *value, void *parameter);
static void
AddHIDElements(CFArrayRef array, recDevice *pDevice)
static SDL_bool
ElementAlreadyAdded(const IOHIDElementCookie cookie, const recElement *listitem)
static void
AddHIDElement(const void *value, void *parameter)
static SDL_bool
GetDeviceInfo(IOHIDDeviceRef hidDevice, recDevice *pDevice)
static SDL_bool
JoystickAlreadyKnown(IOHIDDeviceRef ioHIDDeviceObject)
static void
JoystickDeviceWasAddedCallback(void *ctx, IOReturn res, void *sender, IOHIDDeviceRef ioHIDDeviceObject)
static SDL_bool
ConfigHIDManager(CFArrayRef matchingArray)
static CFDictionaryRef
CreateHIDDeviceMatchDictionary(const UInt32 page, const UInt32 usage, int *okay)
static SDL_bool
CreateHIDManager(void)
int
SDL_SYS_JoystickInit(void)
int
SDL_SYS_NumJoysticks()
void
SDL_SYS_JoystickDetect()
const char *
SDL_SYS_JoystickNameForDeviceIndex(int device_index)
SDL_JoystickID
SDL_SYS_GetInstanceIdOfDeviceIndex(int device_index)
int
SDL_SYS_JoystickOpen(SDL_Joystick * joystick, int device_index)
SDL_bool
SDL_SYS_JoystickAttached(SDL_Joystick * joystick)
void
SDL_SYS_JoystickUpdate(SDL_Joystick * joystick)
void
SDL_SYS_JoystickClose(SDL_Joystick * joystick)
void
SDL_SYS_JoystickQuit(void)
SDL_JoystickGUID SDL_SYS_JoystickGetDeviceGUID( int device_index )
SDL_JoystickGUID SDL_SYS_JoystickGetGUID(SDL_Joystick *joystick)
