#define _MITE_H_
#define PCIMIO_COMPAT
#define MDPRINTK(format, args...)	printk(format , ## args)
#define MDPRINTK(format, args...)
#define MAX_MITE_DMA_CHANNELS 8
struct mite_dma_descriptor ;
struct mite_dma_descriptor_ring ;
struct mite_channel ;
struct mite_struct ;
static inline struct mite_dma_descriptor_ring *mite_alloc_ring(struct
mite_struct
*mite)
;
static inline void mite_free_ring(struct mite_dma_descriptor_ring *ring)
;
extern struct mite_struct *mite_devices;
static inline unsigned int mite_irq(struct mite_struct *mite)
;
static inline unsigned int mite_device_id(struct mite_struct *mite)
;
void mite_init(void);
void mite_cleanup(void);
int mite_setup(struct mite_struct *mite);
int mite_setup2(struct mite_struct *mite, unsigned use_iodwbsr_1);
void mite_unsetup(struct mite_struct *mite);
void mite_list_devices(void);
struct mite_channel *mite_request_channel_in_range(struct mite_struct *mite,
struct
mite_dma_descriptor_ring
*ring, unsigned min_channel,
unsigned max_channel);
static inline struct mite_channel *mite_request_channel(struct mite_struct
*mite,
struct
mite_dma_descriptor_ring
*ring)
void mite_release_channel(struct mite_channel *mite_chan);
unsigned mite_dma_tcr(struct mite_channel *mite_chan);
void mite_dma_arm(struct mite_channel *mite_chan);
void mite_dma_disarm(struct mite_channel *mite_chan);
int mite_sync_input_dma(struct mite_channel *mite_chan,
struct comedi_async *async);
int mite_sync_output_dma(struct mite_channel *mite_chan,
struct comedi_async *async);
u32 mite_bytes_written_to_memory_lb(struct mite_channel *mite_chan);
u32 mite_bytes_written_to_memory_ub(struct mite_channel *mite_chan);
u32 mite_bytes_read_from_memory_lb(struct mite_channel *mite_chan);
u32 mite_bytes_read_from_memory_ub(struct mite_channel *mite_chan);
u32 mite_bytes_in_transit(struct mite_channel *mite_chan);
unsigned mite_get_status(struct mite_channel *mite_chan);
int mite_done(struct mite_channel *mite_chan);
void mite_prep_dma(struct mite_channel *mite_chan,
unsigned int num_device_bits, unsigned int num_memory_bits);
int mite_buf_change(struct mite_dma_descriptor_ring *ring,
struct comedi_async *async);
void mite_print_chsr(unsigned int chsr);
void mite_dump_regs(struct mite_channel *mite_chan);
static inline int CHAN_OFFSET(int channel)
;
enum mite_registers ;
static inline int MITE_CHOR(int channel)
;
static inline int MITE_CHCR(int channel)
;
static inline int MITE_TCR(int channel)
;
static inline int MITE_MCR(int channel)
;
static inline int MITE_MAR(int channel)
;
static inline int MITE_DCR(int channel)
;
static inline int MITE_DAR(int channel)
;
static inline int MITE_LKCR(int channel)
;
static inline int MITE_LKAR(int channel)
;
static inline int MITE_LLKAR(int channel)
;
static inline int MITE_BAR(int channel)
;
static inline int MITE_BCR(int channel)
;
static inline int MITE_SAR(int channel)
;
static inline int MITE_WSCR(int channel)
;
static inline int MITE_WSER(int channel)
;
static inline int MITE_CHSR(int channel)
;
static inline int MITE_FCR(int channel)
;
enum MITE_IODWBSR_bits ;
static inline unsigned MITE_IODWBSR_1_WSIZE_bits(unsigned size)
enum MITE_UNKNOWN_DMA_BURST_bits ;
static inline int mite_csigr_version(u32 csigr_bits)
;
static inline int mite_csigr_type(u32 csigr_bits)
;
static inline int mite_csigr_mmode(u32 csigr_bits)
;
static inline int mite_csigr_imode(u32 csigr_bits)
;
static inline int mite_csigr_dmac(u32 csigr_bits)
;
static inline int mite_csigr_wpdep(u32 csigr_bits)
;
static inline int mite_csigr_wins(u32 csigr_bits)
;
static inline int mite_csigr_iowins(u32 csigr_bits)
;
enum MITE_MCR_bits ;
enum MITE_DCR_bits ;
enum MITE_CHOR_bits ;
enum MITE_CHCR_bits ;
enum ConfigRegister_bits ;
static inline int CR_REQS(int source)
;
static inline int CR_REQSDRQ(unsigned drq_line)
static inline int CR_RL(unsigned int retry_limit)
enum CHSR_bits ;
static inline void mite_dma_reset(struct mite_channel *mite_chan)
;
