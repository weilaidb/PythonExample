#define UVC_CTRL_DATA_CURRENT	0
#define UVC_CTRL_DATA_BACKUP	1
#define UVC_CTRL_DATA_MIN	2
#define UVC_CTRL_DATA_MAX	3
#define UVC_CTRL_DATA_RES	4
#define UVC_CTRL_DATA_DEF	5
#define UVC_CTRL_DATA_LAST	6
static struct uvc_control_info uvc_ctrls[] = ;
static struct uvc_menu_info power_line_frequency_controls[] = ;
static struct uvc_menu_info exposure_auto_controls[] = ;
static __s32 uvc_ctrl_get_zoom(struct uvc_control_mapping *mapping,
__u8 query, const __u8 *data)
static void uvc_ctrl_set_zoom(struct uvc_control_mapping *mapping,
__s32 value, __u8 *data)
static struct uvc_control_mapping uvc_ctrl_mappings[] = ;
static inline __u8 *uvc_ctrl_data(struct uvc_control *ctrl, int id)
static inline int uvc_test_bit(const __u8 *data, int bit)
static inline void uvc_clear_bit(__u8 *data, int bit)
static __s32 uvc_get_le_value(struct uvc_control_mapping *mapping,
__u8 query, const __u8 *data)
static void uvc_set_le_value(struct uvc_control_mapping *mapping,
__s32 value, __u8 *data)
static const __u8 uvc_processing_guid[16] = UVC_GUID_UVC_PROCESSING;
static const __u8 uvc_camera_guid[16] = UVC_GUID_UVC_CAMERA;
static const __u8 uvc_media_transport_input_guid[16] =
UVC_GUID_UVC_MEDIA_TRANSPORT_INPUT;
static int uvc_entity_match_guid(const struct uvc_entity *entity,
const __u8 guid[16])
static void __uvc_find_control(struct uvc_entity *entity, __u32 v4l2_id,
struct uvc_control_mapping **mapping, struct uvc_control **control,
int next)
static struct uvc_control *uvc_find_control(struct uvc_video_chain *chain,
__u32 v4l2_id, struct uvc_control_mapping **mapping)
static int uvc_ctrl_populate_cache(struct uvc_video_chain *chain,
struct uvc_control *ctrl)
int uvc_query_v4l2_ctrl(struct uvc_video_chain *chain,
struct v4l2_queryctrl *v4l2_ctrl)
int uvc_query_v4l2_menu(struct uvc_video_chain *chain,
struct v4l2_querymenu *query_menu)
int uvc_ctrl_begin(struct uvc_video_chain *chain)
static int uvc_ctrl_commit_entity(struct uvc_device *dev,
struct uvc_entity *entity, int rollback)
int __uvc_ctrl_commit(struct uvc_video_chain *chain, int rollback)
int uvc_ctrl_get(struct uvc_video_chain *chain,
struct v4l2_ext_control *xctrl)
int uvc_ctrl_set(struct uvc_video_chain *chain,
struct v4l2_ext_control *xctrl)
static void uvc_ctrl_fixup_xu_info(struct uvc_device *dev,
const struct uvc_control *ctrl, struct uvc_control_info *info)
static int uvc_ctrl_fill_xu_info(struct uvc_device *dev,
const struct uvc_control *ctrl, struct uvc_control_info *info)
static int uvc_ctrl_add_info(struct uvc_device *dev, struct uvc_control *ctrl,
const struct uvc_control_info *info);
static int uvc_ctrl_init_xu_ctrl(struct uvc_device *dev,
struct uvc_control *ctrl)
int uvc_xu_ctrl_query(struct uvc_video_chain *chain,
struct uvc_xu_control_query *xqry)
int uvc_ctrl_resume_device(struct uvc_device *dev)
static int uvc_ctrl_add_info(struct uvc_device *dev, struct uvc_control *ctrl,
const struct uvc_control_info *info)
static int __uvc_ctrl_add_mapping(struct uvc_device *dev,
struct uvc_control *ctrl, const struct uvc_control_mapping *mapping)
int uvc_ctrl_add_mapping(struct uvc_video_chain *chain,
const struct uvc_control_mapping *mapping)
static void uvc_ctrl_prune_entity(struct uvc_device *dev,
struct uvc_entity *entity)
static void uvc_ctrl_init_ctrl(struct uvc_device *dev, struct uvc_control *ctrl)
int uvc_ctrl_init_device(struct uvc_device *dev)
static void uvc_ctrl_cleanup_mappings(struct uvc_device *dev,
struct uvc_control *ctrl)
void uvc_ctrl_cleanup_device(struct uvc_device *dev)
