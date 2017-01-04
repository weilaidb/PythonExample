#define XHI_GIER_OFFSET	0x1C
#define XHI_IPISR_OFFSET 0x20
#define XHI_IPIER_OFFSET 0x28
#define XHI_WF_OFFSET 0x100
#define XHI_RF_OFFSET 0x104
#define XHI_SZ_OFFSET 0x108
#define XHI_CR_OFFSET 0x10C
#define XHI_SR_OFFSET 0x110
#define XHI_WFV_OFFSET 0x114
#define XHI_RFO_OFFSET 0x118
#define XHI_GIER_GIE_MASK 0x80000000
#define XHI_IPIXR_RFULL_MASK 0x00000008
#define XHI_IPIXR_WEMPTY_MASK 0x00000004
#define XHI_IPIXR_RDP_MASK 0x00000002
#define XHI_IPIXR_WRP_MASK 0x00000001
#define XHI_IPIXR_ALL_MASK 0x0000000F
#define XHI_CR_SW_RESET_MASK 0x00000008
#define XHI_CR_FIFO_CLR_MASK 0x00000004
#define XHI_CR_READ_MASK 0x00000002
#define XHI_CR_WRITE_MASK 0x00000001
#define XHI_WFO_MAX_VACANCY 1024
#define XHI_RFO_MAX_OCCUPANCY 256
#define XHI_MAX_READ_TRANSACTION_WORDS 0xFFF
static inline void fifo_icap_fifo_write(struct hwicap_drvdata *drvdata,
u32 data)
static inline u32 fifo_icap_fifo_read(struct hwicap_drvdata *drvdata)
static inline void fifo_icap_set_read_size(struct hwicap_drvdata *drvdata,
u32 data)
static inline void fifo_icap_start_config(struct hwicap_drvdata *drvdata)
static inline void fifo_icap_start_readback(struct hwicap_drvdata *drvdata)
u32 fifo_icap_get_status(struct hwicap_drvdata *drvdata)
static inline u32 fifo_icap_busy(struct hwicap_drvdata *drvdata)
static inline u32 fifo_icap_write_fifo_vacancy(
struct hwicap_drvdata *drvdata)
static inline u32 fifo_icap_read_fifo_occupancy(
struct hwicap_drvdata *drvdata)
int fifo_icap_set_configuration(struct hwicap_drvdata *drvdata,
u32 *frame_buffer, u32 num_words)
int fifo_icap_get_configuration(struct hwicap_drvdata *drvdata,
u32 *frame_buffer, u32 num_words)
void fifo_icap_reset(struct hwicap_drvdata *drvdata)
void fifo_icap_flush_fifo(struct hwicap_drvdata *drvdata)
