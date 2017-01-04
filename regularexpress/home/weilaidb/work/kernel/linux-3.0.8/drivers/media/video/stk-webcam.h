#define STKWEBCAM_H
#define DRIVER_VERSION		"v0.0.1"
#define DRIVER_VERSION_NUM	0x000001
#define MAX_ISO_BUFS		3
#define ISO_FRAMES_PER_DESC	16
#define ISO_MAX_FRAME_SIZE	3 * 1024
#define ISO_BUFFER_SIZE		(ISO_FRAMES_PER_DESC * ISO_MAX_FRAME_SIZE)
#define PREFIX				"stkwebcam: "
#define STK_INFO(str, args...)		printk(KERN_INFO PREFIX str, ##args)
#define STK_ERROR(str, args...)		printk(KERN_ERR PREFIX str, ##args)
#define STK_WARNING(str, args...)	printk(KERN_WARNING PREFIX str, ##args)
struct stk_iso_buf ;
struct stk_sio_buffer ;
enum stk_mode ;
struct stk_video ;
enum stk_status ;
#define is_present(dev)		((dev)->status & S_PRESENT)
#define is_initialised(dev)	((dev)->status & S_INITIALISED)
#define is_streaming(dev)	((dev)->status & S_STREAMING)
#define is_memallocd(dev)	((dev)->status & S_MEMALLOCD)
#define set_present(dev)	((dev)->status = S_PRESENT)
#define unset_present(dev)	((dev)->status &= \
~(S_PRESENT|S_INITIALISED|S_STREAMING))
#define set_initialised(dev)	((dev)->status |= S_INITIALISED)
#define unset_initialised(dev)	((dev)->status &= ~S_INITIALISED)
#define set_memallocd(dev)	((dev)->status |= S_MEMALLOCD)
#define unset_memallocd(dev)	((dev)->status &= ~S_MEMALLOCD)
#define set_streaming(dev)	((dev)->status |= S_STREAMING)
#define unset_streaming(dev)	((dev)->status &= ~S_STREAMING)
struct regval ;
struct stk_camera ;
#define vdev_to_camera(d) container_of(d, struct stk_camera, vdev)
int stk_camera_write_reg(struct stk_camera *, u16, u8);
int stk_camera_read_reg(struct stk_camera *, u16, int *);
int stk_sensor_init(struct stk_camera *);
int stk_sensor_configure(struct stk_camera *);
int stk_sensor_sleep(struct stk_camera *dev);
int stk_sensor_wakeup(struct stk_camera *dev);
int stk_sensor_set_brightness(struct stk_camera *dev, int br);
