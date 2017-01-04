#define PFX "ipmi_si: "
#undef DEBUG_TIMING
#define SI_TIMEOUT_TIME_USEC	10000
#define SI_USEC_PER_JIFFY	(1000000/HZ)
#define SI_TIMEOUT_JIFFIES	(SI_TIMEOUT_TIME_USEC/SI_USEC_PER_JIFFY)
#define SI_SHORT_TIMEOUT_USEC  250
enum si_intf_state ;
#define IPMI_BT_INTMASK_REG		2
#define IPMI_BT_INTMASK_CLEAR_IRQ_BIT	2
#define IPMI_BT_INTMASK_ENABLE_IRQ_BIT	1
enum si_type ;
static char *si_to_str[] = ;
static char *ipmi_addr_src_to_str[] = ;
#define DEVICE_NAME "ipmi_si"
static struct platform_driver ipmi_driver;
enum si_stat_indexes ;
struct smi_info ;
#define smi_inc_stat(smi, stat) \
atomic_inc(&(smi)->stats[SI_STAT_ ## stat])
#define smi_get_stat(smi, stat) \
((unsigned int) atomic_read(&(smi)->stats[SI_STAT_ ## stat]))
#define SI_MAX_PARMS 4
static int force_kipmid[SI_MAX_PARMS];
static int num_force_kipmid;
static int pci_registered;
static int pnp_registered;
static unsigned int kipmid_max_busy_us[SI_MAX_PARMS];
static int num_max_busy_us;
static int unload_when_empty = 1;
static int add_smi(struct smi_info *smi);
static int try_smi_init(struct smi_info *smi);
static void cleanup_one_si(struct smi_info *to_clean);
static void cleanup_ipmi_si(void);
static ATOMIC_NOTIFIER_HEAD(xaction_notifier_list);
static int register_xaction_notifier(struct notifier_block *nb)
static void deliver_recv_msg(struct smi_info *smi_info,
struct ipmi_smi_msg *msg)
static void return_hosed_msg(struct smi_info *smi_info, int cCode)
static enum si_sm_result start_next_msg(struct smi_info *smi_info)
static void start_enable_irq(struct smi_info *smi_info)
static void start_disable_irq(struct smi_info *smi_info)
static void start_clear_flags(struct smi_info *smi_info)
static inline void disable_si_irq(struct smi_info *smi_info)
static inline void enable_si_irq(struct smi_info *smi_info)
static void handle_flags(struct smi_info *smi_info)
static void handle_transaction_done(struct smi_info *smi_info)
static enum si_sm_result smi_event_handler(struct smi_info *smi_info,
int time)
static void sender(void                *send_info,
struct ipmi_smi_msg *msg,
int                 priority)
static void set_run_to_completion(void *send_info, int i_run_to_completion)
static inline void ipmi_si_set_not_busy(struct timespec *ts)
static inline int ipmi_si_is_busy(struct timespec *ts)
static int ipmi_thread_busy_wait(enum si_sm_result smi_result,
const struct smi_info *smi_info,
struct timespec *busy_until)
static int ipmi_thread(void *data)
static void poll(void *send_info)
static void request_events(void *send_info)
static int initialized;
static void smi_timeout(unsigned long data)
static irqreturn_t si_irq_handler(int irq, void *data)
static irqreturn_t si_bt_irq_handler(int irq, void *data)
static int smi_start_processing(void       *send_info,
ipmi_smi_t intf)
static int get_smi_info(void *send_info, struct ipmi_smi_info *data)
static void set_maintenance_mode(void *send_info, int enable)
static struct ipmi_smi_handlers handlers = ;
static LIST_HEAD(smi_infos);
static DEFINE_MUTEX(smi_infos_lock);
static int smi_num;
#define DEFAULT_REGSPACING	1
#define DEFAULT_REGSIZE		1
static int           si_trydefaults = 1;
static char          *si_type[SI_MAX_PARMS];
#define MAX_SI_TYPE_STR 30
static char          si_type_str[MAX_SI_TYPE_STR];
static unsigned long addrs[SI_MAX_PARMS];
static unsigned int num_addrs;
static unsigned int  ports[SI_MAX_PARMS];
static unsigned int num_ports;
static int           irqs[SI_MAX_PARMS];
static unsigned int num_irqs;
static int           regspacings[SI_MAX_PARMS];
static unsigned int num_regspacings;
static int           regsizes[SI_MAX_PARMS];
static unsigned int num_regsizes;
static int           regshifts[SI_MAX_PARMS];
static unsigned int num_regshifts;
static int slave_addrs[SI_MAX_PARMS];
static unsigned int num_slave_addrs;
#define IPMI_IO_ADDR_SPACE  0
#define IPMI_MEM_ADDR_SPACE 1
static char *addr_space_to_str[] = ;
static int hotmod_handler(const char *val, struct kernel_param *kp);
module_param_call(hotmod, hotmod_handler, NULL, NULL, 0200);
MODULE_PARM_DESC(hotmod, "Add and remove interfaces.  See"
" Documentation/IPMI.txt in the kernel sources for the"
" gory details.");
module_param_named(trydefaults, si_trydefaults, bool, 0);
MODULE_PARM_DESC(trydefaults, "Setting this to 'false' will disable the"
" default scan of the KCS and SMIC interface at the standard"
" address");
module_param_string(type, si_type_str, MAX_SI_TYPE_STR, 0);
MODULE_PARM_DESC(type, "Defines the type of each interface, each"
" interface separated by commas.  The types are 'kcs',"
" 'smic', and 'bt'.  For example si_type=kcs,bt will set"
" the first interface to kcs and the second to bt");
module_param_array(addrs, ulong, &num_addrs, 0);
MODULE_PARM_DESC(addrs, "Sets the memory address of each interface, the"
" addresses separated by commas.  Only use if an interface"
" is in memory.  Otherwise, set it to zero or leave"
" it blank.");
module_param_array(ports, uint, &num_ports, 0);
MODULE_PARM_DESC(ports, "Sets the port address of each interface, the"
" addresses separated by commas.  Only use if an interface"
" is a port.  Otherwise, set it to zero or leave"
" it blank.");
module_param_array(irqs, int, &num_irqs, 0);
MODULE_PARM_DESC(irqs, "Sets the interrupt of each interface, the"
" addresses separated by commas.  Only use if an interface"
" has an interrupt.  Otherwise, set it to zero or leave"
" it blank.");
module_param_array(regspacings, int, &num_regspacings, 0);
MODULE_PARM_DESC(regspacings, "The number of bytes between the start address"
" and each successive register used by the interface.  For"
" instance, if the start address is 0xca2 and the spacing"
" is 2, then the second address is at 0xca4.  Defaults"
" to 1.");
module_param_array(regsizes, int, &num_regsizes, 0);
MODULE_PARM_DESC(regsizes, "The size of the specific IPMI register in bytes."
" This should generally be 1, 2, 4, or 8 for an 8-bit,"
" 16-bit, 32-bit, or 64-bit register.  Use this if you"
" the 8-bit IPMI register has to be read from a larger"
" register.");
module_param_array(regshifts, int, &num_regshifts, 0);
MODULE_PARM_DESC(regshifts, "The amount to shift the data read from the."
" IPMI register, in bits.  For instance, if the data"
" is read from a 32-bit word and the IPMI data is in"
" bit 8-15, then the shift would be 8");
module_param_array(slave_addrs, int, &num_slave_addrs, 0);
MODULE_PARM_DESC(slave_addrs, "Set the default IPMB slave address for"
" the controller.  Normally this is 0x20, but can be"
" overridden by this parm.  This is an array indexed"
" by interface number.");
module_param_array(force_kipmid, int, &num_force_kipmid, 0);
MODULE_PARM_DESC(force_kipmid, "Force the kipmi daemon to be enabled (1) or"
" disabled(0).  Normally the IPMI driver auto-detects"
" this, but the value may be overridden by this parm.");
module_param(unload_when_empty, int, 0);
MODULE_PARM_DESC(unload_when_empty, "Unload the module if no interfaces are"
" specified or found, default is 1.  Setting to 0"
" is useful for hot add of devices using hotmod.");
module_param_array(kipmid_max_busy_us, uint, &num_max_busy_us, 0644);
MODULE_PARM_DESC(kipmid_max_busy_us,
"Max time (in microseconds) to busy-wait for IPMI data before"
" sleeping. 0 (default) means to wait forever. Set to 100-500"
" if kipmid is using up a lot of CPU time.");
static void std_irq_cleanup(struct smi_info *info)
static int std_irq_setup(struct smi_info *info)
static unsigned char port_inb(struct si_sm_io *io, unsigned int offset)
static void port_outb(struct si_sm_io *io, unsigned int offset,
unsigned char b)
static unsigned char port_inw(struct si_sm_io *io, unsigned int offset)
static void port_outw(struct si_sm_io *io, unsigned int offset,
unsigned char b)
static unsigned char port_inl(struct si_sm_io *io, unsigned int offset)
static void port_outl(struct si_sm_io *io, unsigned int offset,
unsigned char b)
static void port_cleanup(struct smi_info *info)
static int port_setup(struct smi_info *info)
static unsigned char intf_mem_inb(struct si_sm_io *io, unsigned int offset)
static void intf_mem_outb(struct si_sm_io *io, unsigned int offset,
unsigned char b)
static unsigned char intf_mem_inw(struct si_sm_io *io, unsigned int offset)
static void intf_mem_outw(struct si_sm_io *io, unsigned int offset,
unsigned char b)
static unsigned char intf_mem_inl(struct si_sm_io *io, unsigned int offset)
static void intf_mem_outl(struct si_sm_io *io, unsigned int offset,
unsigned char b)
static unsigned char mem_inq(struct si_sm_io *io, unsigned int offset)
static void mem_outq(struct si_sm_io *io, unsigned int offset,
unsigned char b)
static void mem_cleanup(struct smi_info *info)
static int mem_setup(struct smi_info *info)
enum hotmod_op ;
struct hotmod_vals ;
static struct hotmod_vals hotmod_ops[] = ;
static struct hotmod_vals hotmod_si[] = ;
static struct hotmod_vals hotmod_as[] = ;
static int parse_str(struct hotmod_vals *v, int *val, char *name, char **curr)
static int check_hotmod_int_op(const char *curr, const char *option,
const char *name, int *val)
static struct smi_info *smi_info_alloc(void)
static int hotmod_handler(const char *val, struct kernel_param *kp)
static int __devinit hardcode_find_bmc(void)
static int acpi_failure;
static u32 ipmi_acpi_gpe(acpi_handle gpe_device,
u32 gpe_number, void *context)
static void acpi_gpe_irq_cleanup(struct smi_info *info)
static int acpi_gpe_irq_setup(struct smi_info *info)
struct SPMITable ;
static int __devinit try_init_spmi(struct SPMITable *spmi)
static void __devinit spmi_find_bmc(void)
static int __devinit ipmi_pnp_probe(struct pnp_dev *dev,
const struct pnp_device_id *dev_id)
static void __devexit ipmi_pnp_remove(struct pnp_dev *dev)
static const struct pnp_device_id pnp_dev_table[] = ;
static struct pnp_driver ipmi_pnp_driver = ;
struct dmi_ipmi_data ;
static int __devinit decode_dmi(const struct dmi_header *dm,
struct dmi_ipmi_data *dmi)
static void __devinit try_init_dmi(struct dmi_ipmi_data *ipmi_data)
static void __devinit dmi_find_bmc(void)
#define PCI_ERMC_CLASSCODE		0x0C0700
#define PCI_ERMC_CLASSCODE_MASK		0xffffff00
#define PCI_ERMC_CLASSCODE_TYPE_MASK	0xff
#define PCI_ERMC_CLASSCODE_TYPE_SMIC	0x00
#define PCI_ERMC_CLASSCODE_TYPE_KCS	0x01
#define PCI_ERMC_CLASSCODE_TYPE_BT	0x02
#define PCI_HP_VENDOR_ID    0x103C
#define PCI_MMC_DEVICE_ID   0x121A
#define PCI_MMC_ADDR_CW     0x10
static void ipmi_pci_cleanup(struct smi_info *info)
static int __devinit ipmi_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit ipmi_pci_remove(struct pci_dev *pdev)
static int ipmi_pci_suspend(struct pci_dev *pdev, pm_message_t state)
static int ipmi_pci_resume(struct pci_dev *pdev)
static struct pci_device_id ipmi_pci_devices[] = ;
MODULE_DEVICE_TABLE(pci, ipmi_pci_devices);
static struct pci_driver ipmi_pci_driver = ;
static struct of_device_id ipmi_match[];
static int __devinit ipmi_probe(struct platform_device *dev)
static int __devexit ipmi_remove(struct platform_device *dev)
static struct of_device_id ipmi_match[] =
;
static struct platform_driver ipmi_driver = ;
static int wait_for_msg_done(struct smi_info *smi_info)
static int try_get_dev_id(struct smi_info *smi_info)
static int try_enable_event_buffer(struct smi_info *smi_info)
static int smi_type_proc_show(struct seq_file *m, void *v)
static int smi_type_proc_open(struct inode *inode, struct file *file)
static const struct file_operations smi_type_proc_ops = ;
static int smi_si_stats_proc_show(struct seq_file *m, void *v)
static int smi_si_stats_proc_open(struct inode *inode, struct file *file)
static const struct file_operations smi_si_stats_proc_ops = ;
static int smi_params_proc_show(struct seq_file *m, void *v)
static int smi_params_proc_open(struct inode *inode, struct file *file)
static const struct file_operations smi_params_proc_ops = ;
static int oem_data_avail_to_receive_msg_avail(struct smi_info *smi_info)
#define DELL_POWEREDGE_8G_BMC_DEVICE_ID  0x20
#define DELL_POWEREDGE_8G_BMC_DEVICE_REV 0x80
#define DELL_POWEREDGE_8G_BMC_IPMI_VERSION 0x51
#define DELL_IANA_MFR_ID 0x0002a2
static void setup_dell_poweredge_oem_data_handler(struct smi_info *smi_info)
#define CANNOT_RETURN_REQUESTED_LENGTH 0xCA
static void return_hosed_msg_badsize(struct smi_info *smi_info)
#define STORAGE_NETFN 0x0A
#define STORAGE_CMD_GET_SDR 0x23
static int dell_poweredge_bt_xaction_handler(struct notifier_block *self,
unsigned long unused,
void *in)
static struct notifier_block dell_poweredge_bt_xaction_notifier = ;
static void
setup_dell_poweredge_bt_xaction_handler(struct smi_info *smi_info)
static void setup_oem_data_handler(struct smi_info *smi_info)
static void setup_xaction_handlers(struct smi_info *smi_info)
static inline void wait_for_timer_and_thread(struct smi_info *smi_info)
static __devinitdata struct ipmi_default_vals
ipmi_defaults[] =
;
static void __devinit default_find_bmc(void)
static int is_new_interface(struct smi_info *info)
static int add_smi(struct smi_info *new_smi)
static int try_smi_init(struct smi_info *new_smi)
static int __devinit init_ipmi_si(void)
module_init(init_ipmi_si);
static void cleanup_one_si(struct smi_info *to_clean)
static void cleanup_ipmi_si(void)
module_exit(cleanup_ipmi_si);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Corey Minyard <minyard@mvista.com>");
MODULE_DESCRIPTION("Interface to the IPMI driver for the KCS, SMIC, and BT"
" system interfaces.");
