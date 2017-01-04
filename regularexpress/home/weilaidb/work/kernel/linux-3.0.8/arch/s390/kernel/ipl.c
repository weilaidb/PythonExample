#define IPL_PARM_BLOCK_VERSION 0
#define IPL_UNKNOWN_STR		"unknown"
#define IPL_CCW_STR		"ccw"
#define IPL_FCP_STR		"fcp"
#define IPL_FCP_DUMP_STR	"fcp_dump"
#define IPL_NSS_STR		"nss"
#define DUMP_CCW_STR		"ccw"
#define DUMP_FCP_STR		"fcp"
#define DUMP_NONE_STR		"none"
#define ON_PANIC_STR		"on_panic"
#define ON_HALT_STR		"on_halt"
#define ON_POFF_STR		"on_poff"
#define ON_REIPL_STR		"on_reboot"
struct shutdown_action;
struct shutdown_trigger ;
#define SHUTDOWN_ACTION_IPL_STR		"ipl"
#define SHUTDOWN_ACTION_REIPL_STR	"reipl"
#define SHUTDOWN_ACTION_DUMP_STR	"dump"
#define SHUTDOWN_ACTION_VMCMD_STR	"vmcmd"
#define SHUTDOWN_ACTION_STOP_STR	"stop"
#define SHUTDOWN_ACTION_DUMP_REIPL_STR	"dump_reipl"
struct shutdown_action ;
static char *ipl_type_str(enum ipl_type type)
enum dump_type ;
static char *dump_type_str(enum dump_type type)
static u16 ipl_devno __attribute__((__section__(".data"))) = 0;
u32 ipl_flags __attribute__((__section__(".data"))) = 0;
enum ipl_method ;
enum dump_method ;
static int diag308_set_works = 0;
static struct ipl_parameter_block ipl_block;
static int reipl_capabilities = IPL_TYPE_UNKNOWN;
static enum ipl_type reipl_type = IPL_TYPE_UNKNOWN;
static enum ipl_method reipl_method = REIPL_METHOD_DEFAULT;
static struct ipl_parameter_block *reipl_block_fcp;
static struct ipl_parameter_block *reipl_block_ccw;
static struct ipl_parameter_block *reipl_block_nss;
static struct ipl_parameter_block *reipl_block_actual;
static int dump_capabilities = DUMP_TYPE_NONE;
static enum dump_type dump_type = DUMP_TYPE_NONE;
static enum dump_method dump_method = DUMP_METHOD_NONE;
static struct ipl_parameter_block *dump_block_fcp;
static struct ipl_parameter_block *dump_block_ccw;
static struct sclp_ipl_info sclp_ipl_info;
int diag308(unsigned long subcode, void *addr)
EXPORT_SYMBOL_GPL(diag308);
#define DEFINE_IPL_ATTR_RO(_prefix, _name, _format, _value)		\
static ssize_t sys_##_prefix##_##_name##_show(struct kobject *kobj,	\
struct kobj_attribute *attr,				\
char *page)						\
\
static struct kobj_attribute sys_##_prefix##_##_name##_attr =		\
__ATTR(_name, S_IRUGO, sys_##_prefix##_##_name##_show, NULL);
#define DEFINE_IPL_ATTR_RW(_prefix, _name, _fmt_out, _fmt_in, _value)	\
static ssize_t sys_##_prefix##_##_name##_show(struct kobject *kobj,	\
struct kobj_attribute *attr,				\
char *page)						\
\
static ssize_t sys_##_prefix##_##_name##_store(struct kobject *kobj,	\
struct kobj_attribute *attr,				\
const char *buf, size_t len)				\
\
static struct kobj_attribute sys_##_prefix##_##_name##_attr =		\
__ATTR(_name,(S_IRUGO | S_IWUSR),				\
sys_##_prefix##_##_name##_show,			\
sys_##_prefix##_##_name##_store);
#define DEFINE_IPL_ATTR_STR_RW(_prefix, _name, _fmt_out, _fmt_in, _value)\
static ssize_t sys_##_prefix##_##_name##_show(struct kobject *kobj,	\
struct kobj_attribute *attr,				\
char *page)						\
\
static ssize_t sys_##_prefix##_##_name##_store(struct kobject *kobj,	\
struct kobj_attribute *attr,				\
const char *buf, size_t len)				\
\
static struct kobj_attribute sys_##_prefix##_##_name##_attr =		\
__ATTR(_name,(S_IRUGO | S_IWUSR),				\
sys_##_prefix##_##_name##_show,			\
sys_##_prefix##_##_name##_store);
static void make_attrs_ro(struct attribute **attrs)
static __init enum ipl_type get_ipl_type(void)
struct ipl_info ipl_info;
EXPORT_SYMBOL_GPL(ipl_info);
static ssize_t ipl_type_show(struct kobject *kobj, struct kobj_attribute *attr,
char *page)
static struct kobj_attribute sys_ipl_type_attr = __ATTR_RO(ipl_type);
size_t reipl_get_ascii_vmparm(char *dest, size_t size,
const struct ipl_parameter_block *ipb)
size_t append_ipl_vmparm(char *dest, size_t size)
static ssize_t ipl_vm_parm_show(struct kobject *kobj,
struct kobj_attribute *attr, char *page)
static size_t scpdata_length(const char* buf, size_t count)
size_t reipl_append_ascii_scpdata(char *dest, size_t size,
const struct ipl_parameter_block *ipb)
size_t append_ipl_scpdata(char *dest, size_t len)
static struct kobj_attribute sys_ipl_vm_parm_attr =
__ATTR(parm, S_IRUGO, ipl_vm_parm_show, NULL);
static ssize_t sys_ipl_device_show(struct kobject *kobj,
struct kobj_attribute *attr, char *page)
static struct kobj_attribute sys_ipl_device_attr =
__ATTR(device, S_IRUGO, sys_ipl_device_show, NULL);
static ssize_t ipl_parameter_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static struct bin_attribute ipl_parameter_attr = ;
static ssize_t ipl_scp_data_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr, char *buf,
loff_t off, size_t count)
static struct bin_attribute ipl_scp_data_attr = ;
DEFINE_IPL_ATTR_RO(ipl_fcp, wwpn, "0x%016llx\n", (unsigned long long)
IPL_PARMBLOCK_START->ipl_info.fcp.wwpn);
DEFINE_IPL_ATTR_RO(ipl_fcp, lun, "0x%016llx\n", (unsigned long long)
IPL_PARMBLOCK_START->ipl_info.fcp.lun);
DEFINE_IPL_ATTR_RO(ipl_fcp, bootprog, "%lld\n", (unsigned long long)
IPL_PARMBLOCK_START->ipl_info.fcp.bootprog);
DEFINE_IPL_ATTR_RO(ipl_fcp, br_lba, "%lld\n", (unsigned long long)
IPL_PARMBLOCK_START->ipl_info.fcp.br_lba);
static struct attribute *ipl_fcp_attrs[] = ;
static struct attribute_group ipl_fcp_attr_group = ;
static ssize_t ipl_ccw_loadparm_show(struct kobject *kobj,
struct kobj_attribute *attr, char *page)
static struct kobj_attribute sys_ipl_ccw_loadparm_attr =
__ATTR(loadparm, 0444, ipl_ccw_loadparm_show, NULL);
static struct attribute *ipl_ccw_attrs_vm[] = ;
static struct attribute *ipl_ccw_attrs_lpar[] = ;
static struct attribute_group ipl_ccw_attr_group_vm = ;
static struct attribute_group ipl_ccw_attr_group_lpar = ;
DEFINE_IPL_ATTR_RO(ipl_nss, name, "%s\n", kernel_nss_name);
static struct attribute *ipl_nss_attrs[] = ;
static struct attribute_group ipl_nss_attr_group = ;
static struct attribute *ipl_unknown_attrs[] = ;
static struct attribute_group ipl_unknown_attr_group = ;
static struct kset *ipl_kset;
static int __init ipl_register_fcp_files(void)
static void __ipl_run(void *unused)
static void ipl_run(struct shutdown_trigger *trigger)
static int __init ipl_init(void)
static struct shutdown_action __refdata ipl_action = ;
static ssize_t reipl_generic_vmparm_show(struct ipl_parameter_block *ipb,
char *page)
static ssize_t reipl_generic_vmparm_store(struct ipl_parameter_block *ipb,
size_t vmparm_max,
const char *buf, size_t len)
static ssize_t reipl_nss_vmparm_show(struct kobject *kobj,
struct kobj_attribute *attr, char *page)
static ssize_t reipl_nss_vmparm_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t len)
static ssize_t reipl_ccw_vmparm_show(struct kobject *kobj,
struct kobj_attribute *attr, char *page)
static ssize_t reipl_ccw_vmparm_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t len)
static struct kobj_attribute sys_reipl_nss_vmparm_attr =
__ATTR(parm, S_IRUGO | S_IWUSR, reipl_nss_vmparm_show,
reipl_nss_vmparm_store);
static struct kobj_attribute sys_reipl_ccw_vmparm_attr =
__ATTR(parm, S_IRUGO | S_IWUSR, reipl_ccw_vmparm_show,
reipl_ccw_vmparm_store);
static ssize_t reipl_fcp_scpdata_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
char *buf, loff_t off, size_t count)
static ssize_t reipl_fcp_scpdata_write(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute sys_reipl_fcp_scp_data_attr = ;
DEFINE_IPL_ATTR_RW(reipl_fcp, wwpn, "0x%016llx\n", "%016llx\n",
reipl_block_fcp->ipl_info.fcp.wwpn);
DEFINE_IPL_ATTR_RW(reipl_fcp, lun, "0x%016llx\n", "%016llx\n",
reipl_block_fcp->ipl_info.fcp.lun);
DEFINE_IPL_ATTR_RW(reipl_fcp, bootprog, "%lld\n", "%lld\n",
reipl_block_fcp->ipl_info.fcp.bootprog);
DEFINE_IPL_ATTR_RW(reipl_fcp, br_lba, "%lld\n", "%lld\n",
reipl_block_fcp->ipl_info.fcp.br_lba);
DEFINE_IPL_ATTR_RW(reipl_fcp, device, "0.0.%04llx\n", "0.0.%llx\n",
reipl_block_fcp->ipl_info.fcp.devno);
static struct attribute *reipl_fcp_attrs[] = ;
static struct attribute_group reipl_fcp_attr_group = ;
DEFINE_IPL_ATTR_RW(reipl_ccw, device, "0.0.%04llx\n", "0.0.%llx\n",
reipl_block_ccw->ipl_info.ccw.devno);
static void reipl_get_ascii_loadparm(char *loadparm,
struct ipl_parameter_block *ibp)
static ssize_t reipl_generic_loadparm_show(struct ipl_parameter_block *ipb,
char *page)
static ssize_t reipl_generic_loadparm_store(struct ipl_parameter_block *ipb,
const char *buf, size_t len)
static ssize_t reipl_nss_loadparm_show(struct kobject *kobj,
struct kobj_attribute *attr, char *page)
static ssize_t reipl_nss_loadparm_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t len)
static ssize_t reipl_ccw_loadparm_show(struct kobject *kobj,
struct kobj_attribute *attr, char *page)
static ssize_t reipl_ccw_loadparm_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t len)
static struct kobj_attribute sys_reipl_ccw_loadparm_attr =
__ATTR(loadparm, S_IRUGO | S_IWUSR, reipl_ccw_loadparm_show,
reipl_ccw_loadparm_store);
static struct attribute *reipl_ccw_attrs_vm[] = ;
static struct attribute *reipl_ccw_attrs_lpar[] = ;
static struct attribute_group reipl_ccw_attr_group_vm = ;
static struct attribute_group reipl_ccw_attr_group_lpar = ;
static void reipl_get_ascii_nss_name(char *dst,
struct ipl_parameter_block *ipb)
static ssize_t reipl_nss_name_show(struct kobject *kobj,
struct kobj_attribute *attr, char *page)
static ssize_t reipl_nss_name_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t len)
static struct kobj_attribute sys_reipl_nss_name_attr =
__ATTR(name, S_IRUGO | S_IWUSR, reipl_nss_name_show,
reipl_nss_name_store);
static struct kobj_attribute sys_reipl_nss_loadparm_attr =
__ATTR(loadparm, S_IRUGO | S_IWUSR, reipl_nss_loadparm_show,
reipl_nss_loadparm_store);
static struct attribute *reipl_nss_attrs[] = ;
static struct attribute_group reipl_nss_attr_group = ;
static int reipl_set_type(enum ipl_type type)
static ssize_t reipl_type_show(struct kobject *kobj,
struct kobj_attribute *attr, char *page)
static ssize_t reipl_type_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t len)
static struct kobj_attribute reipl_type_attr =
__ATTR(reipl_type, 0644, reipl_type_show, reipl_type_store);
static struct kset *reipl_kset;
static struct kset *reipl_fcp_kset;
static void get_ipl_string(char *dst, struct ipl_parameter_block *ipb,
const enum ipl_method m)
static void __reipl_run(void *unused)
static void reipl_run(struct shutdown_trigger *trigger)
static void reipl_block_ccw_init(struct ipl_parameter_block *ipb)
static void reipl_block_ccw_fill_parms(struct ipl_parameter_block *ipb)
static int __init reipl_nss_init(void)
static int __init reipl_ccw_init(void)
static int __init reipl_fcp_init(void)
static int __init reipl_init(void)
static struct shutdown_action __refdata reipl_action = ;
DEFINE_IPL_ATTR_RW(dump_fcp, wwpn, "0x%016llx\n", "%016llx\n",
dump_block_fcp->ipl_info.fcp.wwpn);
DEFINE_IPL_ATTR_RW(dump_fcp, lun, "0x%016llx\n", "%016llx\n",
dump_block_fcp->ipl_info.fcp.lun);
DEFINE_IPL_ATTR_RW(dump_fcp, bootprog, "%lld\n", "%lld\n",
dump_block_fcp->ipl_info.fcp.bootprog);
DEFINE_IPL_ATTR_RW(dump_fcp, br_lba, "%lld\n", "%lld\n",
dump_block_fcp->ipl_info.fcp.br_lba);
DEFINE_IPL_ATTR_RW(dump_fcp, device, "0.0.%04llx\n", "0.0.%llx\n",
dump_block_fcp->ipl_info.fcp.devno);
static struct attribute *dump_fcp_attrs[] = ;
static struct attribute_group dump_fcp_attr_group = ;
DEFINE_IPL_ATTR_RW(dump_ccw, device, "0.0.%04llx\n", "0.0.%llx\n",
dump_block_ccw->ipl_info.ccw.devno);
static struct attribute *dump_ccw_attrs[] = ;
static struct attribute_group dump_ccw_attr_group = ;
static int dump_set_type(enum dump_type type)
static ssize_t dump_type_show(struct kobject *kobj,
struct kobj_attribute *attr, char *page)
static ssize_t dump_type_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t len)
static struct kobj_attribute dump_type_attr =
__ATTR(dump_type, 0644, dump_type_show, dump_type_store);
static struct kset *dump_kset;
static void __dump_run(void *unused)
static void dump_run(struct shutdown_trigger *trigger)
static int __init dump_ccw_init(void)
static int __init dump_fcp_init(void)
static int __init dump_init(void)
static struct shutdown_action __refdata dump_action = ;
static void dump_reipl_run(struct shutdown_trigger *trigger)
static int __init dump_reipl_init(void)
static struct shutdown_action __refdata dump_reipl_action = ;
static char vmcmd_on_reboot[128];
static char vmcmd_on_panic[128];
static char vmcmd_on_halt[128];
static char vmcmd_on_poff[128];
DEFINE_IPL_ATTR_STR_RW(vmcmd, on_reboot, "%s\n", "%s\n", vmcmd_on_reboot);
DEFINE_IPL_ATTR_STR_RW(vmcmd, on_panic, "%s\n", "%s\n", vmcmd_on_panic);
DEFINE_IPL_ATTR_STR_RW(vmcmd, on_halt, "%s\n", "%s\n", vmcmd_on_halt);
DEFINE_IPL_ATTR_STR_RW(vmcmd, on_poff, "%s\n", "%s\n", vmcmd_on_poff);
static struct attribute *vmcmd_attrs[] = ;
static struct attribute_group vmcmd_attr_group = ;
static struct kset *vmcmd_kset;
static void vmcmd_run(struct shutdown_trigger *trigger)
static int vmcmd_init(void)
static struct shutdown_action vmcmd_action = ;
static void stop_run(struct shutdown_trigger *trigger)
static struct shutdown_action stop_action = ;
static struct shutdown_action *shutdown_actions_list[] = ;
#define SHUTDOWN_ACTIONS_COUNT (sizeof(shutdown_actions_list) / sizeof(void *))
static struct kset *shutdown_actions_kset;
static int set_trigger(const char *buf, struct shutdown_trigger *trigger,
size_t len)
static struct shutdown_trigger on_reboot_trigger = ;
static ssize_t on_reboot_show(struct kobject *kobj,
struct kobj_attribute *attr, char *page)
static ssize_t on_reboot_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t len)
static struct kobj_attribute on_reboot_attr =
__ATTR(on_reboot, 0644, on_reboot_show, on_reboot_store);
static void do_machine_restart(char *__unused)
void (*_machine_restart)(char *command) = do_machine_restart;
static struct shutdown_trigger on_panic_trigger = ;
static ssize_t on_panic_show(struct kobject *kobj,
struct kobj_attribute *attr, char *page)
static ssize_t on_panic_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t len)
static struct kobj_attribute on_panic_attr =
__ATTR(on_panic, 0644, on_panic_show, on_panic_store);
static void do_panic(void)
static struct shutdown_trigger on_halt_trigger = ;
static ssize_t on_halt_show(struct kobject *kobj,
struct kobj_attribute *attr, char *page)
static ssize_t on_halt_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t len)
static struct kobj_attribute on_halt_attr =
__ATTR(on_halt, 0644, on_halt_show, on_halt_store);
static void do_machine_halt(void)
void (*_machine_halt)(void) = do_machine_halt;
static struct shutdown_trigger on_poff_trigger = ;
static ssize_t on_poff_show(struct kobject *kobj,
struct kobj_attribute *attr, char *page)
static ssize_t on_poff_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t len)
static struct kobj_attribute on_poff_attr =
__ATTR(on_poff, 0644, on_poff_show, on_poff_store);
static void do_machine_power_off(void)
void (*_machine_power_off)(void) = do_machine_power_off;
static void __init shutdown_triggers_init(void)
static void __init shutdown_actions_init(void)
static int __init s390_ipl_init(void)
__initcall(s390_ipl_init);
static void __init strncpy_skip_quote(char *dst, char *src, int n)
static int __init vmcmd_on_reboot_setup(char *str)
__setup("vmreboot=", vmcmd_on_reboot_setup);
static int __init vmcmd_on_panic_setup(char *str)
__setup("vmpanic=", vmcmd_on_panic_setup);
static int __init vmcmd_on_halt_setup(char *str)
__setup("vmhalt=", vmcmd_on_halt_setup);
static int __init vmcmd_on_poff_setup(char *str)
__setup("vmpoff=", vmcmd_on_poff_setup);
static int on_panic_notify(struct notifier_block *self,
unsigned long event, void *data)
static struct notifier_block on_panic_nb = ;
void __init setup_ipl(void)
void __init ipl_update_parameters(void)
void __init ipl_save_parameters(void)
static LIST_HEAD(rcall);
static DEFINE_MUTEX(rcall_mutex);
void register_reset_call(struct reset_call *reset)
EXPORT_SYMBOL_GPL(register_reset_call);
void unregister_reset_call(struct reset_call *reset)
EXPORT_SYMBOL_GPL(unregister_reset_call);
static void do_reset_calls(void)
u32 dump_prefix_page;
void s390_reset_system(void)
