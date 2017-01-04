#if SDL_USE_LIBDBUS
static const char *dbus_library = "libdbus-1.so.3";
static void *dbus_handle = NULL;
static unsigned int screensaver_cookie = 0;
static SDL_DBusContext dbus;
static int
LoadDBUSSyms(void)
static void
UnloadDBUSLibrary(void)
static int
LoadDBUSLibrary(void)
void
SDL_DBus_Init(void)
void
SDL_DBus_Quit(void)
SDL_DBusContext *
SDL_DBus_GetContext(void)
void
SDL_DBus_ScreensaverTickle(void)
SDL_bool
SDL_DBus_ScreensaverInhibit(SDL_bool inhibit)
