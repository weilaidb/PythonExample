#if SDL_VIDEO_DRIVER_X11
static const char IBUS_SERVICE[]         = "org.freedesktop.IBus";
static const char IBUS_PATH[]            = "/org/freedesktop/IBus";
static const char IBUS_INTERFACE[]       = "org.freedesktop.IBus";
static const char IBUS_INPUT_INTERFACE[] = "org.freedesktop.IBus.InputContext";
static char *input_ctx_path = NULL;
static SDL_Rect ibus_cursor_rect = ;
static DBusConnection *ibus_conn = NULL;
static char *ibus_addr_file = NULL;
int inotify_fd = -1, inotify_wd = -1;
static Uint32
IBus_ModState(void)
static const char *
IBus_GetVariantText(DBusConnection *conn, DBusMessageIter *iter, SDL_DBusContext *dbus)
static size_t
IBus_utf8_strlen(const char *str)
static DBusHandlerResult
IBus_MessageHandler(DBusConnection *conn, DBusMessage *msg, void *user_data)
static char *
IBus_ReadAddressFromFile(const char *file_path)
static char *
IBus_GetDBusAddressFilename(void)
static SDL_bool IBus_CheckConnection(SDL_DBusContext *dbus);
static void
IBus_SetCapabilities(void *data, const char *name, const char *old_val,
const char *internal_editing)
static SDL_bool
IBus_SetupConnection(SDL_DBusContext *dbus, const char* addr)
static SDL_bool
IBus_CheckConnection(SDL_DBusContext *dbus)
SDL_bool
SDL_IBus_Init(void)
void
SDL_IBus_Quit(void)
static void
IBus_SimpleMessage(const char *method)
void
SDL_IBus_SetFocus(SDL_bool focused)
void
SDL_IBus_Reset(void)
SDL_bool
SDL_IBus_ProcessKeyEvent(Uint32 keysym, Uint32 keycode)
void
SDL_IBus_UpdateTextRect(SDL_Rect *rect)
void
SDL_IBus_PumpEvents(void)
