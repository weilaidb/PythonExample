#define pr_fmt(fmt) KBUILD_MODNAME ":%s(): " fmt, __func__
#define container_obj(layr) ((struct cfsrvl *) layr)
static int cfvidl_receive(struct cflayer *layr, struct cfpkt *pkt);
static int cfvidl_transmit(struct cflayer *layr, struct cfpkt *pkt);
struct cflayer *cfvidl_create(u8 channel_id, struct dev_info *dev_info)
static int cfvidl_receive(struct cflayer *layr, struct cfpkt *pkt)
static int cfvidl_transmit(struct cflayer *layr, struct cfpkt *pkt)
