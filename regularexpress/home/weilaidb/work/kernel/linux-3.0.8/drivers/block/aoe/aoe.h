#define VERSION "47"
#define AOE_MAJOR 152
#define DEVICE_NAME "aoe"
#define AOE_PARTITIONS (16)
#define SYSMINOR(aoemajor, aoeminor) ((aoemajor) * NPERSHELF + (aoeminor))
#define AOEMAJOR(sysminor) ((sysminor) / NPERSHELF)
#define AOEMINOR(sysminor) ((sysminor) % NPERSHELF)
#define WHITESPACE " \t\v\f\n"
enum ;
struct aoe_hdr ;
struct aoe_atahdr ;
struct aoe_cfghdr ;
enum ;
enum ;
struct buf ;
struct frame ;
struct aoeif ;
struct aoetgt ;
struct aoedev ;
int aoeblk_init(void);
void aoeblk_exit(void);
void aoeblk_gdalloc(void *);
void aoedisk_rm_sysfs(struct aoedev *d);
int aoechr_init(void);
void aoechr_exit(void);
void aoechr_error(char *);
void aoecmd_work(struct aoedev *d);
void aoecmd_cfg(ushort aoemajor, unsigned char aoeminor);
void aoecmd_ata_rsp(struct sk_buff *);
void aoecmd_cfg_rsp(struct sk_buff *);
void aoecmd_sleepwork(struct work_struct *);
void aoecmd_cleanslate(struct aoedev *);
struct sk_buff *aoecmd_ata_id(struct aoedev *);
int aoedev_init(void);
void aoedev_exit(void);
struct aoedev *aoedev_by_aoeaddr(int maj, int min);
struct aoedev *aoedev_by_sysminor_m(ulong sysminor);
void aoedev_downdev(struct aoedev *d);
int aoedev_flush(const char __user *str, size_t size);
int aoenet_init(void);
void aoenet_exit(void);
void aoenet_xmit(struct sk_buff_head *);
int is_aoe_netif(struct net_device *ifp);
int set_aoe_iflist(const char __user *str, size_t size);
