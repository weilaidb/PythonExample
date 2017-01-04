#define pr_fmt(fmt) KBUILD_MODNAME ":%s(): " fmt, __func__
#define container_obj(layr) ((struct cfsrvl *) layr)
#define DGM_CMD_BIT  0x80
#define DGM_FLOW_OFF 0x81
#define DGM_FLOW_ON  0x80
#define DGM_MTU 1500
static int cfdgml_receive(struct cflayer *layr, struct cfpkt *pkt);
static int cfdgml_transmit(struct cflayer *layr, struct cfpkt *pkt);
struct cflayer *cfdgml_create(u8 channel_id, struct dev_info *dev_info)
static int cfdgml_receive(struct cflayer *layr, struct cfpkt *pkt)
static int cfdgml_transmit(struct cflayer *layr, struct cfpkt *pkt)
