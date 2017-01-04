#define _V4L2_DEV_H
#define VIDEO_MAJOR	81
#define VFL_TYPE_GRABBER	0
#define VFL_TYPE_VBI		1
#define VFL_TYPE_RADIO		2
#define VFL_TYPE_SUBDEV		3
#define VFL_TYPE_MAX		4
struct v4l2_ioctl_callbacks;
struct video_device;
struct v4l2_device;
struct v4l2_ctrl_handler;
#define V4L2_FL_REGISTERED	(0)
#define V4L2_FL_USES_V4L2_FH	(1)
#define V4L2_FL_USE_FH_PRIO	(2)
struct v4l2_prio_state ;
void v4l2_prio_init(struct v4l2_prio_state *global);
int v4l2_prio_change(struct v4l2_prio_state *global, enum v4l2_priority *local,
enum v4l2_priority new);
void v4l2_prio_open(struct v4l2_prio_state *global, enum v4l2_priority *local);
void v4l2_prio_close(struct v4l2_prio_state *global, enum v4l2_priority local);
enum v4l2_priority v4l2_prio_max(struct v4l2_prio_state *global);
int v4l2_prio_check(struct v4l2_prio_state *global, enum v4l2_priority local);
struct v4l2_file_operations ;
struct video_device
;
#define media_entity_to_video_device(__e) \
container_of(__e, struct video_device, entity)
#define to_video_device(cd) container_of(cd, struct video_device, dev)
int __must_check __video_register_device(struct video_device *vdev, int type,
int nr, int warn_if_nr_in_use, struct module *owner);
static inline int __must_check video_register_device(struct video_device *vdev,
int type, int nr)
static inline int __must_check video_register_device_no_warn(
struct video_device *vdev, int type, int nr)
void video_unregister_device(struct video_device *vdev);
struct video_device * __must_check video_device_alloc(void);
void video_device_release(struct video_device *vdev);
void video_device_release_empty(struct video_device *vdev);
static inline void *video_get_drvdata(struct video_device *vdev)
static inline void video_set_drvdata(struct video_device *vdev, void *data)
struct video_device *video_devdata(struct file *file);
static inline void *video_drvdata(struct file *file)
static inline const char *video_device_node_name(struct video_device *vdev)
static inline int video_is_registered(struct video_device *vdev)
