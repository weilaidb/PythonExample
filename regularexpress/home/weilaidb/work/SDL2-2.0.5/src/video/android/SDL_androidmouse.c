#if SDL_VIDEO_DRIVER_ANDROID
#define ACTION_DOWN 0
#define ACTION_UP 1
#define ACTION_MOVE 2
#define ACTION_HOVER_MOVE 7
#define ACTION_SCROLL 8
#define BUTTON_PRIMARY 1
#define BUTTON_SECONDARY 2
#define BUTTON_TERTIARY 4
#define BUTTON_BACK 8
#define BUTTON_FORWARD 16
static Uint8 SDLButton;
void
Android_InitMouse(void)
void Android_OnMouse( int androidButton, int action, float x, float y)
