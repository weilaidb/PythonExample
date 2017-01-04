#define _V4L2_SUBDEV_H
#define V4L2_SUBDEV_IR_RX_NOTIFY		_IOW('v', 0, u32)
#define V4L2_SUBDEV_IR_RX_FIFO_SERVICE_REQ	0x00000001
#define V4L2_SUBDEV_IR_RX_END_OF_RX_DETECTED	0x00000002
#define V4L2_SUBDEV_IR_RX_HW_FIFO_OVERRUN	0x00000004
#define V4L2_SUBDEV_IR_RX_SW_FIFO_OVERRUN	0x00000008
#define V4L2_SUBDEV_IR_TX_NOTIFY		_IOW('v', 1, u32)
#define V4L2_SUBDEV_IR_TX_FIFO_SERVICE_REQ	0x00000001
struct v4l2_device;
struct v4l2_ctrl_handler;
struct v4l2_event_subscription;
struct v4l2_fh;
struct v4l2_subdev;
struct v4l2_subdev_fh;
struct tuner_setup;
struct v4l2_decode_vbi_line ;
#define V4L2_SUBDEV_IO_PIN_DISABLE	(1 << 0)
#define V4L2_SUBDEV_IO_PIN_OUTPUT	(1 << 1)
#define V4L2_SUBDEV_IO_PIN_INPUT	(1 << 2)
#define V4L2_SUBDEV_IO_PIN_SET_VALUE	(1 << 3)
#define V4L2_SUBDEV_IO_PIN_ACTIVE_LOW	(1 << 4)
struct v4l2_subdev_io_pin_config ;
struct v4l2_subdev_core_ops ;
struct v4l2_subdev_tuner_ops ;
struct v4l2_subdev_audio_ops ;
struct v4l2_subdev_video_ops ;
struct v4l2_subdev_vbi_ops ;
struct v4l2_subdev_sensor_ops ;
enum v4l2_subdev_ir_mode ;
struct v4l2_subdev_ir_parameters ;
struct v4l2_subdev_ir_ops ;
struct v4l2_subdev_pad_ops ;
struct v4l2_subdev_ops ;
struct v4l2_subdev_internal_ops ;
#define V4L2_SUBDEV_NAME_SIZE 32
#define V4L2_SUBDEV_FL_IS_I2C			(1U << 0)
#define V4L2_SUBDEV_FL_IS_SPI			(1U << 1)
#define V4L2_SUBDEV_FL_HAS_DEVNODE		(1U << 2)
#define V4L2_SUBDEV_FL_HAS_EVENTS		(1U << 3)
struct v4l2_subdev ;
#define media_entity_to_v4l2_subdev(ent) \
container_of(ent, struct v4l2_subdev, entity)
#define vdev_to_v4l2_subdev(vdev) \
container_of(vdev, struct v4l2_subdev, devnode)
struct v4l2_subdev_fh ;
#define to_v4l2_subdev_fh(fh)	\
container_of(fh, struct v4l2_subdev_fh, vfh)
#if defined(CONFIG_VIDEO_V4L2_SUBDEV_API)
static inline struct v4l2_mbus_framefmt *
v4l2_subdev_get_try_format(struct v4l2_subdev_fh *fh, unsigned int pad)
static inline struct v4l2_rect *
v4l2_subdev_get_try_crop(struct v4l2_subdev_fh *fh, unsigned int pad)
extern const struct v4l2_file_operations v4l2_subdev_fops;
static inline void v4l2_set_subdevdata(struct v4l2_subdev *sd, void *p)
static inline void *v4l2_get_subdevdata(const struct v4l2_subdev *sd)
static inline void v4l2_set_subdev_hostdata(struct v4l2_subdev *sd, void *p)
static inline void *v4l2_get_subdev_hostdata(const struct v4l2_subdev *sd)
void v4l2_subdev_init(struct v4l2_subdev *sd,
const struct v4l2_subdev_ops *ops);
#define v4l2_subdev_call(sd, o, f, args...)				\
(!(sd) ? -ENODEV : (((sd)->ops->o && (sd)->ops->o->f) ?	\
(sd)->ops->o->f((sd) , ##args) : -ENOIOCTLCMD))
#define v4l2_subdev_notify(sd, notification, arg)			   \
((!(sd) || !(sd)->v4l2_dev || !(sd)->v4l2_dev->notify) ? -ENODEV : \
(sd)->v4l2_dev->notify((sd), (notification), (arg)))
