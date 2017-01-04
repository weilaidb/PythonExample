static int aoe_deadsecs = 60 * 3;
module_param(aoe_deadsecs, int, 0644);
MODULE_PARM_DESC(aoe_deadsecs, "After aoe_deadsecs seconds, give up and fail dev.");
static int aoe_maxout = 16;
module_param(aoe_maxout, int, 0644);
MODULE_PARM_DESC(aoe_maxout,
"Only aoe_maxout outstanding packets for every MAC on eX.Y.");
static struct sk_buff *
new_skb(ulong len)
static struct frame *
getframe(struct aoetgt *t, int tag)
static int
newtag(struct aoetgt *t)
static int
aoehdr_atainit(struct aoedev *d, struct aoetgt *t, struct aoe_hdr *h)
static inline void
put_lba(struct aoe_atahdr *ah, sector_t lba)
static void
ifrotate(struct aoetgt *t)
static void
skb_pool_put(struct aoedev *d, struct sk_buff *skb)
static struct sk_buff *
skb_pool_get(struct aoedev *d)
static struct frame *
freeframe(struct aoedev *d)
static int
aoecmd_ata_rw(struct aoedev *d)
static void
aoecmd_cfg_pkts(ushort aoemajor, unsigned char aoeminor, struct sk_buff_head *queue)
static void
resend(struct aoedev *d, struct aoetgt *t, struct frame *f)
static int
tsince(int tag)
static struct aoeif *
getif(struct aoetgt *t, struct net_device *nd)
static struct aoeif *
addif(struct aoetgt *t, struct net_device *nd)
static void
ejectif(struct aoetgt *t, struct aoeif *ifp)
static int
sthtith(struct aoedev *d)
static inline unsigned char
ata_scnt(unsigned char *packet)
static void
rexmit_timer(ulong vp)
void
aoecmd_work(struct aoedev *d)
void
aoecmd_sleepwork(struct work_struct *work)
static void
ataid_complete(struct aoedev *d, struct aoetgt *t, unsigned char *id)
static void
calc_rttavg(struct aoedev *d, int rtt)
static struct aoetgt *
gettgt(struct aoedev *d, char *addr)
static inline void
diskstats(struct gendisk *disk, struct bio *bio, ulong duration, sector_t sector)
void
aoecmd_ata_rsp(struct sk_buff *skb)
void
aoecmd_cfg(ushort aoemajor, unsigned char aoeminor)
struct sk_buff *
aoecmd_ata_id(struct aoedev *d)
static struct aoetgt *
addtgt(struct aoedev *d, char *addr, ulong nframes)
void
aoecmd_cfg_rsp(struct sk_buff *skb)
void
aoecmd_cleanslate(struct aoedev *d)
