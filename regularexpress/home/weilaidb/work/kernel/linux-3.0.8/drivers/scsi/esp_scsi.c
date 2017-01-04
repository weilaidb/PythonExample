#define DRV_MODULE_NAME		"esp"
#define PFX DRV_MODULE_NAME	": "
#define DRV_VERSION		"2.000"
#define DRV_MODULE_RELDATE	"April 19, 2007"
static int esp_bus_reset_settle = 3;
static u32 esp_debug;
#define ESP_DEBUG_INTR		0x00000001
#define ESP_DEBUG_SCSICMD	0x00000002
#define ESP_DEBUG_RESET		0x00000004
#define ESP_DEBUG_MSGIN		0x00000008
#define ESP_DEBUG_MSGOUT	0x00000010
#define ESP_DEBUG_CMDDONE	0x00000020
#define ESP_DEBUG_DISCONNECT	0x00000040
#define ESP_DEBUG_DATASTART	0x00000080
#define ESP_DEBUG_DATADONE	0x00000100
#define ESP_DEBUG_RECONNECT	0x00000200
#define ESP_DEBUG_AUTOSENSE	0x00000400
#define esp_log_intr(f, a...) \
do  while (0)
#define esp_log_reset(f, a...) \
do  while (0)
#define esp_log_msgin(f, a...) \
do  while (0)
#define esp_log_msgout(f, a...) \
do  while (0)
#define esp_log_cmddone(f, a...) \
do  while (0)
#define esp_log_disconnect(f, a...) \
do  while (0)
#define esp_log_datastart(f, a...) \
do  while (0)
#define esp_log_datadone(f, a...) \
do  while (0)
#define esp_log_reconnect(f, a...) \
do  while (0)
#define esp_log_autosense(f, a...) \
do  while (0)
#define esp_read8(REG)		esp->ops->esp_read8(esp, REG)
#define esp_write8(VAL,REG)	esp->ops->esp_write8(esp, VAL, REG)
static void esp_log_fill_regs(struct esp *esp,
struct esp_event_ent *p)
void scsi_esp_cmd(struct esp *esp, u8 val)
EXPORT_SYMBOL(scsi_esp_cmd);
static void esp_event(struct esp *esp, u8 val)
static void esp_dump_cmd_log(struct esp *esp)
static void esp_flush_fifo(struct esp *esp)
static void hme_read_fifo(struct esp *esp)
static void esp_set_all_config3(struct esp *esp, u8 val)
static void esp_reset_esp(struct esp *esp)
static void esp_map_dma(struct esp *esp, struct scsi_cmnd *cmd)
static dma_addr_t esp_cur_dma_addr(struct esp_cmd_entry *ent,
struct scsi_cmnd *cmd)
static unsigned int esp_cur_dma_len(struct esp_cmd_entry *ent,
struct scsi_cmnd *cmd)
static void esp_advance_dma(struct esp *esp, struct esp_cmd_entry *ent,
struct scsi_cmnd *cmd, unsigned int len)
static void esp_unmap_dma(struct esp *esp, struct scsi_cmnd *cmd)
static void esp_save_pointers(struct esp *esp, struct esp_cmd_entry *ent)
static void esp_restore_pointers(struct esp *esp, struct esp_cmd_entry *ent)
static void esp_check_command_len(struct esp *esp, struct scsi_cmnd *cmd)
static void esp_write_tgt_config3(struct esp *esp, int tgt)
static void esp_write_tgt_sync(struct esp *esp, int tgt)
static u32 esp_dma_length_limit(struct esp *esp, u32 dma_addr, u32 dma_len)
static int esp_need_to_nego_wide(struct esp_target_data *tp)
static int esp_need_to_nego_sync(struct esp_target_data *tp)
static int esp_alloc_lun_tag(struct esp_cmd_entry *ent,
struct esp_lun_data *lp)
static void esp_free_lun_tag(struct esp_cmd_entry *ent,
struct esp_lun_data *lp)
static void esp_autosense(struct esp *esp, struct esp_cmd_entry *ent)
static struct esp_cmd_entry *find_and_prep_issuable_command(struct esp *esp)
static void esp_maybe_execute_command(struct esp *esp)
static struct esp_cmd_entry *esp_get_ent(struct esp *esp)
static void esp_put_ent(struct esp *esp, struct esp_cmd_entry *ent)
static void esp_cmd_is_done(struct esp *esp, struct esp_cmd_entry *ent,
struct scsi_cmnd *cmd, unsigned int result)
static unsigned int compose_result(unsigned int status, unsigned int message,
unsigned int driver_code)
static void esp_event_queue_full(struct esp *esp, struct esp_cmd_entry *ent)
static int esp_queuecommand_lck(struct scsi_cmnd *cmd, void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(esp_queuecommand)
static int esp_check_gross_error(struct esp *esp)
static int esp_check_spur_intr(struct esp *esp)
static void esp_schedule_reset(struct esp *esp)
static struct esp_cmd_entry *esp_reconnect_with_tag(struct esp *esp,
struct esp_lun_data *lp)
static int esp_reconnect(struct esp *esp)
static int esp_finish_select(struct esp *esp)
static int esp_data_bytes_sent(struct esp *esp, struct esp_cmd_entry *ent,
struct scsi_cmnd *cmd)
static void esp_setsync(struct esp *esp, struct esp_target_data *tp,
u8 scsi_period, u8 scsi_offset,
u8 esp_stp, u8 esp_soff)
static void esp_msgin_reject(struct esp *esp)
static void esp_msgin_sdtr(struct esp *esp, struct esp_target_data *tp)
static void esp_msgin_wdtr(struct esp *esp, struct esp_target_data *tp)
static void esp_msgin_extended(struct esp *esp)
static int esp_msgin_process(struct esp *esp)
static int esp_process_event(struct esp *esp)
static void esp_reset_cleanup_one(struct esp *esp, struct esp_cmd_entry *ent)
static void esp_clear_hold(struct scsi_device *dev, void *data)
static void esp_reset_cleanup(struct esp *esp)
static void __esp_interrupt(struct esp *esp)
irqreturn_t scsi_esp_intr(int irq, void *dev_id)
EXPORT_SYMBOL(scsi_esp_intr);
static void esp_get_revision(struct esp *esp)
static void esp_init_swstate(struct esp *esp)
static void esp_bootup_reset(struct esp *esp)
static void esp_set_clock_params(struct esp *esp)
static const char *esp_chip_names[] = ;
static struct scsi_transport_template *esp_transport_template;
int scsi_esp_register(struct esp *esp, struct device *dev)
EXPORT_SYMBOL(scsi_esp_register);
void scsi_esp_unregister(struct esp *esp)
EXPORT_SYMBOL(scsi_esp_unregister);
static int esp_target_alloc(struct scsi_target *starget)
static void esp_target_destroy(struct scsi_target *starget)
static int esp_slave_alloc(struct scsi_device *dev)
static int esp_slave_configure(struct scsi_device *dev)
static void esp_slave_destroy(struct scsi_device *dev)
static int esp_eh_abort_handler(struct scsi_cmnd *cmd)
static int esp_eh_bus_reset_handler(struct scsi_cmnd *cmd)
static int esp_eh_host_reset_handler(struct scsi_cmnd *cmd)
static const char *esp_info(struct Scsi_Host *host)
struct scsi_host_template scsi_esp_template = ;
EXPORT_SYMBOL(scsi_esp_template);
static void esp_get_signalling(struct Scsi_Host *host)
static void esp_set_offset(struct scsi_target *target, int offset)
static void esp_set_period(struct scsi_target *target, int period)
static void esp_set_width(struct scsi_target *target, int width)
static struct spi_function_template esp_transport_ops = ;
static int __init esp_init(void)
static void __exit esp_exit(void)
MODULE_DESCRIPTION("ESP SCSI driver core");
MODULE_AUTHOR("David S. Miller (davem@davemloft.net)");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
module_param(esp_bus_reset_settle, int, 0);
MODULE_PARM_DESC(esp_bus_reset_settle,
"ESP scsi bus reset delay in seconds");
module_param(esp_debug, int, 0);
MODULE_PARM_DESC(esp_debug,
"ESP bitmapped debugging message enable value:\n"
"	0x00000001	Log interrupt events\n"
"	0x00000002	Log scsi commands\n"
"	0x00000004	Log resets\n"
"	0x00000008	Log message in events\n"
"	0x00000010	Log message out events\n"
"	0x00000020	Log command completion\n"
"	0x00000040	Log disconnects\n"
"	0x00000080	Log data start\n"
"	0x00000100	Log data done\n"
"	0x00000200	Log reconnects\n"
"	0x00000400	Log auto-sense data\n"
);
module_init(esp_init);
module_exit(esp_exit);
