#if SDL_VIDEO_DRIVER_X11
#define MAX_AXIS 16
#if SDL_VIDEO_DRIVER_X11_XINPUT2
static int xinput2_initialized = 0;
#if SDL_VIDEO_DRIVER_X11_XINPUT2_SUPPORTS_MULTITOUCH
static int xinput2_multitouch_supported = 0;
static int xinput2_opcode;
static void parse_valuators(const double *input_values,unsigned char *mask,int mask_len,
double *output_values,int output_values_len)
static int
query_xinput2_version(Display *display, int major, int minor)
static SDL_bool
xinput2_version_atleast(const int version, const int wantmajor, const int wantminor)
void
X11_InitXinput2(_THIS)
int
X11_HandleXinput2Event(SDL_VideoData *videodata,XGenericEventCookie *cookie)
void
X11_InitXinput2Multitouch(_THIS)
void
X11_Xinput2SelectTouch(_THIS, SDL_Window *window)
int
X11_Xinput2IsInitialized()
int
X11_Xinput2IsMultitouchSupported()
