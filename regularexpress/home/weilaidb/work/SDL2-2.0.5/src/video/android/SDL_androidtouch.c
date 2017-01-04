#if SDL_VIDEO_DRIVER_ANDROID
#define ACTION_DOWN 0
#define ACTION_UP 1
#define ACTION_MOVE 2
#define ACTION_CANCEL 3
#define ACTION_OUTSIDE 4
#define ACTION_POINTER_DOWN 5
#define ACTION_POINTER_UP 6
static void Android_GetWindowCoordinates(float x, float y,
int *window_x, int *window_y)
static SDL_bool separate_mouse_and_touch = SDL_FALSE;
static void
SeparateEventsHintWatcher(void *userdata, const char *name,
const char *oldValue, const char *newValue)
void Android_InitTouch(void)
void Android_QuitTouch(void)
void Android_OnTouch(int touch_device_id_in, int pointer_finger_id_in, int action, float x, float y, float p)
