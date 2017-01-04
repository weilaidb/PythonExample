#define KMSG_COMPONENT "zfcp"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define ZFCP_MAX_ERPS                   3
enum zfcp_erp_act_flags ;
enum zfcp_erp_steps ;
enum zfcp_erp_act_type ;
enum zfcp_erp_act_state ;
enum zfcp_erp_act_result ;
static void zfcp_erp_adapter_block(struct zfcp_adapter *adapter, int mask)
static int zfcp_erp_action_exists(struct zfcp_erp_action *act)
static void zfcp_erp_action_ready(struct zfcp_erp_action *act)
static void zfcp_erp_action_dismiss(struct zfcp_erp_action *act)
static void zfcp_erp_action_dismiss_lun(struct scsi_device *sdev)
static void zfcp_erp_action_dismiss_port(struct zfcp_port *port)
static void zfcp_erp_action_dismiss_adapter(struct zfcp_adapter *adapter)
static int zfcp_erp_required_act(int want, struct zfcp_adapter *adapter,
struct zfcp_port *port,
struct scsi_device *sdev)
static struct zfcp_erp_action *zfcp_erp_setup_act(int need, u32 act_status,
struct zfcp_adapter *adapter,
struct zfcp_port *port,
struct scsi_device *sdev)
static int zfcp_erp_action_enqueue(int want, struct zfcp_adapter *adapter,
struct zfcp_port *port,
struct scsi_device *sdev,
char *id, u32 act_status)
static int _zfcp_erp_adapter_reopen(struct zfcp_adapter *adapter,
int clear_mask, char *id)
void zfcp_erp_adapter_reopen(struct zfcp_adapter *adapter, int clear, char *id)
void zfcp_erp_adapter_shutdown(struct zfcp_adapter *adapter, int clear,
char *id)
void zfcp_erp_port_shutdown(struct zfcp_port *port, int clear, char *id)
static void zfcp_erp_port_block(struct zfcp_port *port, int clear)
static void _zfcp_erp_port_forced_reopen(struct zfcp_port *port, int clear,
char *id)
void zfcp_erp_port_forced_reopen(struct zfcp_port *port, int clear, char *id)
static int _zfcp_erp_port_reopen(struct zfcp_port *port, int clear, char *id)
int zfcp_erp_port_reopen(struct zfcp_port *port, int clear, char *id)
static void zfcp_erp_lun_block(struct scsi_device *sdev, int clear_mask)
static void _zfcp_erp_lun_reopen(struct scsi_device *sdev, int clear, char *id,
u32 act_status)
void zfcp_erp_lun_reopen(struct scsi_device *sdev, int clear, char *id)
void zfcp_erp_lun_shutdown(struct scsi_device *sdev, int clear, char *id)
void zfcp_erp_lun_shutdown_wait(struct scsi_device *sdev, char *id)
static int status_change_set(unsigned long mask, atomic_t *status)
static void zfcp_erp_adapter_unblock(struct zfcp_adapter *adapter)
static void zfcp_erp_port_unblock(struct zfcp_port *port)
static void zfcp_erp_lun_unblock(struct scsi_device *sdev)
static void zfcp_erp_action_to_running(struct zfcp_erp_action *erp_action)
static void zfcp_erp_strategy_check_fsfreq(struct zfcp_erp_action *act)
void zfcp_erp_notify(struct zfcp_erp_action *erp_action, unsigned long set_mask)
void zfcp_erp_timeout_handler(unsigned long data)
static void zfcp_erp_memwait_handler(unsigned long data)
static void zfcp_erp_strategy_memwait(struct zfcp_erp_action *erp_action)
static void _zfcp_erp_port_reopen_all(struct zfcp_adapter *adapter,
int clear, char *id)
static void _zfcp_erp_lun_reopen_all(struct zfcp_port *port, int clear,
char *id)
static void zfcp_erp_strategy_followup_failed(struct zfcp_erp_action *act)
static void zfcp_erp_strategy_followup_success(struct zfcp_erp_action *act)
static void zfcp_erp_wakeup(struct zfcp_adapter *adapter)
static void zfcp_erp_enqueue_ptp_port(struct zfcp_adapter *adapter)
static int zfcp_erp_adapter_strat_fsf_xconf(struct zfcp_erp_action *erp_action)
static int zfcp_erp_adapter_strategy_open_fsf_xport(struct zfcp_erp_action *act)
static int zfcp_erp_adapter_strategy_open_fsf(struct zfcp_erp_action *act)
static void zfcp_erp_adapter_strategy_close(struct zfcp_erp_action *act)
static int zfcp_erp_adapter_strategy_open(struct zfcp_erp_action *act)
static int zfcp_erp_adapter_strategy(struct zfcp_erp_action *act)
static int zfcp_erp_port_forced_strategy_close(struct zfcp_erp_action *act)
static void zfcp_erp_port_strategy_clearstati(struct zfcp_port *port)
static int zfcp_erp_port_forced_strategy(struct zfcp_erp_action *erp_action)
static int zfcp_erp_port_strategy_close(struct zfcp_erp_action *erp_action)
static int zfcp_erp_port_strategy_open_port(struct zfcp_erp_action *erp_action)
static int zfcp_erp_open_ptp_port(struct zfcp_erp_action *act)
static int zfcp_erp_port_strategy_open_common(struct zfcp_erp_action *act)
static int zfcp_erp_port_strategy(struct zfcp_erp_action *erp_action)
static void zfcp_erp_lun_strategy_clearstati(struct scsi_device *sdev)
static int zfcp_erp_lun_strategy_close(struct zfcp_erp_action *erp_action)
static int zfcp_erp_lun_strategy_open(struct zfcp_erp_action *erp_action)
static int zfcp_erp_lun_strategy(struct zfcp_erp_action *erp_action)
static int zfcp_erp_strategy_check_lun(struct scsi_device *sdev, int result)
static int zfcp_erp_strategy_check_port(struct zfcp_port *port, int result)
static int zfcp_erp_strategy_check_adapter(struct zfcp_adapter *adapter,
int result)
static int zfcp_erp_strategy_check_target(struct zfcp_erp_action *erp_action,
int result)
static int zfcp_erp_strat_change_det(atomic_t *target_status, u32 erp_status)
static int zfcp_erp_strategy_statechange(struct zfcp_erp_action *act, int ret)
static void zfcp_erp_action_dequeue(struct zfcp_erp_action *erp_action)
static void zfcp_erp_action_cleanup(struct zfcp_erp_action *act, int result)
static int zfcp_erp_strategy_do_action(struct zfcp_erp_action *erp_action)
static int zfcp_erp_strategy(struct zfcp_erp_action *erp_action)
static int zfcp_erp_thread(void *data)
int zfcp_erp_thread_setup(struct zfcp_adapter *adapter)
void zfcp_erp_thread_kill(struct zfcp_adapter *adapter)
void zfcp_erp_wait(struct zfcp_adapter *adapter)
void zfcp_erp_set_adapter_status(struct zfcp_adapter *adapter, u32 mask)
void zfcp_erp_clear_adapter_status(struct zfcp_adapter *adapter, u32 mask)
void zfcp_erp_set_port_status(struct zfcp_port *port, u32 mask)
void zfcp_erp_clear_port_status(struct zfcp_port *port, u32 mask)
void zfcp_erp_set_lun_status(struct scsi_device *sdev, u32 mask)
void zfcp_erp_clear_lun_status(struct scsi_device *sdev, u32 mask)
