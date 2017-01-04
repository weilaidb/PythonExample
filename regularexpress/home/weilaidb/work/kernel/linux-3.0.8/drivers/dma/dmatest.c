static unsigned int test_buf_size = 16384;
module_param(test_buf_size, uint, S_IRUGO);
MODULE_PARM_DESC(test_buf_size, "Size of the memcpy test buffer");
static char test_channel[20];
module_param_string(channel, test_channel, sizeof(test_channel), S_IRUGO);
MODULE_PARM_DESC(channel, "Bus ID of the channel to test (default: any)");
static char test_device[20];
module_param_string(device, test_device, sizeof(test_device), S_IRUGO);
MODULE_PARM_DESC(device, "Bus ID of the DMA Engine to test (default: any)");
static unsigned int threads_per_chan = 1;
module_param(threads_per_chan, uint, S_IRUGO);
MODULE_PARM_DESC(threads_per_chan,
"Number of threads to start per channel (default: 1)");
static unsigned int max_channels;
module_param(max_channels, uint, S_IRUGO);
MODULE_PARM_DESC(max_channels,
"Maximum number of channels to use (default: all)");
static unsigned int iterations;
module_param(iterations, uint, S_IRUGO);
MODULE_PARM_DESC(iterations,
"Iterations before stopping test (default: infinite)");
static unsigned int xor_sources = 3;
module_param(xor_sources, uint, S_IRUGO);
MODULE_PARM_DESC(xor_sources,
"Number of xor source buffers (default: 3)");
static unsigned int pq_sources = 3;
module_param(pq_sources, uint, S_IRUGO);
MODULE_PARM_DESC(pq_sources,
"Number of p+q source buffers (default: 3)");
static int timeout = 3000;
module_param(timeout, uint, S_IRUGO);
MODULE_PARM_DESC(timeout, "Transfer Timeout in msec (default: 3000), "
"Pass -1 for infinite timeout");
#define PATTERN_SRC		0x80
#define PATTERN_DST		0x00
#define PATTERN_COPY		0x40
#define PATTERN_OVERWRITE	0x20
#define PATTERN_COUNT_MASK	0x1f
struct dmatest_thread ;
struct dmatest_chan ;
static LIST_HEAD(dmatest_channels);
static unsigned int nr_channels;
static bool dmatest_match_channel(struct dma_chan *chan)
static bool dmatest_match_device(struct dma_device *device)
static unsigned long dmatest_random(void)
static void dmatest_init_srcs(u8 **bufs, unsigned int start, unsigned int len)
static void dmatest_init_dsts(u8 **bufs, unsigned int start, unsigned int len)
static void dmatest_mismatch(u8 actual, u8 pattern, unsigned int index,
unsigned int counter, bool is_srcbuf)
static unsigned int dmatest_verify(u8 **bufs, unsigned int start,
unsigned int end, unsigned int counter, u8 pattern,
bool is_srcbuf)
static void dmatest_callback(void *completion)
static int dmatest_func(void *data)
static void dmatest_cleanup_channel(struct dmatest_chan *dtc)
static int dmatest_add_threads(struct dmatest_chan *dtc, enum dma_transaction_type type)
static int dmatest_add_channel(struct dma_chan *chan)
static bool filter(struct dma_chan *chan, void *param)
static int __init dmatest_init(void)
late_initcall(dmatest_init);
static void __exit dmatest_exit(void)
module_exit(dmatest_exit);
MODULE_AUTHOR("Haavard Skinnemoen (Atmel)");
MODULE_LICENSE("GPL v2");
