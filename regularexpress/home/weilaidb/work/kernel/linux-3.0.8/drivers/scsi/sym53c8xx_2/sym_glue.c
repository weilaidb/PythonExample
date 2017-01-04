#define NAME53C		"sym53c"
#define NAME53C8XX	"sym53c8xx"
struct sym_driver_setup sym_driver_setup = SYM_LINUX_DRIVER_SETUP;
unsigned int sym_debug_flags = 0;
static char *excl_string;
static char *safe_string;
module_param_named(cmd_per_lun, sym_driver_setup.max_tag, ushort, 0);
module_param_named(burst, sym_driver_setup.burst_order, byte, 0);
module_param_named(led, sym_driver_setup.scsi_led, byte, 0);
module_param_named(diff, sym_driver_setup.scsi_diff, byte, 0);
module_param_named(irqm, sym_driver_setup.irq_mode, byte, 0);
module_param_named(buschk, sym_driver_setup.scsi_bus_check, byte, 0);
module_param_named(hostid, sym_driver_setup.host_id, byte, 0);
module_param_named(verb, sym_driver_setup.verbose, byte, 0);
module_param_named(debug, sym_debug_flags, uint, 0);
module_param_named(settle, sym_driver_setup.settle_delay, byte, 0);
module_param_named(nvram, sym_driver_setup.use_nvram, byte, 0);
module_param_named(excl, excl_string, charp, 0);
module_param_named(safe, safe_string, charp, 0);
MODULE_PARM_DESC(cmd_per_lun, "The maximum number of tags to use by default");
MODULE_PARM_DESC(burst, "Maximum burst.  0 to disable, 255 to read from registers");
MODULE_PARM_DESC(led, "Set to 1 to enable LED support");
MODULE_PARM_DESC(diff, "0 for no differential mode, 1 for BIOS, 2 for always, 3 for not GPIO3");
MODULE_PARM_DESC(irqm, "0 for open drain, 1 to leave alone, 2 for totem pole");
MODULE_PARM_DESC(buschk, "0 to not check, 1 for detach on error, 2 for warn on error");
MODULE_PARM_DESC(hostid, "The SCSI ID to use for the host adapters");
MODULE_PARM_DESC(verb, "0 for minimal verbosity, 1 for normal, 2 for excessive");
MODULE_PARM_DESC(debug, "Set bits to enable debugging");
MODULE_PARM_DESC(settle, "Settle delay in seconds.  Default 3");
MODULE_PARM_DESC(nvram, "Option currently not used");
MODULE_PARM_DESC(excl, "List ioport addresses here to prevent controllers from being attached");
MODULE_PARM_DESC(safe, "Set other settings to a \"safe mode\"");
MODULE_LICENSE("GPL");
MODULE_VERSION(SYM_VERSION);
MODULE_AUTHOR("Matthew Wilcox <matthew@wil.cx>");
MODULE_DESCRIPTION("NCR, Symbios and LSI 8xx and 1010 PCI SCSI adapters");
static void sym2_setup_params(void)
static struct scsi_transport_template *sym2_transport_template = NULL;
struct sym_ucmd ;
#define SYM_UCMD_PTR(cmd)  ((struct sym_ucmd *)(&(cmd)->SCp))
#define SYM_SOFTC_PTR(cmd) sym_get_hcb(cmd->device->host)
void sym_xpt_done(struct sym_hcb *np, struct scsi_cmnd *cmd)
void sym_xpt_async_bus_reset(struct sym_hcb *np)
static int sym_xerr_cam_status(int cam_status, int x_status)
void sym_set_cam_result_error(struct sym_hcb *np, struct sym_ccb *cp, int resid)
static int sym_scatter(struct sym_hcb *np, struct sym_ccb *cp, struct scsi_cmnd *cmd)
static int sym_queue_command(struct sym_hcb *np, struct scsi_cmnd *cmd)
static inline int sym_setup_cdb(struct sym_hcb *np, struct scsi_cmnd *cmd, struct sym_ccb *cp)
int sym_setup_data_and_start(struct sym_hcb *np, struct scsi_cmnd *cmd, struct sym_ccb *cp)
static void sym_timer(struct sym_hcb *np)
void sym_log_bus_error(struct Scsi_Host *shost)
static int sym53c8xx_queue_command_lck(struct scsi_cmnd *cmd,
void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(sym53c8xx_queue_command)
static irqreturn_t sym53c8xx_intr(int irq, void *dev_id)
static void sym53c8xx_timer(unsigned long npref)
#define SYM_EH_ABORT		0
#define SYM_EH_DEVICE_RESET	1
#define SYM_EH_BUS_RESET	2
#define SYM_EH_HOST_RESET	3
static int sym_eh_handler(int op, char *opname, struct scsi_cmnd *cmd)
static int sym53c8xx_eh_abort_handler(struct scsi_cmnd *cmd)
static int sym53c8xx_eh_device_reset_handler(struct scsi_cmnd *cmd)
static int sym53c8xx_eh_bus_reset_handler(struct scsi_cmnd *cmd)
static int sym53c8xx_eh_host_reset_handler(struct scsi_cmnd *cmd)
static void sym_tune_dev_queuing(struct sym_tcb *tp, int lun, u_short reqtags)
static int sym53c8xx_slave_alloc(struct scsi_device *sdev)
static int sym53c8xx_slave_configure(struct scsi_device *sdev)
static void sym53c8xx_slave_destroy(struct scsi_device *sdev)
static const char *sym53c8xx_info (struct Scsi_Host *host)
struct	sym_usrcmd ;
#define UC_SETSYNC      10
#define UC_SETTAGS	11
#define UC_SETDEBUG	12
#define UC_SETWIDE	14
#define UC_SETFLAG	15
#define UC_SETVERBOSE	17
#define UC_RESETDEV	18
#define UC_CLEARDEV	19
static void sym_exec_user_command (struct sym_hcb *np, struct sym_usrcmd *uc)
static int sym_skip_spaces(char *ptr, int len)
static int get_int_arg(char *ptr, int len, u_long *pv)
static int is_keyword(char *ptr, int len, char *verb)
#define SKIP_SPACES(ptr, len)						\
if ((arg_len = sym_skip_spaces(ptr, len)) < 1)			\
return -EINVAL;						\
ptr += arg_len; len -= arg_len;
#define GET_INT_ARG(ptr, len, v)					\
if (!(arg_len = get_int_arg(ptr, len, &(v))))			\
return -EINVAL;						\
ptr += arg_len; len -= arg_len;
static int sym_user_command(struct Scsi_Host *shost, char *buffer, int length)
struct info_str ;
static void copy_mem_info(struct info_str *info, char *data, int len)
static int copy_info(struct info_str *info, char *fmt, ...)
static int sym_host_info(struct Scsi_Host *shost, char *ptr, off_t offset, int len)
static int sym53c8xx_proc_info(struct Scsi_Host *shost, char *buffer,
char **start, off_t offset, int length, int func)
static void __devinit
sym_iounmap_device(struct sym_device *device)
static void sym_free_resources(struct sym_hcb *np, struct pci_dev *pdev,
int do_free_irq)
static struct Scsi_Host * __devinit sym_attach(struct scsi_host_template *tpnt,
int unit, struct sym_device *dev)
#if SYM_CONF_NVRAM_SUPPORT
static void __devinit sym_get_nvram(struct sym_device *devp, struct sym_nvram *nvp)
static inline void sym_get_nvram(struct sym_device *devp, struct sym_nvram *nvp)
static int __devinit sym_check_supported(struct sym_device *device)
static int __devinit sym_check_raid(struct sym_device *device)
static int __devinit sym_set_workarounds(struct sym_device *device)
static int __devinit
sym_iomap_device(struct sym_device *device)
static void sym_config_pqs(struct pci_dev *pdev, struct sym_device *sym_dev)
static int sym_detach(struct Scsi_Host *shost, struct pci_dev *pdev)
static struct scsi_host_template sym2_template = ;
static int attach_count;
static int __devinit sym2_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void sym2_remove(struct pci_dev *pdev)
static pci_ers_result_t sym2_io_error_detected(struct pci_dev *pdev,
enum pci_channel_state state)
static pci_ers_result_t sym2_io_slot_dump(struct pci_dev *pdev)
static void sym2_reset_workarounds(struct pci_dev *pdev)
static pci_ers_result_t sym2_io_slot_reset(struct pci_dev *pdev)
static void sym2_io_resume(struct pci_dev *pdev)
static void sym2_get_signalling(struct Scsi_Host *shost)
static void sym2_set_offset(struct scsi_target *starget, int offset)
static void sym2_set_period(struct scsi_target *starget, int period)
static void sym2_set_width(struct scsi_target *starget, int width)
static void sym2_set_dt(struct scsi_target *starget, int dt)
static struct spi_function_template sym2_transport_functions = ;
static struct pci_device_id sym2_id_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, sym2_id_table);
static struct pci_error_handlers sym2_err_handler = ;
static struct pci_driver sym2_driver = ;
static int __init sym2_init(void)
static void __exit sym2_exit(void)
module_init(sym2_init);
module_exit(sym2_exit);
