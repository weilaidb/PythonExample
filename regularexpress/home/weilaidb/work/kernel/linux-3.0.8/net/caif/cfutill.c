#define pr_fmt(fmt) KBUILD_MODNAME ":%s(): " fmt, __func__
#define container_obj(layr) ((struct cfsrvl *) layr)
#define UTIL_PAYLOAD  0x00
#define UTIL_CMD_BIT  0x80
#define UTIL_REMOTE_SHUTDOWN 0x82
#define UTIL_FLOW_OFF 0x81
#define UTIL_FLOW_ON  0x80
static int cfutill_receive(struct cflayer *layr, struct cfpkt *pkt);
static int cfutill_transmit(struct cflayer *layr, struct cfpkt *pkt);
struct cflayer *cfutill_create(u8 channel_id, struct dev_info *dev_info)
static int cfutill_receive(struct cflayer *layr, struct cfpkt *pkt)
static int cfutill_transmit(struct cflayer *layr, struct cfpkt *pkt)
