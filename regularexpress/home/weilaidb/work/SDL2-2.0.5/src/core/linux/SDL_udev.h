#define _SDL_udev_h
#if HAVE_LIBUDEV_H
#define SDL_USE_LIBUDEV 1
typedef enum
SDL_UDEV_deviceevent;
typedef enum
SDL_UDEV_deviceclass;
typedef void (*SDL_UDEV_Callback)(SDL_UDEV_deviceevent udev_type, int udev_class, const char *devpath);
typedef struct SDL_UDEV_CallbackList  SDL_UDEV_CallbackList;
typedef struct SDL_UDEV_PrivateData
SDL_UDEV_PrivateData;
extern int SDL_UDEV_Init(void);
extern void SDL_UDEV_Quit(void);
extern void SDL_UDEV_UnloadLibrary(void);
extern int SDL_UDEV_LoadLibrary(void);
extern void SDL_UDEV_Poll(void);
extern void SDL_UDEV_Scan(void);
extern int SDL_UDEV_AddCallback(SDL_UDEV_Callback cb);
extern void SDL_UDEV_DelCallback(SDL_UDEV_Callback cb);
