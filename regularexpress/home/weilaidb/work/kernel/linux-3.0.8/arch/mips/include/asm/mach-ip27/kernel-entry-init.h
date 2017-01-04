#define __ASM_MACH_IP27_KERNEL_ENTRY_H
.macro GET_NASID_ASM res
dli	\res, LOCAL_HUB_ADDR(NI_STATUS_REV_ID)
ld	\res, (\res)
and	\res, NSRI_NODEID_MASK
dsrl	\res, NSRI_NODEID_SHFT
.endm
.macro	kernel_entry_setup
GET_NASID_ASM	t1
move		t2, t1			# text and data are here
MAPPED_KERNEL_SETUP_TLB
.endm
.macro	smp_slave_setup
GET_NASID_ASM	t1
dli	t0, KLDIR_OFFSET + (KLI_KERN_VARS * KLDIR_ENT_SIZE) + \
KLDIR_OFF_POINTER + CAC_BASE
dsll	t1, NASID_SHFT
or	t0, t0, t1
ld	t0, 0(t0)			# t0 points to kern_vars struct
lh	t1, KV_RO_NASID_OFFSET(t0)
lh	t2, KV_RW_NASID_OFFSET(t0)
MAPPED_KERNEL_SETUP_TLB
PTR_LA  t0, 0f
jr      t0
0:
.endm
