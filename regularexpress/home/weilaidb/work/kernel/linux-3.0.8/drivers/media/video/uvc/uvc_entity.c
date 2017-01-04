static int uvc_mc_register_entity(struct uvc_video_chain *chain,
struct uvc_entity *entity)
static struct v4l2_subdev_ops uvc_subdev_ops = ;
void uvc_mc_cleanup_entity(struct uvc_entity *entity)
static int uvc_mc_init_entity(struct uvc_entity *entity)
int uvc_mc_register_entities(struct uvc_video_chain *chain)
