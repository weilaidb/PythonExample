#define __FreeBSD_kernel_version __FreeBSD_version
#if defined(HAVE_USB_H)
#if defined(HAVE_USBHID_H)
#elif defined(HAVE_LIBUSB_H)
#elif defined(HAVE_LIBUSBHID_H)
#if defined(__FREEBSD__) || defined(__FreeBSD_kernel__)
#if __FreeBSD_kernel_version > 800063
#if SDL_JOYSTICK_USBHID_MACHINE_JOYSTICK_H
#define MAX_UHID_JOYS   64
#define MAX_JOY_JOYS    2
#define MAX_JOYS    (MAX_UHID_JOYS + MAX_JOY_JOYS)
struct report
;
static struct
const repinfo[] = ;
enum
;
enum
;
struct joystick_hwdata
;
static char *joynames[MAX_JOYS];
static char *joydevnames[MAX_JOYS];
static int report_alloc(struct report *, struct report_desc *, int);
static void report_free(struct report *);
#if defined(USBHID_UCR_DATA) || (defined(__FreeBSD_kernel__) && __FreeBSD_kernel_version <= 800063)
#define REP_BUF_DATA(rep) ((rep)->buf->ucr_data)
#elif (defined(__FREEBSD__) && (__FreeBSD_kernel_version > 900000))
#define REP_BUF_DATA(rep) ((rep)->buf)
#elif (defined(__FREEBSD__) && (__FreeBSD_kernel_version > 800063))
#define REP_BUF_DATA(rep) ((rep)->buf->ugd_data)
#define REP_BUF_DATA(rep) ((rep)->buf->data)
static int SDL_SYS_numjoysticks = 0;
int
SDL_SYS_JoystickInit(void)
int SDL_SYS_NumJoysticks()
void SDL_SYS_JoystickDetect()
const char *
SDL_SYS_JoystickNameForDeviceIndex(int device_index)
SDL_JoystickID SDL_SYS_GetInstanceIdOfDeviceIndex(int device_index)
static int
usage_to_joyaxe(unsigned usage)
static unsigned
hatval_to_sdl(Sint32 hatval)
int
SDL_SYS_JoystickOpen(SDL_Joystick * joy, int device_index)
{
char *path = joynames[device_index];
struct joystick_hwdata *hw;
struct hid_item hitem;
struct hid_data *hdata;
struct report *rep = NULL;
int fd;
int i;
fd = open(path, O_RDONLY);
if (fd == -1)
joy->instance_id = device_index;
hw = (struct joystick_hwdata *)
SDL_malloc(sizeof(struct joystick_hwdata));
if (hw == NULL)
joy->hwdata = hw;
hw->fd = fd;
hw->path = SDL_strdup(path);
if (!SDL_strncmp(path, "/dev/joy", 8))  else
hw->repdesc = hid_get_report_desc(fd);
if (hw->repdesc == NULL)
rep = &hw->inreport;
#if defined(__FREEBSD__) && (__FreeBSD_kernel_version > 800063) || defined(__FreeBSD_kernel__)
rep->rid = hid_get_report_id(fd);
if (rep->rid < 0)
SDL_bool SDL_SYS_JoystickAttached(SDL_Joystick *joystick)
void
SDL_SYS_JoystickUpdate(SDL_Joystick * joy)
void
SDL_SYS_JoystickClose(SDL_Joystick * joy)
void
SDL_SYS_JoystickQuit(void)
SDL_JoystickGUID SDL_SYS_JoystickGetDeviceGUID( int device_index )
SDL_JoystickGUID SDL_SYS_JoystickGetGUID(SDL_Joystick * joystick)
static int
report_alloc(struct report *r, struct report_desc *rd, int repind)
static void
report_free(struct report *r)
