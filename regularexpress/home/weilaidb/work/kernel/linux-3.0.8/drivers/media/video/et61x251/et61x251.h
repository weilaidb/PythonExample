#define _ET61X251_H_
#define ET61X251_DEBUG
#define ET61X251_DEBUG_LEVEL         2
#define ET61X251_MAX_DEVICES         64
#define ET61X251_PRESERVE_IMGSCALE   0
#define ET61X251_FORCE_MUNMAP        0
#define ET61X251_MAX_FRAMES          32
#define ET61X251_COMPRESSION_QUALITY 0
#define ET61X251_URBS                2
#define ET61X251_ISO_PACKETS         7
#define ET61X251_ALTERNATE_SETTING   13
#define ET61X251_URB_TIMEOUT         msecs_to_jiffies(2 * ET61X251_ISO_PACKETS)
#define ET61X251_CTRL_TIMEOUT        100
#define ET61X251_FRAME_TIMEOUT       2
static const struct usb_device_id et61x251_id_table[] = ;
ET61X251_SENSOR_TABLE
enum et61x251_frame_state ;
struct et61x251_frame_t ;
enum et61x251_dev_state ;
enum et61x251_io_method ;
enum et61x251_stream_state ;
struct et61x251_sysfs_attr ;
struct et61x251_module_param ;
static DEFINE_MUTEX(et61x251_sysfs_lock);
static DECLARE_RWSEM(et61x251_dev_lock);
struct et61x251_device ;
struct et61x251_device*
et61x251_match_id(struct et61x251_device* cam, const struct usb_device_id *id)
void
et61x251_attach_sensor(struct et61x251_device* cam,
const struct et61x251_sensor* sensor)
#undef DBG
#undef KDBG
#	define DBG(level, fmt, args...)                                       \
do  while (0)
#	define KDBG(level, fmt, args...)                                      \
do  while (0)
#	define V4LDBG(level, name, cmd)                                       \
do  while (0)
#	define DBG(level, fmt, args...) do  while(0)
#	define KDBG(level, fmt, args...) do  while(0)
#	define V4LDBG(level, name, cmd) do  while(0)
#undef PDBG
#define PDBG(fmt, args...)                                                    \
dev_info(&cam->usbdev->dev, "[%s:%s:%d] " fmt "\n", __FILE__, __func__,   \
__LINE__ , ## args)
#undef PDBGG
#define PDBGG(fmt, args...) do  while(0)
