#define __LINUX_MEDIA_H
#define MEDIA_API_VERSION	KERNEL_VERSION(0, 1, 0)
struct media_device_info ;
#define MEDIA_ENT_ID_FLAG_NEXT		(1 << 31)
#define MEDIA_ENT_TYPE_SHIFT		16
#define MEDIA_ENT_TYPE_MASK		0x00ff0000
#define MEDIA_ENT_SUBTYPE_MASK		0x0000ffff
#define MEDIA_ENT_T_DEVNODE		(1 << MEDIA_ENT_TYPE_SHIFT)
#define MEDIA_ENT_T_DEVNODE_V4L		(MEDIA_ENT_T_DEVNODE + 1)
#define MEDIA_ENT_T_DEVNODE_FB		(MEDIA_ENT_T_DEVNODE + 2)
#define MEDIA_ENT_T_DEVNODE_ALSA	(MEDIA_ENT_T_DEVNODE + 3)
#define MEDIA_ENT_T_DEVNODE_DVB		(MEDIA_ENT_T_DEVNODE + 4)
#define MEDIA_ENT_T_V4L2_SUBDEV		(2 << MEDIA_ENT_TYPE_SHIFT)
#define MEDIA_ENT_T_V4L2_SUBDEV_SENSOR	(MEDIA_ENT_T_V4L2_SUBDEV + 1)
#define MEDIA_ENT_T_V4L2_SUBDEV_FLASH	(MEDIA_ENT_T_V4L2_SUBDEV + 2)
#define MEDIA_ENT_T_V4L2_SUBDEV_LENS	(MEDIA_ENT_T_V4L2_SUBDEV + 3)
#define MEDIA_ENT_FL_DEFAULT		(1 << 0)
struct media_entity_desc ;
#define MEDIA_PAD_FL_SINK		(1 << 0)
#define MEDIA_PAD_FL_SOURCE		(1 << 1)
struct media_pad_desc ;
#define MEDIA_LNK_FL_ENABLED		(1 << 0)
#define MEDIA_LNK_FL_IMMUTABLE		(1 << 1)
#define MEDIA_LNK_FL_DYNAMIC		(1 << 2)
struct media_link_desc ;
struct media_links_enum ;
#define MEDIA_IOC_DEVICE_INFO		_IOWR('|', 0x00, struct media_device_info)
#define MEDIA_IOC_ENUM_ENTITIES		_IOWR('|', 0x01, struct media_entity_desc)
#define MEDIA_IOC_ENUM_LINKS		_IOWR('|', 0x02, struct media_links_enum)
#define MEDIA_IOC_SETUP_LINK		_IOWR('|', 0x03, struct media_link_desc)
