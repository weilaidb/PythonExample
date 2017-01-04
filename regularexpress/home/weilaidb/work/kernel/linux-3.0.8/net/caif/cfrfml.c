#define pr_fmt(fmt) KBUILD_MODNAME ":%s(): " fmt, __func__
#define container_obj(layr) container_of(layr, struct cfrfml, serv.layer)
#define RFM_SEGMENTATION_BIT 0x01
#define RFM_HEAD_SIZE 7
static int cfrfml_receive(struct cflayer *layr, struct cfpkt *pkt);
static int cfrfml_transmit(struct cflayer *layr, struct cfpkt *pkt);
struct cfrfml ;
static void cfrfml_release(struct cflayer *layer)
struct cflayer *cfrfml_create(u8 channel_id, struct dev_info *dev_info,
int mtu_size)
static struct cfpkt *rfm_append(struct cfrfml *rfml, char *seghead,
struct cfpkt *pkt, int *err)
static int cfrfml_receive(struct cflayer *layr, struct cfpkt *pkt)
static int cfrfml_transmit_segment(struct cfrfml *rfml, struct cfpkt *pkt)
static int cfrfml_transmit(struct cflayer *layr, struct cfpkt *pkt)
