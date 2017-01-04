#define MB_FCR32(bay, r)	((bay)->base + ((r) >> 2))
#define MB_FCR8(bay, r)		(((volatile u8 __iomem *)((bay)->base)) + (r))
#define MB_IN32(bay,r)		(in_le32(MB_FCR32(bay,r)))
#define MB_OUT32(bay,r,v)	(out_le32(MB_FCR32(bay,r), (v)))
#define MB_BIS(bay,r,v)		(MB_OUT32((bay), (r), MB_IN32((bay), r) | (v)))
#define MB_BIC(bay,r,v)		(MB_OUT32((bay), (r), MB_IN32((bay), r) & ~(v)))
#define MB_IN8(bay,r)		(in_8(MB_FCR8(bay,r)))
#define MB_OUT8(bay,r,v)	(out_8(MB_FCR8(bay,r), (v)))
struct media_bay_info;
struct mb_ops ;
struct media_bay_info ;
#define MAX_BAYS	2
static struct media_bay_info media_bays[MAX_BAYS];
static int media_bay_count = 0;
#define MB_POLL_DELAY	25
#define MB_STABLE_DELAY	100
#define MB_POWER_DELAY	200
#define MB_RESET_DELAY	50
#define MB_SETUP_DELAY	100
#define MB_IDE_WAIT	1000
enum ;
#define MB_POWER_SOUND		0x08
#define MB_POWER_FLOPPY		0x04
#define MB_POWER_ATA		0x02
#define MB_POWER_PCI		0x01
#define MB_POWER_OFF		0x00
static u8
ohare_mb_content(struct media_bay_info *bay)
static u8
heathrow_mb_content(struct media_bay_info *bay)
static u8
keylargo_mb_content(struct media_bay_info *bay)
static void
ohare_mb_power(struct media_bay_info* bay, int on_off)
static void
heathrow_mb_power(struct media_bay_info* bay, int on_off)
static void
keylargo_mb_power(struct media_bay_info* bay, int on_off)
static int
ohare_mb_setup_bus(struct media_bay_info* bay, u8 device_id)
static int
heathrow_mb_setup_bus(struct media_bay_info* bay, u8 device_id)
static int
keylargo_mb_setup_bus(struct media_bay_info* bay, u8 device_id)
static void
ohare_mb_un_reset(struct media_bay_info* bay)
static void keylargo_mb_init(struct media_bay_info *bay)
static void heathrow_mb_un_reset(struct media_bay_info* bay)
static void keylargo_mb_un_reset(struct media_bay_info* bay)
static void ohare_mb_un_reset_ide(struct media_bay_info* bay)
static void heathrow_mb_un_reset_ide(struct media_bay_info* bay)
static void keylargo_mb_un_reset_ide(struct media_bay_info* bay)
static inline void set_mb_power(struct media_bay_info* bay, int onoff)
static void poll_media_bay(struct media_bay_info* bay)
int check_media_bay(struct macio_dev *baydev)
EXPORT_SYMBOL_GPL(check_media_bay);
void lock_media_bay(struct macio_dev *baydev)
EXPORT_SYMBOL_GPL(lock_media_bay);
void unlock_media_bay(struct macio_dev *baydev)
EXPORT_SYMBOL_GPL(unlock_media_bay);
static int mb_broadcast_hotplug(struct device *dev, void *data)
static void media_bay_step(int i)
static int media_bay_task(void *x)
static int __devinit media_bay_attach(struct macio_dev *mdev, const struct of_device_id *match)
static int media_bay_suspend(struct macio_dev *mdev, pm_message_t state)
static int media_bay_resume(struct macio_dev *mdev)
static struct mb_ops ohare_mb_ops = ;
static struct mb_ops heathrow_mb_ops = ;
static struct mb_ops keylargo_mb_ops = ;
static struct of_device_id media_bay_match[] =
;
static struct macio_driver media_bay_driver =
;
static int __init media_bay_init(void)
device_initcall(media_bay_init);
