#define DESCRIPTOR_OUTPUT_MORE		0
#define DESCRIPTOR_OUTPUT_LAST		(1 << 12)
#define DESCRIPTOR_INPUT_MORE		(2 << 12)
#define DESCRIPTOR_INPUT_LAST		(3 << 12)
#define DESCRIPTOR_STATUS		(1 << 11)
#define DESCRIPTOR_KEY_IMMEDIATE	(2 << 8)
#define DESCRIPTOR_PING			(1 << 7)
#define DESCRIPTOR_YY			(1 << 6)
#define DESCRIPTOR_NO_IRQ		(0 << 4)
#define DESCRIPTOR_IRQ_ERROR		(1 << 4)
#define DESCRIPTOR_IRQ_ALWAYS		(3 << 4)
#define DESCRIPTOR_BRANCH_ALWAYS	(3 << 2)
#define DESCRIPTOR_WAIT			(3 << 0)
struct descriptor  __attribute__((aligned(16)));
#define CONTROL_SET(regs)	(regs)
#define CONTROL_CLEAR(regs)	((regs) + 4)
#define COMMAND_PTR(regs)	((regs) + 12)
#define CONTEXT_MATCH(regs)	((regs) + 16)
#define AR_BUFFER_SIZE	(32*1024)
#define AR_BUFFERS_MIN	DIV_ROUND_UP(AR_BUFFER_SIZE, PAGE_SIZE)
#define AR_BUFFERS	(AR_BUFFERS_MIN >= 2 ? AR_BUFFERS_MIN : 2)
#define MAX_ASYNC_PAYLOAD	4096
#define MAX_AR_PACKET_SIZE	(16 + MAX_ASYNC_PAYLOAD + 4)
#define AR_WRAPAROUND_PAGES	DIV_ROUND_UP(MAX_AR_PACKET_SIZE, PAGE_SIZE)
struct ar_context ;
struct context;
typedef int (*descriptor_callback_t)(struct context *ctx,
struct descriptor *d,
struct descriptor *last);
struct descriptor_buffer ;
struct context ;
#define IT_HEADER_SY(v)          ((v) <<  0)
#define IT_HEADER_TCODE(v)       ((v) <<  4)
#define IT_HEADER_CHANNEL(v)     ((v) <<  8)
#define IT_HEADER_TAG(v)         ((v) << 14)
#define IT_HEADER_SPEED(v)       ((v) << 16)
#define IT_HEADER_DATA_LENGTH(v) ((v) << 16)
struct iso_context ;
#define CONFIG_ROM_SIZE 1024
struct fw_ohci ;
static inline struct fw_ohci *fw_ohci(struct fw_card *card)
#define IT_CONTEXT_CYCLE_MATCH_ENABLE	0x80000000
#define IR_CONTEXT_BUFFER_FILL		0x80000000
#define IR_CONTEXT_ISOCH_HEADER		0x40000000
#define IR_CONTEXT_CYCLE_MATCH_ENABLE	0x20000000
#define IR_CONTEXT_MULTI_CHANNEL_MODE	0x10000000
#define IR_CONTEXT_DUAL_BUFFER_MODE	0x08000000
#define CONTEXT_RUN	0x8000
#define CONTEXT_WAKE	0x1000
#define CONTEXT_DEAD	0x0800
#define CONTEXT_ACTIVE	0x0400
#define OHCI1394_MAX_AT_REQ_RETRIES	0xf
#define OHCI1394_MAX_AT_RESP_RETRIES	0x2
#define OHCI1394_MAX_PHYS_RESP_RETRIES	0x8
#define OHCI1394_REGISTER_SIZE		0x800
#define OHCI_LOOP_COUNT			500
#define OHCI1394_PCI_HCI_Control	0x40
#define SELF_ID_BUF_SIZE		0x800
#define OHCI_TCODE_PHY_PACKET		0x0e
#define OHCI_VERSION_1_1		0x010010
static char ohci_driver_name[] = KBUILD_MODNAME;
#define PCI_DEVICE_ID_AGERE_FW643	0x5901
#define PCI_DEVICE_ID_JMICRON_JMB38X_FW	0x2380
#define PCI_DEVICE_ID_TI_TSB12LV22	0x8009
#define PCI_VENDOR_ID_PINNACLE_SYSTEMS	0x11bd
#define QUIRK_CYCLE_TIMER		1
#define QUIRK_RESET_PACKET		2
#define QUIRK_BE_HEADERS		4
#define QUIRK_NO_1394A			8
#define QUIRK_NO_MSI			16
static const struct  ohci_quirks[] = ;
static int param_quirks;
module_param_named(quirks, param_quirks, int, 0644);
MODULE_PARM_DESC(quirks, "Chip quirks (default = 0"
", nonatomic cycle timer = "	__stringify(QUIRK_CYCLE_TIMER)
", reset packet generation = "	__stringify(QUIRK_RESET_PACKET)
", AR/selfID endianess = "	__stringify(QUIRK_BE_HEADERS)
", no 1394a enhancements = "	__stringify(QUIRK_NO_1394A)
", disable MSI = "		__stringify(QUIRK_NO_MSI)
")");
#define OHCI_PARAM_DEBUG_AT_AR		1
#define OHCI_PARAM_DEBUG_SELFIDS	2
#define OHCI_PARAM_DEBUG_IRQS		4
#define OHCI_PARAM_DEBUG_BUSRESETS	8
static int param_debug;
module_param_named(debug, param_debug, int, 0644);
MODULE_PARM_DESC(debug, "Verbose logging (default = 0"
", AT/AR events = "	__stringify(OHCI_PARAM_DEBUG_AT_AR)
", self-IDs = "		__stringify(OHCI_PARAM_DEBUG_SELFIDS)
", IRQs = "		__stringify(OHCI_PARAM_DEBUG_IRQS)
", busReset events = "	__stringify(OHCI_PARAM_DEBUG_BUSRESETS)
", or a combination, or all = -1)");
static void log_irqs(u32 evt)
static const char *speed[] = ;
static const char *power[] = ;
static const char port[] = ;
static char _p(u32 *s, int shift)
static void log_selfids(int node_id, int generation, int self_id_count, u32 *s)
static const char *evts[] = ;
static const char *tcodes[] = ;
static void log_ar_at_event(char dir, int speed, u32 *header, int evt)
#define param_debug 0
static inline void log_irqs(u32 evt)
static inline void log_selfids(int node_id, int generation, int self_id_count, u32 *s)
static inline void log_ar_at_event(char dir, int speed, u32 *header, int evt)
static inline void reg_write(const struct fw_ohci *ohci, int offset, u32 data)
static inline u32 reg_read(const struct fw_ohci *ohci, int offset)
static inline void flush_writes(const struct fw_ohci *ohci)
static int read_phy_reg(struct fw_ohci *ohci, int addr)
static int write_phy_reg(const struct fw_ohci *ohci, int addr, u32 val)
static int update_phy_reg(struct fw_ohci *ohci, int addr,
int clear_bits, int set_bits)
static int read_paged_phy_reg(struct fw_ohci *ohci, int page, int addr)
static int ohci_read_phy_reg(struct fw_card *card, int addr)
static int ohci_update_phy_reg(struct fw_card *card, int addr,
int clear_bits, int set_bits)
static inline dma_addr_t ar_buffer_bus(struct ar_context *ctx, unsigned int i)
static void ar_context_link_page(struct ar_context *ctx, unsigned int index)
static void ar_context_release(struct ar_context *ctx)
static void ar_context_abort(struct ar_context *ctx, const char *error_msg)
static inline unsigned int ar_next_buffer_index(unsigned int index)
static inline unsigned int ar_prev_buffer_index(unsigned int index)
static inline unsigned int ar_first_buffer_index(struct ar_context *ctx)
static unsigned int ar_search_last_active_buffer(struct ar_context *ctx,
unsigned int *buffer_offset)
static void ar_sync_buffers_for_cpu(struct ar_context *ctx,
unsigned int end_buffer_index,
unsigned int end_buffer_offset)
#if defined(CONFIG_PPC_PMAC) && defined(CONFIG_PPC32)
#define cond_le32_to_cpu(v) \
(ohci->quirks & QUIRK_BE_HEADERS ? (__force __u32)(v) : le32_to_cpu(v))
#define cond_le32_to_cpu(v) le32_to_cpu(v)
static __le32 *handle_ar_packet(struct ar_context *ctx, __le32 *buffer)
static void *handle_ar_packets(struct ar_context *ctx, void *p, void *end)
static void ar_recycle_buffers(struct ar_context *ctx, unsigned int end_buffer)
static void ar_context_tasklet(unsigned long data)
static int ar_context_init(struct ar_context *ctx, struct fw_ohci *ohci,
unsigned int descriptors_offset, u32 regs)
static void ar_context_run(struct ar_context *ctx)
static struct descriptor *find_branch_descriptor(struct descriptor *d, int z)
static void context_tasklet(unsigned long data)
static int context_add_buffer(struct context *ctx)
static int context_init(struct context *ctx, struct fw_ohci *ohci,
u32 regs, descriptor_callback_t callback)
static void context_release(struct context *ctx)
static struct descriptor *context_get_descriptors(struct context *ctx,
int z, dma_addr_t *d_bus)
static void context_run(struct context *ctx, u32 extra)
static void context_append(struct context *ctx,
struct descriptor *d, int z, int extra)
static void context_stop(struct context *ctx)
struct driver_data ;
static int at_context_queue_packet(struct context *ctx,
struct fw_packet *packet)
static void at_context_flush(struct context *ctx)
static int handle_at_packet(struct context *context,
struct descriptor *d,
struct descriptor *last)
#define HEADER_GET_DESTINATION(q)	(((q) >> 16) & 0xffff)
#define HEADER_GET_TCODE(q)		(((q) >> 4) & 0x0f)
#define HEADER_GET_OFFSET_HIGH(q)	(((q) >> 0) & 0xffff)
#define HEADER_GET_DATA_LENGTH(q)	(((q) >> 16) & 0xffff)
#define HEADER_GET_EXTENDED_TCODE(q)	(((q) >> 0) & 0xffff)
static void handle_local_rom(struct fw_ohci *ohci,
struct fw_packet *packet, u32 csr)
static void handle_local_lock(struct fw_ohci *ohci,
struct fw_packet *packet, u32 csr)
static void handle_local_request(struct context *ctx, struct fw_packet *packet)
static void at_context_transmit(struct context *ctx, struct fw_packet *packet)
static void detect_dead_context(struct fw_ohci *ohci,
const char *name, unsigned int regs)
static void handle_dead_contexts(struct fw_ohci *ohci)
static u32 cycle_timer_ticks(u32 cycle_timer)
static u32 get_cycle_time(struct fw_ohci *ohci)
static u32 update_bus_time(struct fw_ohci *ohci)
static void bus_reset_tasklet(unsigned long data)
static irqreturn_t irq_handler(int irq, void *data)
static int software_reset(struct fw_ohci *ohci)
static void copy_config_rom(__be32 *dest, const __be32 *src, size_t length)
static int configure_1394a_enhancements(struct fw_ohci *ohci)
static int ohci_enable(struct fw_card *card,
const __be32 *config_rom, size_t length)
static int ohci_set_config_rom(struct fw_card *card,
const __be32 *config_rom, size_t length)
static void ohci_send_request(struct fw_card *card, struct fw_packet *packet)
static void ohci_send_response(struct fw_card *card, struct fw_packet *packet)
static int ohci_cancel_packet(struct fw_card *card, struct fw_packet *packet)
static int ohci_enable_phys_dma(struct fw_card *card,
int node_id, int generation)
static u32 ohci_read_csr(struct fw_card *card, int csr_offset)
static void ohci_write_csr(struct fw_card *card, int csr_offset, u32 value)
static void copy_iso_headers(struct iso_context *ctx, void *p)
static int handle_ir_packet_per_buffer(struct context *context,
struct descriptor *d,
struct descriptor *last)
static int handle_ir_buffer_fill(struct context *context,
struct descriptor *d,
struct descriptor *last)
static int handle_it_packet(struct context *context,
struct descriptor *d,
struct descriptor *last)
static void set_multichannel_mask(struct fw_ohci *ohci, u64 channels)
static struct fw_iso_context *ohci_allocate_iso_context(struct fw_card *card,
int type, int channel, size_t header_size)
static int ohci_start_iso(struct fw_iso_context *base,
s32 cycle, u32 sync, u32 tags)
static int ohci_stop_iso(struct fw_iso_context *base)
static void ohci_free_iso_context(struct fw_iso_context *base)
static int ohci_set_iso_channels(struct fw_iso_context *base, u64 *channels)
static void ohci_resume_iso_dma(struct fw_ohci *ohci)
static int queue_iso_transmit(struct iso_context *ctx,
struct fw_iso_packet *packet,
struct fw_iso_buffer *buffer,
unsigned long payload)
static int queue_iso_packet_per_buffer(struct iso_context *ctx,
struct fw_iso_packet *packet,
struct fw_iso_buffer *buffer,
unsigned long payload)
static int queue_iso_buffer_fill(struct iso_context *ctx,
struct fw_iso_packet *packet,
struct fw_iso_buffer *buffer,
unsigned long payload)
static int ohci_queue_iso(struct fw_iso_context *base,
struct fw_iso_packet *packet,
struct fw_iso_buffer *buffer,
unsigned long payload)
static void ohci_flush_queue_iso(struct fw_iso_context *base)
static const struct fw_card_driver ohci_driver = ;
static void pmac_ohci_on(struct pci_dev *dev)
static void pmac_ohci_off(struct pci_dev *dev)
static inline void pmac_ohci_on(struct pci_dev *dev)
static inline void pmac_ohci_off(struct pci_dev *dev)
static int __devinit pci_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void pci_remove(struct pci_dev *dev)
static int pci_suspend(struct pci_dev *dev, pm_message_t state)
static int pci_resume(struct pci_dev *dev)
static const struct pci_device_id pci_table[] = ;
MODULE_DEVICE_TABLE(pci, pci_table);
static struct pci_driver fw_ohci_pci_driver = ;
MODULE_AUTHOR("Kristian Hoegsberg <krh@bitplanet.net>");
MODULE_DESCRIPTION("Driver for PCI OHCI IEEE1394 controllers");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ohci1394");
static int __init fw_ohci_init(void)
static void __exit fw_ohci_cleanup(void)
module_init(fw_ohci_init);
module_exit(fw_ohci_cleanup);
