#define __ISCI_H__
#define DRV_NAME "isci"
#define SCI_PCI_BAR_COUNT 2
#define SCI_NUM_MSI_X_INT 2
#define SCI_SMU_BAR       0
#define SCI_SMU_BAR_SIZE  (16*1024)
#define SCI_SCU_BAR       1
#define SCI_SCU_BAR_SIZE  (4*1024*1024)
#define SCI_IO_SPACE_BAR0 2
#define SCI_IO_SPACE_BAR1 3
#define ISCI_CAN_QUEUE_VAL 250
#define SCIC_CONTROLLER_STOP_TIMEOUT 5000
#define SCI_CONTROLLER_INVALID_IO_TAG 0xFFFF
#define SCI_MAX_PHYS  (4UL)
#define SCI_MAX_PORTS SCI_MAX_PHYS
#define SCI_MAX_SMP_PHYS  (384)
#define SCI_MAX_REMOTE_DEVICES (256UL)
#define SCI_MAX_IO_REQUESTS (256UL)
#define SCI_MAX_SEQ (16)
#define SCI_MAX_MSIX_MESSAGES  (2)
#define SCI_MAX_SCATTER_GATHER_ELEMENTS 130
#define SCI_MAX_CONTROLLERS 2
#define SCI_MAX_DOMAINS  SCI_MAX_PORTS
#define SCU_MAX_CRITICAL_NOTIFICATIONS    (384)
#define SCU_MAX_EVENTS_SHIFT		  (7)
#define SCU_MAX_EVENTS                    (1 << SCU_MAX_EVENTS_SHIFT)
#define SCU_MAX_UNSOLICITED_FRAMES        (128)
#define SCU_MAX_COMPLETION_QUEUE_SCRATCH  (128)
#define SCU_MAX_COMPLETION_QUEUE_ENTRIES  (SCU_MAX_CRITICAL_NOTIFICATIONS \
+ SCU_MAX_EVENTS \
+ SCU_MAX_UNSOLICITED_FRAMES	\
+ SCI_MAX_IO_REQUESTS \
+ SCU_MAX_COMPLETION_QUEUE_SCRATCH)
#define SCU_MAX_COMPLETION_QUEUE_SHIFT	  (ilog2(SCU_MAX_COMPLETION_QUEUE_ENTRIES))
#define SCU_ABSOLUTE_MAX_UNSOLICITED_FRAMES (4096)
#define SCU_UNSOLICITED_FRAME_BUFFER_SIZE   (1024)
#define SCU_INVALID_FRAME_INDEX             (0xFFFF)
#define SCU_IO_REQUEST_MAX_SGE_SIZE         (0x00FFFFFF)
#define SCU_IO_REQUEST_MAX_TRANSFER_LENGTH  (0x00FFFFFF)
static inline void check_sizes(void)
enum sci_status ;
enum sci_io_status ;
enum sci_task_status ;
static inline void sci_swab32_cpy(void *_dest, void *_src, ssize_t word_cnt)
extern unsigned char no_outbound_task_to;
extern u16 ssp_max_occ_to;
extern u16 stp_max_occ_to;
extern u16 ssp_inactive_to;
extern u16 stp_inactive_to;
extern unsigned char phy_gen;
extern unsigned char max_concurr_spinup;
irqreturn_t isci_msix_isr(int vec, void *data);
irqreturn_t isci_intx_isr(int vec, void *data);
irqreturn_t isci_error_isr(int vec, void *data);
struct sci_timer ;
static inline
void sci_init_timer(struct sci_timer *tmr, void (*fn)(unsigned long))
static inline void sci_mod_timer(struct sci_timer *tmr, unsigned long msec)
static inline void sci_del_timer(struct sci_timer *tmr)
struct sci_base_state_machine ;
typedef void (*sci_state_transition_t)(struct sci_base_state_machine *sm);
struct sci_base_state ;
extern void sci_init_sm(struct sci_base_state_machine *sm,
const struct sci_base_state *state_table,
u32 initial_state);
extern void sci_change_state(struct sci_base_state_machine *sm, u32 next_state);
