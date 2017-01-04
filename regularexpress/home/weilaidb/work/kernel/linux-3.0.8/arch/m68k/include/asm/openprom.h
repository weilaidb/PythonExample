#define __SPARC_OPENPROM_H
#define KADB_DEBUGGER_BEGVM     0x0fee0000
#define LINUX_OPPROM_BEGVM      0x0fef0000
#define LINUX_OPPROM_ENDVM      0x0ff10000
#define KADB_DEBUGGER_BEGVM     0xffc00000
#define	LINUX_OPPROM_BEGVM	0xffd00000
#define	LINUX_OPPROM_ENDVM	0xfff00000
#define	LINUX_OPPROM_MAGIC      0x10010407
struct linux_dev_v0_funcs ;
struct linux_dev_v2_funcs ;
struct linux_mlist_v0 ;
struct linux_mem_v0 ;
struct linux_arguments_v0 ;
struct linux_bootargs_v2 ;
#if defined(CONFIG_SUN3) || defined(CONFIG_SUN3X)
struct linux_romvec ;
struct linux_romvec ;
struct linux_nodeops ;
#define PROMREG_MAX     16
#define PROMVADDR_MAX   16
#define PROMINTR_MAX    15
struct linux_prom_registers ;
struct linux_prom_irqs ;
struct linux_prom_ranges ;
