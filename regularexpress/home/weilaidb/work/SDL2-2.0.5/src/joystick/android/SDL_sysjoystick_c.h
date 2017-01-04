extern int Android_OnPadDown(int device_id, int keycode);
extern int Android_OnPadUp(int device_id, int keycode);
extern int Android_OnJoy(int device_id, int axisnum, float value);
extern int Android_OnHat(int device_id, int hat_id, int x, int y);
extern int Android_AddJoystick(int device_id, const char *name, SDL_bool is_accelerometer, int nbuttons, int naxes, int nhats, int nballs);
extern int Android_RemoveJoystick(int device_id);
typedef struct SDL_joylist_item
SDL_joylist_item;
typedef SDL_joylist_item joystick_hwdata;
