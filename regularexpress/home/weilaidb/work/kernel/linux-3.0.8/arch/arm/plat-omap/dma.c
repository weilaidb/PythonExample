#undef DEBUG
enum ;
enum ;
#define OMAP_DMA_ACTIVE			0x01
#define OMAP2_DMA_CSR_CLEAR_MASK	0xffffffff
#define OMAP_FUNC_MUX_ARM_BASE		(0xfffe1000 + 0xec)
static struct omap_system_dma_plat_info *p;
static struct omap_dma_dev_attr *d;
static int enable_1510_mode;
static u32 errata;
static struct omap_dma_global_context_registers  omap_dma_global_context;
struct dma_link_info ;
static struct dma_link_info *dma_linked_lch;
#define OMAP_DMA_CHAIN_QINIT(chain_id)					\
do  while (0)
#define OMAP_DMA_CHAIN_QFULL(chain_id)					\
(dma_linked_lch[chain_id].no_of_lchs_linked ==		\
dma_linked_lch[chain_id].q_count)
#define OMAP_DMA_CHAIN_QLAST(chain_id)					\
do  while (0)
#define OMAP_DMA_CHAIN_QEMPTY(chain_id)					\
(0 == dma_linked_lch[chain_id].q_count)
#define __OMAP_DMA_CHAIN_INCQ(end)					\
((end) = ((end)+1) % dma_linked_lch[chain_id].no_of_lchs_linked)
#define OMAP_DMA_CHAIN_INCQHEAD(chain_id)				\
do  while (0)
#define OMAP_DMA_CHAIN_INCQTAIL(chain_id)				\
do  while (0)
static int dma_lch_count;
static int dma_chan_count;
static int omap_dma_reserve_channels;
static spinlock_t dma_chan_lock;
static struct omap_dma_lch *dma_chan;
static inline void disable_lnk(int lch);
static void omap_disable_channel_irq(int lch);
static inline void omap_enable_channel_irq(int lch);
#define REVISIT_24XX()		printk(KERN_ERR "FIXME: no %s on 24xx\n", \
__func__);
static int omap_dma_in_1510_mode(void)
#define omap_dma_in_1510_mode()		0
static inline int get_gdma_dev(int req)
static inline void set_gdma_dev(int req, int dev)
#define set_gdma_dev(req, dev)	do  while (0)
void omap_set_dma_priority(int lch, int dst_port, int priority)
EXPORT_SYMBOL(omap_set_dma_priority);
void omap_set_dma_transfer_params(int lch, int data_type, int elem_count,
int frame_count, int sync_mode,
int dma_trigger, int src_or_dst_synch)
EXPORT_SYMBOL(omap_set_dma_transfer_params);
void omap_set_dma_color_mode(int lch, enum omap_dma_color_mode mode, u32 color)
EXPORT_SYMBOL(omap_set_dma_color_mode);
void omap_set_dma_write_mode(int lch, enum omap_dma_write_mode mode)
EXPORT_SYMBOL(omap_set_dma_write_mode);
void omap_set_dma_channel_mode(int lch, enum omap_dma_channel_mode mode)
EXPORT_SYMBOL(omap_set_dma_channel_mode);
void omap_set_dma_src_params(int lch, int src_port, int src_amode,
unsigned long src_start,
int src_ei, int src_fi)
EXPORT_SYMBOL(omap_set_dma_src_params);
void omap_set_dma_params(int lch, struct omap_dma_channel_params *params)
EXPORT_SYMBOL(omap_set_dma_params);
void omap_set_dma_src_index(int lch, int eidx, int fidx)
EXPORT_SYMBOL(omap_set_dma_src_index);
void omap_set_dma_src_data_pack(int lch, int enable)
EXPORT_SYMBOL(omap_set_dma_src_data_pack);
void omap_set_dma_src_burst_mode(int lch, enum omap_dma_burst_mode burst_mode)
EXPORT_SYMBOL(omap_set_dma_src_burst_mode);
void omap_set_dma_dest_params(int lch, int dest_port, int dest_amode,
unsigned long dest_start,
int dst_ei, int dst_fi)
EXPORT_SYMBOL(omap_set_dma_dest_params);
void omap_set_dma_dest_index(int lch, int eidx, int fidx)
EXPORT_SYMBOL(omap_set_dma_dest_index);
void omap_set_dma_dest_data_pack(int lch, int enable)
EXPORT_SYMBOL(omap_set_dma_dest_data_pack);
void omap_set_dma_dest_burst_mode(int lch, enum omap_dma_burst_mode burst_mode)
EXPORT_SYMBOL(omap_set_dma_dest_burst_mode);
static inline void omap_enable_channel_irq(int lch)
static void omap_disable_channel_irq(int lch)
void omap_enable_dma_irq(int lch, u16 bits)
EXPORT_SYMBOL(omap_enable_dma_irq);
void omap_disable_dma_irq(int lch, u16 bits)
EXPORT_SYMBOL(omap_disable_dma_irq);
static inline void enable_lnk(int lch)
static inline void disable_lnk(int lch)
static inline void omap2_enable_irq_lch(int lch)
static inline void omap2_disable_irq_lch(int lch)
int omap_request_dma(int dev_id, const char *dev_name,
void (*callback)(int lch, u16 ch_status, void *data),
void *data, int *dma_ch_out)
EXPORT_SYMBOL(omap_request_dma);
void omap_free_dma(int lch)
EXPORT_SYMBOL(omap_free_dma);
void
omap_dma_set_global_params(int arb_rate, int max_fifo_depth, int tparams)
EXPORT_SYMBOL(omap_dma_set_global_params);
int
omap_dma_set_prio_lch(int lch, unsigned char read_prio,
unsigned char write_prio)
EXPORT_SYMBOL(omap_dma_set_prio_lch);
void omap_clear_dma(int lch)
EXPORT_SYMBOL(omap_clear_dma);
void omap_start_dma(int lch)
EXPORT_SYMBOL(omap_start_dma);
void omap_stop_dma(int lch)
EXPORT_SYMBOL(omap_stop_dma);
int omap_set_dma_callback(int lch,
void (*callback)(int lch, u16 ch_status, void *data),
void *data)
EXPORT_SYMBOL(omap_set_dma_callback);
dma_addr_t omap_get_dma_src_pos(int lch)
EXPORT_SYMBOL(omap_get_dma_src_pos);
dma_addr_t omap_get_dma_dst_pos(int lch)
EXPORT_SYMBOL(omap_get_dma_dst_pos);
int omap_get_dma_active_status(int lch)
EXPORT_SYMBOL(omap_get_dma_active_status);
int omap_dma_running(void)
void omap_dma_link_lch(int lch_head, int lch_queue)
EXPORT_SYMBOL(omap_dma_link_lch);
void omap_dma_unlink_lch(int lch_head, int lch_queue)
EXPORT_SYMBOL(omap_dma_unlink_lch);
static void create_dma_lch_chain(int lch_head, int lch_queue)
int omap_request_dma_chain(int dev_id, const char *dev_name,
void (*callback) (int lch, u16 ch_status,
void *data),
int *chain_id, int no_of_chans, int chain_mode,
struct omap_dma_channel_params params)
EXPORT_SYMBOL(omap_request_dma_chain);
int omap_modify_dma_chain_params(int chain_id,
struct omap_dma_channel_params params)
EXPORT_SYMBOL(omap_modify_dma_chain_params);
int omap_free_dma_chain(int chain_id)
EXPORT_SYMBOL(omap_free_dma_chain);
int omap_dma_chain_status(int chain_id)
EXPORT_SYMBOL(omap_dma_chain_status);
int omap_dma_chain_a_transfer(int chain_id, int src_start, int dest_start,
int elem_count, int frame_count, void *callbk_data)
EXPORT_SYMBOL(omap_dma_chain_a_transfer);
int omap_start_dma_chain_transfers(int chain_id)
EXPORT_SYMBOL(omap_start_dma_chain_transfers);
int omap_stop_dma_chain_transfers(int chain_id)
EXPORT_SYMBOL(omap_stop_dma_chain_transfers);
int omap_get_dma_chain_index(int chain_id, int *ei, int *fi)
EXPORT_SYMBOL(omap_get_dma_chain_index);
int omap_get_dma_chain_dst_pos(int chain_id)
EXPORT_SYMBOL(omap_get_dma_chain_dst_pos);
int omap_get_dma_chain_src_pos(int chain_id)
EXPORT_SYMBOL(omap_get_dma_chain_src_pos);
static int omap1_dma_handle_ch(int ch)
static irqreturn_t omap1_dma_irq_handler(int irq, void *dev_id)
#define omap1_dma_irq_handler	NULL
static int omap2_dma_handle_ch(int ch)
static irqreturn_t omap2_dma_irq_handler(int irq, void *dev_id)
static struct irqaction omap24xx_dma_irq = ;
static struct irqaction omap24xx_dma_irq;
void omap_dma_global_context_save(void)
void omap_dma_global_context_restore(void)
static int __devinit omap_system_dma_probe(struct platform_device *pdev)
static int __devexit omap_system_dma_remove(struct platform_device *pdev)
static struct platform_driver omap_system_dma_driver = ;
static int __init omap_system_dma_init(void)
arch_initcall(omap_system_dma_init);
static void __exit omap_system_dma_exit(void)
MODULE_DESCRIPTION("OMAP SYSTEM DMA DRIVER");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRIVER_NAME);
MODULE_AUTHOR("Texas Instruments Inc");
static int __init omap_dma_cmdline_reserve_ch(char *str)
__setup("omap_dma_reserve_ch=", omap_dma_cmdline_reserve_ch);
