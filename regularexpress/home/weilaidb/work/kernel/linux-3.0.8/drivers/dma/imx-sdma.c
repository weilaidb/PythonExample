#define SDMA_H_C0PTR		0x000
#define SDMA_H_INTR		0x004
#define SDMA_H_STATSTOP		0x008
#define SDMA_H_START		0x00c
#define SDMA_H_EVTOVR		0x010
#define SDMA_H_DSPOVR		0x014
#define SDMA_H_HOSTOVR		0x018
#define SDMA_H_EVTPEND		0x01c
#define SDMA_H_DSPENBL		0x020
#define SDMA_H_RESET		0x024
#define SDMA_H_EVTERR		0x028
#define SDMA_H_INTRMSK		0x02c
#define SDMA_H_PSW		0x030
#define SDMA_H_EVTERRDBG	0x034
#define SDMA_H_CONFIG		0x038
#define SDMA_ONCE_ENB		0x040
#define SDMA_ONCE_DATA		0x044
#define SDMA_ONCE_INSTR		0x048
#define SDMA_ONCE_STAT		0x04c
#define SDMA_ONCE_CMD		0x050
#define SDMA_EVT_MIRROR		0x054
#define SDMA_ILLINSTADDR	0x058
#define SDMA_CHN0ADDR		0x05c
#define SDMA_ONCE_RTB		0x060
#define SDMA_XTRIG_CONF1	0x070
#define SDMA_XTRIG_CONF2	0x074
#define SDMA_CHNENBL0_V2	0x200
#define SDMA_CHNENBL0_V1	0x080
#define SDMA_CHNPRI_0		0x100
#define BD_DONE  0x01
#define BD_WRAP  0x02
#define BD_CONT  0x04
#define BD_INTR  0x08
#define BD_RROR  0x10
#define BD_LAST  0x20
#define BD_EXTD  0x80
#define DND_END_OF_FRAME  0x80
#define DND_END_OF_XFER   0x40
#define DND_DONE          0x20
#define DND_UNUSED        0x01
#define BD_IPCV2_END_OF_FRAME  0x40
#define IPCV2_MAX_NODES        50
#define DATA_ERROR  0x10000000
#define C0_ADDR             0x01
#define C0_LOAD             0x02
#define C0_DUMP             0x03
#define C0_SETCTX           0x07
#define C0_GETCTX           0x03
#define C0_SETDM            0x01
#define C0_SETPM            0x04
#define C0_GETDM            0x02
#define C0_GETPM            0x08
#define CHANGE_ENDIANNESS   0x80
struct sdma_mode_count ;
struct sdma_buffer_descriptor  __attribute__ ((packed));
struct sdma_channel_control  __attribute__ ((packed));
struct sdma_state_registers  __attribute__ ((packed));
struct sdma_context_data  __attribute__ ((packed));
#define NUM_BD (int)(PAGE_SIZE / sizeof(struct sdma_buffer_descriptor))
struct sdma_engine;
struct sdma_channel ;
#define IMX_DMA_SG_LOOP		(1 << 0)
#define MAX_DMA_CHANNELS 32
#define MXC_SDMA_DEFAULT_PRIORITY 1
#define MXC_SDMA_MIN_PRIORITY 1
#define MXC_SDMA_MAX_PRIORITY 7
#define SDMA_FIRMWARE_MAGIC 0x414d4453
struct sdma_firmware_header ;
struct sdma_engine ;
#define SDMA_H_CONFIG_DSPDMA	(1 << 12)
#define SDMA_H_CONFIG_RTD_PINS	(1 << 11)
#define SDMA_H_CONFIG_ACR	(1 << 4)
#define SDMA_H_CONFIG_CSM	(3)
static inline u32 chnenbl_ofs(struct sdma_engine *sdma, unsigned int event)
static int sdma_config_ownership(struct sdma_channel *sdmac,
bool event_override, bool mcu_override, bool dsp_override)
static int sdma_run_channel(struct sdma_channel *sdmac)
static int sdma_load_script(struct sdma_engine *sdma, void *buf, int size,
u32 address)
static void sdma_event_enable(struct sdma_channel *sdmac, unsigned int event)
static void sdma_event_disable(struct sdma_channel *sdmac, unsigned int event)
static void sdma_handle_channel_loop(struct sdma_channel *sdmac)
static void mxc_sdma_handle_channel_normal(struct sdma_channel *sdmac)
static void mxc_sdma_handle_channel(struct sdma_channel *sdmac)
static irqreturn_t sdma_int_handler(int irq, void *dev_id)
static void sdma_get_pc(struct sdma_channel *sdmac,
enum sdma_peripheral_type peripheral_type)
static int sdma_load_context(struct sdma_channel *sdmac)
static void sdma_disable_channel(struct sdma_channel *sdmac)
static int sdma_config_channel(struct sdma_channel *sdmac)
static int sdma_set_channel_priority(struct sdma_channel *sdmac,
unsigned int priority)
static int sdma_request_channel(struct sdma_channel *sdmac)
static void sdma_enable_channel(struct sdma_engine *sdma, int channel)
static dma_cookie_t sdma_assign_cookie(struct sdma_channel *sdmac)
static struct sdma_channel *to_sdma_chan(struct dma_chan *chan)
static dma_cookie_t sdma_tx_submit(struct dma_async_tx_descriptor *tx)
static int sdma_alloc_chan_resources(struct dma_chan *chan)
static void sdma_free_chan_resources(struct dma_chan *chan)
static struct dma_async_tx_descriptor *sdma_prep_slave_sg(
struct dma_chan *chan, struct scatterlist *sgl,
unsigned int sg_len, enum dma_data_direction direction,
unsigned long flags)
static struct dma_async_tx_descriptor *sdma_prep_dma_cyclic(
struct dma_chan *chan, dma_addr_t dma_addr, size_t buf_len,
size_t period_len, enum dma_data_direction direction)
static int sdma_control(struct dma_chan *chan, enum dma_ctrl_cmd cmd,
unsigned long arg)
static enum dma_status sdma_tx_status(struct dma_chan *chan,
dma_cookie_t cookie,
struct dma_tx_state *txstate)
static void sdma_issue_pending(struct dma_chan *chan)
#define SDMA_SCRIPT_ADDRS_ARRAY_SIZE_V1	34
static void sdma_add_scripts(struct sdma_engine *sdma,
const struct sdma_script_start_addrs *addr)
static int __init sdma_get_firmware(struct sdma_engine *sdma,
const char *cpu_name, int to_version)
static int __init sdma_init(struct sdma_engine *sdma)
static int __init sdma_probe(struct platform_device *pdev)
static int __exit sdma_remove(struct platform_device *pdev)
static struct platform_driver sdma_driver = ;
static int __init sdma_module_init(void)
module_init(sdma_module_init);
MODULE_AUTHOR("Sascha Hauer, Pengutronix <s.hauer@pengutronix.de>");
MODULE_DESCRIPTION("i.MX SDMA driver");
MODULE_LICENSE("GPL");
