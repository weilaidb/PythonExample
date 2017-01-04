#define PCI_MITE_SIZE		4096
#define PCI_DAQ_SIZE		4096
#define PCI_DAQ_SIZE_660X       8192
struct mite_struct *mite_devices;
EXPORT_SYMBOL(mite_devices);
#define TOP_OF_PAGE(x) ((x)|(~(PAGE_MASK)))
void mite_init(void)
static void dump_chip_signature(u32 csigr_bits)
unsigned mite_fifo_size(struct mite_struct *mite, unsigned channel)
int mite_setup2(struct mite_struct *mite, unsigned use_iodwbsr_1)
EXPORT_SYMBOL(mite_setup2);
int mite_setup(struct mite_struct *mite)
EXPORT_SYMBOL(mite_setup);
void mite_cleanup(void)
void mite_unsetup(struct mite_struct *mite)
EXPORT_SYMBOL(mite_unsetup);
void mite_list_devices(void)
EXPORT_SYMBOL(mite_list_devices);
struct mite_channel *mite_request_channel_in_range(struct mite_struct *mite,
struct
mite_dma_descriptor_ring
*ring, unsigned min_channel,
unsigned max_channel)
EXPORT_SYMBOL(mite_request_channel_in_range);
void mite_release_channel(struct mite_channel *mite_chan)
EXPORT_SYMBOL(mite_release_channel);
void mite_dma_arm(struct mite_channel *mite_chan)
EXPORT_SYMBOL(mite_dma_arm);
int mite_buf_change(struct mite_dma_descriptor_ring *ring,
struct comedi_async *async)
EXPORT_SYMBOL(mite_buf_change);
void mite_prep_dma(struct mite_channel *mite_chan,
unsigned int num_device_bits, unsigned int num_memory_bits)
EXPORT_SYMBOL(mite_prep_dma);
u32 mite_device_bytes_transferred(struct mite_channel *mite_chan)
u32 mite_bytes_in_transit(struct mite_channel *mite_chan)
EXPORT_SYMBOL(mite_bytes_in_transit);
u32 mite_bytes_written_to_memory_lb(struct mite_channel *mite_chan)
EXPORT_SYMBOL(mite_bytes_written_to_memory_lb);
u32 mite_bytes_written_to_memory_ub(struct mite_channel *mite_chan)
EXPORT_SYMBOL(mite_bytes_written_to_memory_ub);
u32 mite_bytes_read_from_memory_lb(struct mite_channel *mite_chan)
EXPORT_SYMBOL(mite_bytes_read_from_memory_lb);
u32 mite_bytes_read_from_memory_ub(struct mite_channel *mite_chan)
EXPORT_SYMBOL(mite_bytes_read_from_memory_ub);
unsigned mite_dma_tcr(struct mite_channel *mite_chan)
EXPORT_SYMBOL(mite_dma_tcr);
void mite_dma_disarm(struct mite_channel *mite_chan)
EXPORT_SYMBOL(mite_dma_disarm);
int mite_sync_input_dma(struct mite_channel *mite_chan,
struct comedi_async *async)
EXPORT_SYMBOL(mite_sync_input_dma);
int mite_sync_output_dma(struct mite_channel *mite_chan,
struct comedi_async *async)
EXPORT_SYMBOL(mite_sync_output_dma);
unsigned mite_get_status(struct mite_channel *mite_chan)
EXPORT_SYMBOL(mite_get_status);
int mite_done(struct mite_channel *mite_chan)
EXPORT_SYMBOL(mite_done);
static void mite_decode(char **bit_str, unsigned int bits);
static const char *const mite_CHOR_strings[] = ;
static const char *const mite_CHCR_strings[] = ;
static const char *const mite_MCR_strings[] = ;
static const char *const mite_DCR_strings[] = ;
static const char *const mite_LKCR_strings[] = ;
static const char *const mite_CHSR_strings[] = ;
void mite_dump_regs(struct mite_channel *mite_chan)
EXPORT_SYMBOL(mite_dump_regs);
static void mite_decode(char **bit_str, unsigned int bits)
EXPORT_SYMBOL(mite_decode);
int __init init_module(void)
void __exit cleanup_module(void)
MODULE_AUTHOR("Comedi http:
MODULE_DESCRIPTION("Comedi low-level driver");
MODULE_LICENSE("GPL");
