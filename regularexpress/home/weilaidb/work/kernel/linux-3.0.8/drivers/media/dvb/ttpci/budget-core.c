#define TS_WIDTH		(2 * TS_SIZE)
#define TS_WIDTH_ACTIVY		TS_SIZE
#define TS_WIDTH_DVBC		TS_SIZE
#define TS_HEIGHT_MASK		0xf00
#define TS_HEIGHT_MASK_ACTIVY	0xc00
#define TS_HEIGHT_MASK_DVBC	0xe00
#define TS_MIN_BUFSIZE_K	188
#define TS_MAX_BUFSIZE_K	1410
#define TS_MAX_BUFSIZE_K_ACTIVY	564
#define TS_MAX_BUFSIZE_K_DVBC	1316
#define BUFFER_WARNING_WAIT	(30*HZ)
int budget_debug;
static int dma_buffer_size = TS_MIN_BUFSIZE_K;
module_param_named(debug, budget_debug, int, 0644);
module_param_named(bufsize, dma_buffer_size, int, 0444);
MODULE_PARM_DESC(debug, "Turn on/off budget debugging (default:off).");
MODULE_PARM_DESC(bufsize, "DMA buffer size in KB, default: 188, min: 188, max: 1410 (Activy: 564)");
static int stop_ts_capture(struct budget *budget)
static int start_ts_capture(struct budget *budget)
static int budget_read_fe_status(struct dvb_frontend *fe, fe_status_t *status)
static void vpeirq(unsigned long data)
int ttpci_budget_debiread(struct budget *budget, u32 config, int addr, int count,
int uselocks, int nobusyloop)
int ttpci_budget_debiwrite(struct budget *budget, u32 config, int addr,
int count, u32 value, int uselocks, int nobusyloop)
static int budget_start_feed(struct dvb_demux_feed *feed)
static int budget_stop_feed(struct dvb_demux_feed *feed)
static int budget_register(struct budget *budget)
static void budget_unregister(struct budget *budget)
int ttpci_budget_init(struct budget *budget, struct saa7146_dev *dev,
struct saa7146_pci_extension_data *info,
struct module *owner, short *adapter_nums)
void ttpci_budget_init_hooks(struct budget *budget)
int ttpci_budget_deinit(struct budget *budget)
void ttpci_budget_irq10_handler(struct saa7146_dev *dev, u32 * isr)
void ttpci_budget_set_video_port(struct saa7146_dev *dev, int video_port)
EXPORT_SYMBOL_GPL(ttpci_budget_debiread);
EXPORT_SYMBOL_GPL(ttpci_budget_debiwrite);
EXPORT_SYMBOL_GPL(ttpci_budget_init);
EXPORT_SYMBOL_GPL(ttpci_budget_init_hooks);
EXPORT_SYMBOL_GPL(ttpci_budget_deinit);
EXPORT_SYMBOL_GPL(ttpci_budget_irq10_handler);
EXPORT_SYMBOL_GPL(ttpci_budget_set_video_port);
EXPORT_SYMBOL_GPL(budget_debug);
MODULE_LICENSE("GPL");
