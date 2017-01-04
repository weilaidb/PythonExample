#define MAX_INPUTS  256
typedef struct JoyStick_DeviceData
JoyStick_DeviceData;
extern JoyStick_DeviceData *SYS_Joystick;
typedef enum Type
Type;
typedef struct input_t
input_t;
struct joystick_hwdata
;
#if SDL_JOYSTICK_DINPUT
extern const DIDATAFORMAT SDL_c_dfDIJoystick2;
extern void SDL_SYS_AddJoystickDevice(JoyStick_DeviceData *device);
