#define _ARCH_ARM_MACH_MSM_MSM_SMD_PRIVATE_H_
struct smem_heap_info ;
struct smem_heap_entry ;
struct smem_proc_comm ;
#define PC_APPS  0
#define PC_MODEM 1
#define VERSION_SMD       0
#define VERSION_QDSP6     4
#define VERSION_APPS_SBL  6
#define VERSION_MODEM_SBL 7
#define VERSION_APPS      8
#define VERSION_MODEM     9
struct smem_shared ;
#define SMSM_V1_SIZE		(sizeof(unsigned) * 8)
#define SMSM_V2_SIZE		(sizeof(unsigned) * 4)
struct smsm_interrupt_info ;
#define DEM_MAX_PORT_NAME_LEN (20)
struct msm_dem_slave_data ;
#define SZ_DIAG_ERR_MSG 0xC8
#define ID_DIAG_ERR_MSG SMEM_DIAG_ERR_MESSAGE
#define ID_SMD_CHANNELS SMEM_SMD_BASE_ID
#define ID_SHARED_STATE SMEM_SMSM_SHARED_STATE
#define ID_CH_ALLOC_TBL SMEM_CHANNEL_ALLOC_TBL
#define SMSM_INIT		0x00000001
#define SMSM_SMDINIT		0x00000008
#define SMSM_RPCINIT		0x00000020
#define SMSM_RESET		0x00000040
#define SMSM_RSA		0x00000080
#define SMSM_RUN		0x00000100
#define SMSM_PWRC		0x00000200
#define SMSM_TIMEWAIT		0x00000400
#define SMSM_TIMEINIT		0x00000800
#define SMSM_PWRC_EARLY_EXIT	0x00001000
#define SMSM_WFPI		0x00002000
#define SMSM_SLEEP		0x00004000
#define SMSM_SLEEPEXIT		0x00008000
#define SMSM_APPS_REBOOT	0x00020000
#define SMSM_SYSTEM_POWER_DOWN	0x00040000
#define SMSM_SYSTEM_REBOOT	0x00080000
#define SMSM_SYSTEM_DOWNLOAD	0x00100000
#define SMSM_PWRC_SUSPEND	0x00200000
#define SMSM_APPS_SHUTDOWN	0x00400000
#define SMSM_SMD_LOOPBACK	0x00800000
#define SMSM_RUN_QUIET		0x01000000
#define SMSM_MODEM_WAIT		0x02000000
#define SMSM_MODEM_BREAK	0x04000000
#define SMSM_MODEM_CONTINUE	0x08000000
#define SMSM_UNKNOWN		0x80000000
#define SMSM_WKUP_REASON_RPC	0x00000001
#define SMSM_WKUP_REASON_INT	0x00000002
#define SMSM_WKUP_REASON_GPIO	0x00000004
#define SMSM_WKUP_REASON_TIMER	0x00000008
#define SMSM_WKUP_REASON_ALARM	0x00000010
#define SMSM_WKUP_REASON_RESET	0x00000020
enum smsm_state_item ;
enum smsm_state_item ;
void *smem_alloc(unsigned id, unsigned size);
int smsm_change_state(enum smsm_state_item item, uint32_t clear_mask, uint32_t set_mask);
uint32_t smsm_get_state(enum smsm_state_item item);
int smsm_set_sleep_duration(uint32_t delay);
void smsm_print_sleep_info(void);
#define SMEM_NUM_SMD_CHANNELS        64
typedef enum  smem_mem_type;
#define SMD_SS_CLOSED		0x00000000
#define SMD_SS_OPENING		0x00000001
#define SMD_SS_OPENED		0x00000002
#define SMD_SS_FLUSHING		0x00000003
#define SMD_SS_CLOSING		0x00000004
#define SMD_SS_RESET		0x00000005
#define SMD_SS_RESET_OPENING	0x00000006
#define SMD_BUF_SIZE		8192
#define SMD_CHANNELS		64
#define SMD_HEADER_SIZE		20
struct smd_alloc_elm ;
struct smd_half_channel  __attribute__(( aligned(4), packed ));
struct smd_shared_v1 ;
struct smd_shared_v2 ;
struct smd_channel ;
#define SMD_TYPE_MASK		0x0FF
#define SMD_TYPE_APPS_MODEM	0x000
#define SMD_TYPE_APPS_DSP	0x001
#define SMD_TYPE_MODEM_DSP	0x002
#define SMD_KIND_MASK		0xF00
#define SMD_KIND_UNKNOWN	0x000
#define SMD_KIND_STREAM		0x100
#define SMD_KIND_PACKET		0x200
extern struct list_head smd_ch_closed_list;
extern struct list_head smd_ch_list_modem;
extern struct list_head smd_ch_list_dsp;
extern spinlock_t smd_lock;
extern spinlock_t smem_lock;
void *smem_find(unsigned id, unsigned size);
void *smem_item(unsigned id, unsigned *size);
uint32_t raw_smsm_get_state(enum smsm_state_item item);
extern void msm_init_last_radio_log(struct module *);
static inline int _smd_alloc_channel(struct smd_channel *ch)
static inline int _smd_alloc_channel(struct smd_channel *ch)
#if defined(CONFIG_ARCH_MSM7X30)
static inline void msm_a2m_int(uint32_t irq)
static inline void msm_a2m_int(uint32_t irq)
