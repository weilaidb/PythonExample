#define VPIF_CAPTURE_H
#define VPIF_MAJOR_RELEASE		0
#define VPIF_MINOR_RELEASE		0
#define VPIF_BUILD			1
#define VPIF_CAPTURE_VERSION_CODE	((VPIF_MAJOR_RELEASE << 16) | \
(VPIF_MINOR_RELEASE << 8) | VPIF_BUILD)
#define VPIF_VALID_FIELD(field)		(((V4L2_FIELD_ANY == field) || \
(V4L2_FIELD_NONE == field)) || \
(((V4L2_FIELD_INTERLACED == field) || \
(V4L2_FIELD_SEQ_TB == field)) || \
(V4L2_FIELD_SEQ_BT == field)))
#define VPIF_CAPTURE_MAX_DEVICES	2
#define VPIF_VIDEO_INDEX		0
#define VPIF_NUMBER_OF_OBJECTS		1
enum vpif_channel_id ;
struct video_obj ;
struct common_obj ;
struct channel_obj ;
struct vpif_fh ;
struct vpif_device ;
struct vpif_config_params ;
struct vpif_service_line ;
