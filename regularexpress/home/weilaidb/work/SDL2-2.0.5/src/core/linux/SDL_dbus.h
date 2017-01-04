#define _SDL_dbus_h
#define SDL_USE_LIBDBUS 1
typedef struct SDL_DBusContext  SDL_DBusContext;
extern void SDL_DBus_Init(void);
extern void SDL_DBus_Quit(void);
extern SDL_DBusContext * SDL_DBus_GetContext(void);
extern void SDL_DBus_ScreensaverTickle(void);
extern SDL_bool SDL_DBus_ScreensaverInhibit(SDL_bool inhibit);
