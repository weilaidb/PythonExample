#define pr_fmt(fmt) KBUILD_MODNAME ":%s(): " fmt, __func__
#define container_obj(layr) container_of(layr, struct cfmuxl, layer)
#define CAIF_CTRL_CHANNEL 0
#define UP_CACHE_SIZE 8
#define DN_CACHE_SIZE 8
struct cfmuxl ;
static int cfmuxl_receive(struct cflayer *layr, struct cfpkt *pkt);
static int cfmuxl_transmit(struct cflayer *layr, struct cfpkt *pkt);
static void cfmuxl_ctrlcmd(struct cflayer *layr, enum caif_ctrlcmd ctrl,
int phyid);
static struct cflayer *get_up(struct cfmuxl *muxl, u16 id);
struct cflayer *cfmuxl_create(void)
int cfmuxl_set_dnlayer(struct cflayer *layr, struct cflayer *dn, u8 phyid)
static struct cflayer *get_from_id(struct list_head *list, u16 id)
int cfmuxl_set_uplayer(struct cflayer *layr, struct cflayer *up, u8 linkid)
struct cflayer *cfmuxl_remove_dnlayer(struct cflayer *layr, u8 phyid)
static struct cflayer *get_up(struct cfmuxl *muxl, u16 id)
static struct cflayer *get_dn(struct cfmuxl *muxl, struct dev_info *dev_info)
struct cflayer *cfmuxl_remove_uplayer(struct cflayer *layr, u8 id)
static int cfmuxl_receive(struct cflayer *layr, struct cfpkt *pkt)
static int cfmuxl_transmit(struct cflayer *layr, struct cfpkt *pkt)
static void cfmuxl_ctrlcmd(struct cflayer *layr, enum caif_ctrlcmd ctrl,
int phyid)
