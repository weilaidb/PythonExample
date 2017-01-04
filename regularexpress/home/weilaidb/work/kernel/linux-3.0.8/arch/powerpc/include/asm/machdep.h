#define _ASM_POWERPC_MACHDEP_H
#define CONFIG_PPC_HAS_FEATURE_CALLS
struct pt_regs;
struct pci_bus;
struct device_node;
struct iommu_table;
struct rtc_time;
struct file;
struct pci_controller;
struct kimage;
struct machdep_calls ;
extern void e500_idle(void);
extern void power4_idle(void);
extern void power7_idle(void);
extern void ppc6xx_idle(void);
extern void book3e_idle(void);
extern struct machdep_calls ppc_md;
extern struct machdep_calls *machine_id;
#define __machine_desc __attribute__ ((__section__ (".machine.desc")))
#define define_machine(name)					\
extern struct machdep_calls mach_##name;		\
EXPORT_SYMBOL(mach_##name);				\
struct machdep_calls mach_##name __machine_desc =
#define machine_is(name) \
()
extern void probe_machine(void);
extern char cmd_line[COMMAND_LINE_SIZE];
typedef enum sys_ctrler_kind  sys_ctrler_t;
extern sys_ctrler_t sys_ctrler;
void ppc64_boot_msg(unsigned int src, const char *msg);
static inline void log_error(char *buf, unsigned int err_type, int fatal)
#define __define_machine_initcall(mach,level,fn,id) \
static int __init __machine_initcall_##mach##_##fn(void)  \
__define_initcall(level,__machine_initcall_##mach##_##fn,id);
#define machine_core_initcall(mach,fn)		__define_machine_initcall(mach,"1",fn,1)
#define machine_core_initcall_sync(mach,fn)	__define_machine_initcall(mach,"1s",fn,1s)
#define machine_postcore_initcall(mach,fn)	__define_machine_initcall(mach,"2",fn,2)
#define machine_postcore_initcall_sync(mach,fn)	__define_machine_initcall(mach,"2s",fn,2s)
#define machine_arch_initcall(mach,fn)		__define_machine_initcall(mach,"3",fn,3)
#define machine_arch_initcall_sync(mach,fn)	__define_machine_initcall(mach,"3s",fn,3s)
#define machine_subsys_initcall(mach,fn)	__define_machine_initcall(mach,"4",fn,4)
#define machine_subsys_initcall_sync(mach,fn)	__define_machine_initcall(mach,"4s",fn,4s)
#define machine_fs_initcall(mach,fn)		__define_machine_initcall(mach,"5",fn,5)
#define machine_fs_initcall_sync(mach,fn)	__define_machine_initcall(mach,"5s",fn,5s)
#define machine_rootfs_initcall(mach,fn)	__define_machine_initcall(mach,"rootfs",fn,rootfs)
#define machine_device_initcall(mach,fn)	__define_machine_initcall(mach,"6",fn,6)
#define machine_device_initcall_sync(mach,fn)	__define_machine_initcall(mach,"6s",fn,6s)
#define machine_late_initcall(mach,fn)		__define_machine_initcall(mach,"7",fn,7)
#define machine_late_initcall_sync(mach,fn)	__define_machine_initcall(mach,"7s",fn,7s)
