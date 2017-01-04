#define _SN9C102_H_
enum sn9c102_frame_state ;
struct sn9c102_frame_t ;
enum sn9c102_dev_state ;
enum sn9c102_io_method ;
enum sn9c102_stream_state ;
typedef char sn9c102_sof_header_t[62];
struct sn9c102_sof_t ;
struct sn9c102_sysfs_attr ;
struct sn9c102_module_param ;
static DEFINE_MUTEX(sn9c102_sysfs_lock);
static DECLARE_RWSEM(sn9c102_dev_lock);
struct sn9c102_device ;
struct sn9c102_device*
sn9c102_match_id(struct sn9c102_device* cam, const struct usb_device_id *id)
void
sn9c102_attach_sensor(struct sn9c102_device* cam,
const struct sn9c102_sensor* sensor)
enum sn9c102_bridge
sn9c102_get_bridge(struct sn9c102_device* cam)
struct sn9c102_sensor* sn9c102_get_sensor(struct sn9c102_device* cam)
#undef DBG
#undef KDBG
#	define DBG(level, fmt, args...)                                       \
do  while (0)
#	define V4LDBG(level, name, cmd)                                       \
do  while (0)
#	define KDBG(level, fmt, args...)                                      \
do  while (0)
#	define DBG(level, fmt, args...) do  while(0)
#	define V4LDBG(level, name, cmd) do  while(0)
#	define KDBG(level, fmt, args...) do  while(0)
#undef PDBG
#define PDBG(fmt, args...)                                                    \
dev_info(&cam->usbdev->dev, "[%s:%s:%d] " fmt "\n", __FILE__, __func__,   \
__LINE__ , ## args)
#undef PDBGG
#define PDBGG(fmt, args...) do  while(0)
