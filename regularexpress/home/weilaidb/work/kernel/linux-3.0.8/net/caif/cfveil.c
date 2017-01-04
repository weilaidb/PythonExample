#define pr_fmt(fmt) KBUILD_MODNAME ":%s(): " fmt, __func__
#define VEI_PAYLOAD  0x00
#define VEI_CMD_BIT  0x80
#define VEI_FLOW_OFF 0x81
#define VEI_FLOW_ON  0x80
#define VEI_SET_PIN  0x82
#define container_obj(layr) container_of(layr, struct cfsrvl, layer)
static int cfvei_receive(struct cflayer *layr, struct cfpkt *pkt);
static int cfvei_transmit(struct cflayer *layr, struct cfpkt *pkt);
struct cflayer *cfvei_create(u8 channel_id, struct dev_info *dev_info)
static int cfvei_receive(struct cflayer *layr, struct cfpkt *pkt)
static int cfvei_transmit(struct cflayer *layr, struct cfpkt *pkt)
