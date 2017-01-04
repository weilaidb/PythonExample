#if SDL_VIDEO_DRIVER_X11
#  include "../../video/x11/SDL_x11video.h"
#define FCITX_DBUS_SERVICE "org.fcitx.Fcitx"
#define FCITX_IM_DBUS_PATH "/inputmethod"
#define FCITX_IC_DBUS_PATH "/inputcontext_%d"
#define FCITX_IM_DBUS_INTERFACE "org.fcitx.Fcitx.InputMethod"
#define FCITX_IC_DBUS_INTERFACE "org.fcitx.Fcitx.InputContext"
#define IC_NAME_MAX 64
#define DBUS_TIMEOUT 500
typedef struct _FcitxClient
FcitxClient;
static FcitxClient fcitx_client;
static int
GetDisplayNumber()
static char*
GetAppName()
#define CONT(i)   ISUTF8_CB(in[i])
#define VAL(i, s) ((in[i]&0x3f) << s)
static char *
_fcitx_utf8_get_char(const char *i, uint32_t *chr)
static size_t
_fcitx_utf8_strlen(const char *s)
static DBusHandlerResult
DBus_MessageFilter(DBusConnection *conn, DBusMessage *msg, void *data)
static DBusMessage*
FcitxClientICNewMethod(FcitxClient *client,
const char *method)
static void
FcitxClientICCallMethod(FcitxClient *client,
const char *method)
static void
Fcitx_SetCapabilities(void *data,
const char *name,
const char *old_val,
const char *internal_editing)
static void
FcitxClientCreateIC(FcitxClient *client)
static Uint32
Fcitx_ModState(void)
SDL_bool
SDL_Fcitx_Init()
void
SDL_Fcitx_Quit()
void
SDL_Fcitx_SetFocus(SDL_bool focused)
void
SDL_Fcitx_Reset(void)
SDL_bool
SDL_Fcitx_ProcessKeyEvent(Uint32 keysym, Uint32 keycode)
void
SDL_Fcitx_UpdateTextRect(SDL_Rect *rect)
void
SDL_Fcitx_PumpEvents()
