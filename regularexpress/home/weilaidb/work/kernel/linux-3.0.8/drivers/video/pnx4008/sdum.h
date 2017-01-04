#define MAX_DUM_CHANNELS	64
#define RGB_MEM_WINDOW(x) (0x10000000 + (x)*0x00100000)
#define QCIF_OFFSET(x) (((x) == 0) ? 0x00000: ((x) == 1) ? 0x30000: -1)
#define CIF_OFFSET(x)  (((x) == 0) ? 0x00000: ((x) == 1) ? 0x60000: -1)
#define CTRL_SETDIRTY	 	(0x00000001)
#define CONF_DIRTYENABLE	(0x00000020)
#define CONF_SYNCENABLE		(0x00000004)
#define DIRTY_ENABLED(conf)	((conf) & 0x0020)
#define SYNC_ENABLED(conf) 	((conf) & 0x0004)
#define PNX4008_DUM_WT_CFG		0x00372000
#define PNX4008_DUM_RT_CFG		0x00003A47
#define PNX4008_DUM_T_CFG		0x1D
#define PNX4008_DUM_CLK_DIV		0x02DD
#define FB_DMA_SIZE (PAGE_ALIGN(SZ_1M + PAGE_SIZE))
#define OFFSET_RGBBUFFER (0xB0000)
#define OFFSET_YUVBUFFER (0x00000)
#define YUVBUFFER (lcd_video_start + OFFSET_YUVBUFFER)
#define RGBBUFFER (lcd_video_start + OFFSET_RGBBUFFER)
#define CMDSTRING_BASEADDR	(0x00C000)
#define BYTES_PER_CMDSTRING	(0x80)
#define NR_OF_CMDSTRINGS	(64)
#define MAX_NR_PRESTRINGS (0x40)
#define MAX_NR_POSTSTRINGS (0x40)
#define DUM_CLK_ENABLE 0x01
#define DUM_CLK_DISABLE 0
#define DUM_DECODE_MASK 0x1FFFFFFF
#define DUM_CHANNEL_CFG_MASK 0x01FF
#define DUM_CHANNEL_CFG_SYNC_MASK 0xFFFE00FF
#define DUM_CHANNEL_CFG_SYNC_MASK_SET 0x0CA00
#define SDUM_RETURNVAL_BASE (0x500)
#define CONF_SYNC_OFF		(0x602)
#define CONF_SYNC_ON		(0x603)
#define CONF_DIRTYDETECTION_OFF	(0x600)
#define CONF_DIRTYDETECTION_ON	(0x601)
struct dumchannel_uf ;
enum ;
struct cmdstring ;
struct dumchannel ;
int pnx4008_alloc_dum_channel(int dev_id);
int pnx4008_free_dum_channel(int channr, int dev_id);
int pnx4008_get_dum_channel_uf(struct dumchannel_uf *pChan_uf, int dev_id);
int pnx4008_put_dum_channel_uf(struct dumchannel_uf chan_uf, int dev_id);
int pnx4008_set_dum_channel_sync(int channr, int val, int dev_id);
int pnx4008_set_dum_channel_dirty_detect(int channr, int val, int dev_id);
int pnx4008_force_dum_update_channel(int channr, int dev_id);
int pnx4008_get_dum_channel_config(int channr, int dev_id);
int pnx4008_sdum_mmap(struct fb_info *info, struct vm_area_struct *vma, struct device *dev);
int pnx4008_set_dum_exit_notification(int dev_id);
int pnx4008_get_fb_addresses(int fb_type, void **virt_addr,
dma_addr_t * phys_addr, int *fb_length);
