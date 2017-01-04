#define pr_fmt(fmt) KBUILD_MODNAME ":%s(): " fmt, __func__
#define container_obj(layr) container_of(layr, struct cffrml, layer)
struct cffrml ;
static int cffrml_receive(struct cflayer *layr, struct cfpkt *pkt);
static int cffrml_transmit(struct cflayer *layr, struct cfpkt *pkt);
static void cffrml_ctrlcmd(struct cflayer *layr, enum caif_ctrlcmd ctrl,
int phyid);
static u32 cffrml_rcv_error;
static u32 cffrml_rcv_checsum_error;
struct cflayer *cffrml_create(u16 phyid, bool use_fcs)
void cffrml_free(struct cflayer *layer)
void cffrml_set_uplayer(struct cflayer *this, struct cflayer *up)
void cffrml_set_dnlayer(struct cflayer *this, struct cflayer *dn)
static u16 cffrml_checksum(u16 chks, void *buf, u16 len)
static int cffrml_receive(struct cflayer *layr, struct cfpkt *pkt)
static int cffrml_transmit(struct cflayer *layr, struct cfpkt *pkt)
static void cffrml_ctrlcmd(struct cflayer *layr, enum caif_ctrlcmd ctrl,
int phyid)
void cffrml_put(struct cflayer *layr)
void cffrml_hold(struct cflayer *layr)
int cffrml_refcnt_read(struct cflayer *layr)
