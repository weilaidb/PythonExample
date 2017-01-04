#define SYN_DROPPED 3
typedef struct SDL_evdevlist_item
SDL_evdevlist_item;
typedef struct SDL_EVDEV_PrivateData
SDL_EVDEV_PrivateData;
#define _THIS SDL_EVDEV_PrivateData *_this
static _THIS = NULL;
static SDL_Scancode SDL_EVDEV_translate_keycode(int keycode);
static void SDL_EVDEV_sync_device(SDL_evdevlist_item *item);
static int SDL_EVDEV_device_removed(const char *dev_path);
#if SDL_USE_LIBUDEV
static int SDL_EVDEV_device_added(const char *dev_path, int udev_class);
void SDL_EVDEV_udev_callback(SDL_UDEV_deviceevent udev_type, int udev_class,
const char *dev_path);
static Uint8 EVDEV_MouseButtons[] = ;
static const char* EVDEV_consoles[] = ;
static int SDL_EVDEV_is_console(int fd)
static int SDL_EVDEV_mute_keyboard(int tty_fd, int* old_kb_mode)
static void SDL_EVDEV_unmute_keyboard(int tty_fd, int kb_mode)
static int SDL_EVDEV_get_active_tty()
int
SDL_EVDEV_Init(void)
void
SDL_EVDEV_Quit(void)
#if SDL_USE_LIBUDEV
void SDL_EVDEV_udev_callback(SDL_UDEV_deviceevent udev_event, int udev_class,
const char* dev_path)
static void SDL_EVDEV_do_text_input(unsigned short keycode)
void
SDL_EVDEV_Poll(void)
static SDL_Scancode
SDL_EVDEV_translate_keycode(int keycode)
static int
SDL_EVDEV_init_touchscreen(SDL_evdevlist_item* item)
static void
SDL_EVDEV_destroy_touchscreen(SDL_evdevlist_item* item)
static void
SDL_EVDEV_sync_device(SDL_evdevlist_item *item)
#if SDL_USE_LIBUDEV
static int
SDL_EVDEV_device_added(const char *dev_path, int udev_class)
static int
SDL_EVDEV_device_removed(const char *dev_path)
