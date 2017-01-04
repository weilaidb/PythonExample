#define pr_fmt(fmt) KBUILD_MODNAME ":%s(): " fmt, __func__
#define container_obj(layr) ((struct cfserl *) layr)
#define CFSERL_STX 0x02
#define SERIAL_MINIUM_PACKET_SIZE 4
#define SERIAL_MAX_FRAMESIZE 4096
struct cfserl ;
static int cfserl_receive(struct cflayer *layr, struct cfpkt *pkt);
static int cfserl_transmit(struct cflayer *layr, struct cfpkt *pkt);
static void cfserl_ctrlcmd(struct cflayer *layr, enum caif_ctrlcmd ctrl,
int phyid);
struct cflayer *cfserl_create(int type, int instance, bool use_stx)
static int cfserl_receive(struct cflayer *l, struct cfpkt *newpkt)
static int cfserl_transmit(struct cflayer *layer, struct cfpkt *newpkt)
static void cfserl_ctrlcmd(struct cflayer *layr, enum caif_ctrlcmd ctrl,
int phyid)
