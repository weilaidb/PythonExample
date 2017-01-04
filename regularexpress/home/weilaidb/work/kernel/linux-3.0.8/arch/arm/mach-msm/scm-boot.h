#define __MACH_SCM_BOOT_H
#define SCM_BOOT_ADDR			0x1
#define SCM_FLAG_COLDBOOT_CPU1		0x1
#define SCM_FLAG_WARMBOOT_CPU1		0x2
#define SCM_FLAG_WARMBOOT_CPU0		0x4
int scm_set_boot_addr(phys_addr_t addr, int flags);
