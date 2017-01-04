static const char* SDL_UDEV_LIBS[] = ;
#define _THIS SDL_UDEV_PrivateData *_this
static _THIS = NULL;
static SDL_bool SDL_UDEV_load_sym(const char *fn, void **addr);
static int SDL_UDEV_load_syms(void);
static SDL_bool SDL_UDEV_hotplug_update_available(void);
static void device_event(SDL_UDEV_deviceevent type, struct udev_device *dev);
static SDL_bool
SDL_UDEV_load_sym(const char *fn, void **addr)
static int
SDL_UDEV_load_syms(void)
static SDL_bool
SDL_UDEV_hotplug_update_available(void)
int
SDL_UDEV_Init(void)
void
SDL_UDEV_Quit(void)
void
SDL_UDEV_Scan(void)
void
SDL_UDEV_UnloadLibrary(void)
int
SDL_UDEV_LoadLibrary(void)
#define BITS_PER_LONG           (sizeof(unsigned long) * 8)
#define NBITS(x)                ((((x)-1)/BITS_PER_LONG)+1)
#define OFF(x)                  ((x)%BITS_PER_LONG)
#define BIT(x)                  (1UL<<OFF(x))
#define LONG(x)                 ((x)/BITS_PER_LONG)
#define test_bit(bit, array)    ((array[LONG(bit)] >> OFF(bit)) & 1)
static void get_caps(struct udev_device *dev, struct udev_device *pdev, const char *attr, unsigned long *bitmask, size_t bitmask_len)
static int
guess_device_class(struct udev_device *dev)
static void
device_event(SDL_UDEV_deviceevent type, struct udev_device *dev)
void
SDL_UDEV_Poll(void)
int
SDL_UDEV_AddCallback(SDL_UDEV_Callback cb)
void
SDL_UDEV_DelCallback(SDL_UDEV_Callback cb)
