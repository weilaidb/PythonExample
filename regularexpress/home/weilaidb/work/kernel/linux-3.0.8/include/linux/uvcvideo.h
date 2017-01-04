#define __LINUX_UVCVIDEO_H_
#define UVC_CTRL_DATA_TYPE_RAW		0
#define UVC_CTRL_DATA_TYPE_SIGNED	1
#define UVC_CTRL_DATA_TYPE_UNSIGNED	2
#define UVC_CTRL_DATA_TYPE_BOOLEAN	3
#define UVC_CTRL_DATA_TYPE_ENUM		4
#define UVC_CTRL_DATA_TYPE_BITMASK	5
#define UVC_CTRL_FLAG_SET_CUR		(1 << 0)
#define UVC_CTRL_FLAG_GET_CUR		(1 << 1)
#define UVC_CTRL_FLAG_GET_MIN		(1 << 2)
#define UVC_CTRL_FLAG_GET_MAX		(1 << 3)
#define UVC_CTRL_FLAG_GET_RES		(1 << 4)
#define UVC_CTRL_FLAG_GET_DEF		(1 << 5)
#define UVC_CTRL_FLAG_RESTORE		(1 << 6)
#define UVC_CTRL_FLAG_AUTO_UPDATE	(1 << 7)
#define UVC_CTRL_FLAG_GET_RANGE \
(UVC_CTRL_FLAG_GET_CUR | UVC_CTRL_FLAG_GET_MIN | \
UVC_CTRL_FLAG_GET_MAX | UVC_CTRL_FLAG_GET_RES | \
UVC_CTRL_FLAG_GET_DEF)
struct uvc_menu_info ;
struct uvc_xu_control_mapping ;
struct uvc_xu_control_query ;
#define UVCIOC_CTRL_MAP		_IOWR('u', 0x20, struct uvc_xu_control_mapping)
#define UVCIOC_CTRL_QUERY	_IOWR('u', 0x21, struct uvc_xu_control_query)
