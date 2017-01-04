static int one_adapter = 1;
module_param(one_adapter, int, 0444);
MODULE_PARM_DESC(one_adapter, "Use only one adapter.");
static int shutdown_workaround;
module_param(shutdown_workaround, int, 0644);
MODULE_PARM_DESC(shutdown_workaround, "Activate workaround for shutdown problem with some chipsets.");
static int debug;
module_param(debug, int, 0444);
MODULE_PARM_DESC(debug, "Print debugging information.");
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
#define dprintk	if (debug) printk
#define ngwriteb(dat, adr)         writeb((dat), (char *)(dev->iomem + (adr)))
#define ngwritel(dat, adr)         writel((dat), (char *)(dev->iomem + (adr)))
#define ngwriteb(dat, adr)         writeb((dat), (char *)(dev->iomem + (adr)))
#define ngreadl(adr)               readl(dev->iomem + (adr))
#define ngreadb(adr)               readb(dev->iomem + (adr))
#define ngcpyto(adr, src, count)   memcpy_toio((char *) \
(dev->iomem + (adr)), (src), (count))
#define ngcpyfrom(dst, adr, count) memcpy_fromio((dst), (char *) \
(dev->iomem + (adr)), (count))
static void event_tasklet(unsigned long data)
static void demux_tasklet(unsigned long data)
static irqreturn_t irq_handler(int irq, void *dev_id)
static void dump_command_io(struct ngene *dev)
static int ngene_command_mutex(struct ngene *dev, struct ngene_command *com)
int ngene_command(struct ngene *dev, struct ngene_command *com)
static int ngene_command_load_firmware(struct ngene *dev,
u8 *ngene_fw, u32 size)
static int ngene_command_config_buf(struct ngene *dev, u8 config)
static int ngene_command_config_free_buf(struct ngene *dev, u8 *config)
int ngene_command_gpio_set(struct ngene *dev, u8 select, u8 level)
static u8 TSFeatureDecoderSetup[8 * 5] = ;
static u8 I2SConfiguration[] = ;
static u8 SPDIFConfiguration[10] = ;
static u8 TS_I2SConfiguration[4] = ;
static u8 TS_I2SOutConfiguration[4] = ;
static u8 ITUDecoderSetup[4][16] = ;
static u8 ITUFeatureDecoderSetup[8] = ;
void FillTSBuffer(void *Buffer, int Length, u32 Flags)
static void flush_buffers(struct ngene_channel *chan)
static void clear_buffers(struct ngene_channel *chan)
static int ngene_command_stream_control(struct ngene *dev, u8 stream,
u8 control, u8 mode, u8 flags)
void set_transfer(struct ngene_channel *chan, int state)
static void free_ringbuffer(struct ngene *dev, struct SRingBufferDescriptor *rb)
static void free_idlebuffer(struct ngene *dev,
struct SRingBufferDescriptor *rb,
struct SRingBufferDescriptor *tb)
static void free_common_buffers(struct ngene *dev)
static int create_ring_buffer(struct pci_dev *pci_dev,
struct SRingBufferDescriptor *descr, u32 NumBuffers)
static int AllocateRingBuffers(struct pci_dev *pci_dev,
dma_addr_t of,
struct SRingBufferDescriptor *pRingBuffer,
u32 Buffer1Length, u32 Buffer2Length)
static int FillTSIdleBuffer(struct SRingBufferDescriptor *pIdleBuffer,
struct SRingBufferDescriptor *pRingBuffer)
static u32 RingBufferSizes[MAX_STREAM] = ;
static u32 Buffer1Sizes[MAX_STREAM] = ;
static u32 Buffer2Sizes[MAX_STREAM] = ;
static int AllocCommonBuffers(struct ngene *dev)
static void ngene_release_buffers(struct ngene *dev)
static int ngene_get_buffers(struct ngene *dev)
static void ngene_init(struct ngene *dev)
static int ngene_load_firm(struct ngene *dev)
static void ngene_stop(struct ngene *dev)
static int ngene_buffer_config(struct ngene *dev)
static int ngene_start(struct ngene *dev)
static void release_channel(struct ngene_channel *chan)
static int init_channel(struct ngene_channel *chan)
static int init_channels(struct ngene *dev)
static void cxd_attach(struct ngene *dev)
static void cxd_detach(struct ngene *dev)
static void ngene_unlink(struct ngene *dev)
void ngene_shutdown(struct pci_dev *pdev)
void __devexit ngene_remove(struct pci_dev *pdev)
int __devinit ngene_probe(struct pci_dev *pci_dev,
const struct pci_device_id *id)
