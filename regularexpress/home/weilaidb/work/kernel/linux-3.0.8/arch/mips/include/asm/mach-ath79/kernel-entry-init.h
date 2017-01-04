#define __ASM_MACH_ATH79_KERNEL_ENTRY_H
.macro	kernel_entry_setup
mfc0	t0, CP0_CONFIG
li	t1, ~CONF_CM_CMASK
and	t0, t1
ori	t0, CONF_CM_CACHABLE_NONCOHERENT
mtc0	t0, CP0_CONFIG
nop
.endm
.macro	smp_slave_setup
.endm
