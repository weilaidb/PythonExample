#define FS_VF_IN_VALID	0x00000002
#define FS_ENC_IN_VALID	0x00000001
static int ipu_disable_channel(struct idmac *idmac, struct idmac_channel *ichan,
bool wait_for_stop);
static struct ipu ipu_data;
#define to_ipu(id) container_of(id, struct ipu, idmac)
static u32 __idmac_read_icreg(struct ipu *ipu, unsigned long reg)
#define idmac_read_icreg(ipu, reg) __idmac_read_icreg(ipu, reg - IC_CONF)
static void __idmac_write_icreg(struct ipu *ipu, u32 value, unsigned long reg)
#define idmac_write_icreg(ipu, v, reg) __idmac_write_icreg(ipu, v, reg - IC_CONF)
static u32 idmac_read_ipureg(struct ipu *ipu, unsigned long reg)
static void idmac_write_ipureg(struct ipu *ipu, u32 value, unsigned long reg)
static void dump_idmac_reg(struct ipu *ipu)
static uint32_t bytes_per_pixel(enum pixel_fmt fmt)
static void ipu_ic_enable_task(struct ipu *ipu, enum ipu_channel channel)
static void ipu_ic_disable_task(struct ipu *ipu, enum ipu_channel channel)
static uint32_t ipu_channel_status(struct ipu *ipu, enum ipu_channel channel)
struct chan_param_mem_planar  __attribute__ ((packed));
struct chan_param_mem_interleaved  __attribute__ ((packed));
union chan_param_mem ;
static void ipu_ch_param_set_plane_offset(union chan_param_mem *params,
u32 u_offset, u32 v_offset)
static void ipu_ch_param_set_size(union chan_param_mem *params,
uint32_t pixel_fmt, uint16_t width,
uint16_t height, uint16_t stride)
static void ipu_ch_param_set_burst_size(union chan_param_mem *params,
uint16_t burst_pixels)
static void ipu_ch_param_set_buffer(union chan_param_mem *params,
dma_addr_t buf0, dma_addr_t buf1)
static void ipu_ch_param_set_rotation(union chan_param_mem *params,
enum ipu_rotate_mode rotate)
static void ipu_write_param_mem(uint32_t addr, uint32_t *data,
uint32_t num_words)
static int calc_resize_coeffs(uint32_t in_size, uint32_t out_size,
uint32_t *resize_coeff,
uint32_t *downsize_coeff)
static enum ipu_color_space format_to_colorspace(enum pixel_fmt fmt)
static int ipu_ic_init_prpenc(struct ipu *ipu,
union ipu_channel_param *params, bool src_is_csi)
static uint32_t dma_param_addr(uint32_t dma_ch)
static void ipu_channel_set_priority(struct ipu *ipu, enum ipu_channel channel,
bool prio)
static uint32_t ipu_channel_conf_mask(enum ipu_channel channel)
static int ipu_enable_channel(struct idmac *idmac, struct idmac_channel *ichan)
static int ipu_init_channel_buffer(struct idmac_channel *ichan,
enum pixel_fmt pixel_fmt,
uint16_t width, uint16_t height,
uint32_t stride,
enum ipu_rotate_mode rot_mode,
dma_addr_t phyaddr_0, dma_addr_t phyaddr_1)
static void ipu_select_buffer(enum ipu_channel channel, int buffer_n)
static void ipu_update_channel_buffer(struct idmac_channel *ichan,
int buffer_n, dma_addr_t phyaddr)
static int ipu_submit_buffer(struct idmac_channel *ichan,
struct idmac_tx_desc *desc, struct scatterlist *sg, int buf_idx)
static int ipu_submit_channel_buffers(struct idmac_channel *ichan,
struct idmac_tx_desc *desc)
static dma_cookie_t idmac_tx_submit(struct dma_async_tx_descriptor *tx)
static int idmac_desc_alloc(struct idmac_channel *ichan, int n)
static int ipu_init_channel(struct idmac *idmac, struct idmac_channel *ichan)
static void ipu_uninit_channel(struct idmac *idmac, struct idmac_channel *ichan)
static int ipu_disable_channel(struct idmac *idmac, struct idmac_channel *ichan,
bool wait_for_stop)
static struct scatterlist *idmac_sg_next(struct idmac_channel *ichan,
struct idmac_tx_desc **desc, struct scatterlist *sg)
static irqreturn_t idmac_interrupt(int irq, void *dev_id)
static void ipu_gc_tasklet(unsigned long arg)
static struct dma_async_tx_descriptor *idmac_prep_slave_sg(struct dma_chan *chan,
struct scatterlist *sgl, unsigned int sg_len,
enum dma_data_direction direction, unsigned long tx_flags)
static void idmac_issue_pending(struct dma_chan *chan)
static int __idmac_control(struct dma_chan *chan, enum dma_ctrl_cmd cmd,
unsigned long arg)
static int idmac_control(struct dma_chan *chan, enum dma_ctrl_cmd cmd,
unsigned long arg)
static irqreturn_t ic_sof_irq(int irq, void *dev_id)
static irqreturn_t ic_eof_irq(int irq, void *dev_id)
static int ic_sof = -EINVAL, ic_eof = -EINVAL;
static int idmac_alloc_chan_resources(struct dma_chan *chan)
static void idmac_free_chan_resources(struct dma_chan *chan)
static enum dma_status idmac_tx_status(struct dma_chan *chan,
dma_cookie_t cookie, struct dma_tx_state *txstate)
static int __init ipu_idmac_init(struct ipu *ipu)
static void __exit ipu_idmac_exit(struct ipu *ipu)
static int __init ipu_probe(struct platform_device *pdev)
static int __exit ipu_remove(struct platform_device *pdev)
static struct platform_driver ipu_platform_driver = ;
static int __init ipu_init(void)
subsys_initcall(ipu_init);
MODULE_DESCRIPTION("IPU core driver");
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Guennadi Liakhovetski <lg@denx.de>");
MODULE_ALIAS("platform:ipu-core");
