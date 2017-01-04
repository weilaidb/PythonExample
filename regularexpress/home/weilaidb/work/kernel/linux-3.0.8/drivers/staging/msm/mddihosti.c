#define FEATURE_MDDI_UNDERRUN_RECOVERY
static void mddi_read_rev_packet(byte *data_ptr);
struct timer_list mddi_host_timer;
#define MDDI_DEFAULT_TIMER_LENGTH 5000
uint32 mddi_rtd_frequency = 60000;
uint32 mddi_client_status_frequency = 60000;
boolean mddi_vsync_detect_enabled = FALSE;
mddi_gpio_info_type mddi_gpio;
uint32 mddi_host_core_version;
boolean mddi_debug_log_statistics = FALSE;
static boolean mddi_host_mdp_active_flag = TRUE;
static uint32 mddi_log_stats_counter;
uint32 mddi_log_stats_frequency = 4000;
#define MDDI_DEFAULT_REV_PKT_SIZE            0x20
static boolean mddi_rev_ptr_workaround = TRUE;
static uint32 mddi_reg_read_retry;
static uint32 mddi_reg_read_retry_max = 20;
static boolean mddi_enable_reg_read_retry = TRUE;
static boolean mddi_enable_reg_read_retry_once = FALSE;
#define MDDI_MAX_REV_PKT_SIZE                0x60
#define MDDI_CLIENT_CAPABILITY_REV_PKT_SIZE  0x60
#define MDDI_VIDEO_REV_PKT_SIZE              0x40
#define MDDI_REV_BUFFER_SIZE  MDDI_MAX_REV_PKT_SIZE
static byte rev_packet_data[MDDI_MAX_REV_PKT_SIZE];
#define MDDI_MAX_REV_DATA_SIZE  128
boolean mddi_debug_clear_rev_data = TRUE;
uint32 *mddi_reg_read_value_ptr;
mddi_client_capability_type mddi_client_capability_pkt;
static boolean mddi_client_capability_request = FALSE;
#define MAX_MDDI_REV_HANDLERS 2
#define INVALID_PKT_TYPE 0xFFFF
typedef struct  mddi_rev_pkt_handler_type;
static mddi_rev_pkt_handler_type mddi_rev_pkt_handler[MAX_MDDI_REV_HANDLERS] =
;
static boolean mddi_rev_encap_user_request = FALSE;
static mddi_linked_list_notify_type mddi_rev_user;
spinlock_t mddi_host_spin_lock;
extern uint32 mdp_in_processing;
typedef enum  mddi_rev_link_state_type;
typedef enum  mddi_host_link_state_type;
typedef struct  mddi_host_int_type;
typedef struct  mddi_host_stat_type;
typedef struct  mddi_log_params_struct_type;
typedef struct  mddi_host_cntl_type;
static mddi_host_type mddi_curr_host = MDDI_HOST_PRIM;
static mddi_host_cntl_type mhctl[MDDI_NUM_HOST_CORES];
mddi_linked_list_type *llist_extern[MDDI_NUM_HOST_CORES];
mddi_linked_list_type *llist_dma_extern[MDDI_NUM_HOST_CORES];
mddi_linked_list_notify_type *llist_extern_notify[MDDI_NUM_HOST_CORES];
static mddi_log_params_struct_type prev_parms[MDDI_NUM_HOST_CORES];
extern uint32 mdp_total_vdopkts;
static boolean mddi_host_io_clock_on = FALSE;
static boolean mddi_host_hclk_on = FALSE;
int int_mddi_pri_flag = FALSE;
int int_mddi_ext_flag = FALSE;
static void mddi_report_errors(uint32 int_reg)
static void mddi_host_enable_io_clock(void)
static void mddi_host_enable_hclk(void)
static void mddi_host_disable_io_clock(void)
static void mddi_host_disable_hclk(void)
static void mddi_vote_to_sleep(mddi_host_type host_idx, boolean sleep)
static void mddi_report_state_change(uint32 int_reg)
void mddi_host_timer_service(unsigned long data)
static void mddi_process_link_list_done(void)
static void mddi_queue_forward_linked_list(void)
static void mddi_read_rev_packet(byte *data_ptr)
static void mddi_process_rev_packets(void)
static void mddi_issue_reverse_encapsulation(void)
static void mddi_process_client_initiated_wakeup(void)
static void mddi_host_isr(void)
static void mddi_host_isr_primary(void)
irqreturn_t mddi_pmdh_isr_proxy(int irq, void *ptr)
static void mddi_host_isr_external(void)
irqreturn_t mddi_emdh_isr_proxy(int irq, void *ptr)
static void mddi_host_initialize_registers(mddi_host_type host_idx)
void mddi_host_configure_interrupts(mddi_host_type host_idx, boolean enable)
static void mddi_host_powerup(mddi_host_type host_idx)
void mddi_host_init(mddi_host_type host_idx)
static uint32 mddi_client_id;
uint32 mddi_get_client_id(void)
void mddi_host_powerdown(mddi_host_type host_idx)
uint16 mddi_get_next_free_llist_item(mddi_host_type host_idx, boolean wait)
uint16 mddi_get_reg_read_llist_item(mddi_host_type host_idx, boolean wait)
void mddi_queue_forward_packets(uint16 first_llist_idx,
uint16 last_llist_idx,
boolean wait,
mddi_llist_done_cb_type llist_done_cb,
mddi_host_type host_idx)
void mddi_host_write_pix_attr_reg(uint32 value)
void mddi_queue_reverse_encapsulation(boolean wait)
boolean mddi_set_rev_handler(mddi_rev_handler_type handler, uint16 pkt_type)
void mddi_host_disable_hibernation(boolean disable)
void mddi_mhctl_remove(mddi_host_type host_idx)
