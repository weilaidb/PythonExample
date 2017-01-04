#define __ASM_SH_DMA_H
#  define MAX_DMA_CHANNELS	(CONFIG_NR_DMA_CHANNELS)
#elif defined(CONFIG_NR_ONCHIP_DMA_CHANNELS)
#  define MAX_DMA_CHANNELS	(CONFIG_NR_ONCHIP_DMA_CHANNELS)
#  define MAX_DMA_CHANNELS	0
#define DMA_MODE_READ		0x00
#define DMA_MODE_WRITE		0x01
#define DMA_MODE_MASK		0x01
#define DMA_AUTOINIT		0x10
enum ;
enum ;
extern spinlock_t dma_spin_lock;
struct dma_channel;
struct dma_ops ;
struct dma_channel ;
struct dma_info ;
struct dma_chan_caps ;
#define to_dma_channel(channel) container_of(channel, struct dma_channel, dev)
extern int dma_xfer(unsigned int chan, unsigned long from,
unsigned long to, size_t size, unsigned int mode);
#define dma_write(chan, from, to, size)	\
dma_xfer(chan, from, to, size, DMA_MODE_WRITE)
#define dma_write_page(chan, from, to)	\
dma_write(chan, from, to, PAGE_SIZE)
#define dma_read(chan, from, to, size)	\
dma_xfer(chan, from, to, size, DMA_MODE_READ)
#define dma_read_page(chan, from, to)	\
dma_read(chan, from, to, PAGE_SIZE)
extern int request_dma_bycap(const char **dmac, const char **caps,
const char *dev_id);
extern int get_dma_residue(unsigned int chan);
extern struct dma_info *get_dma_info(unsigned int chan);
extern struct dma_channel *get_dma_channel(unsigned int chan);
extern void dma_wait_for_completion(unsigned int chan);
extern void dma_configure_channel(unsigned int chan, unsigned long flags);
extern int register_dmac(struct dma_info *info);
extern void unregister_dmac(struct dma_info *info);
extern struct dma_info *get_dma_info_by_name(const char *dmac_name);
extern int dma_extend(unsigned int chan, unsigned long op, void *param);
extern int register_chan_caps(const char *dmac, struct dma_chan_caps *capslist);
extern int dma_create_sysfs_files(struct dma_channel *, struct dma_info *);
extern void dma_remove_sysfs_files(struct dma_channel *, struct dma_info *);
extern int isa_dma_bridge_buggy;
#define isa_dma_bridge_buggy	(0)
