#define _ASM_X86_XEN_HYPERCALL_H
extern struct  hypercall_page[];
#define __HYPERCALL		"call hypercall_page+%c[offset]"
#define __HYPERCALL_ENTRY(x)						\
[offset] "i" (__HYPERVISOR_##x * sizeof(hypercall_page[0]))
#define __HYPERCALL_RETREG	"eax"
#define __HYPERCALL_ARG1REG	"ebx"
#define __HYPERCALL_ARG2REG	"ecx"
#define __HYPERCALL_ARG3REG	"edx"
#define __HYPERCALL_ARG4REG	"esi"
#define __HYPERCALL_ARG5REG	"edi"
#define __HYPERCALL_RETREG	"rax"
#define __HYPERCALL_ARG1REG	"rdi"
#define __HYPERCALL_ARG2REG	"rsi"
#define __HYPERCALL_ARG3REG	"rdx"
#define __HYPERCALL_ARG4REG	"r10"
#define __HYPERCALL_ARG5REG	"r8"
#define __HYPERCALL_DECLS						\
register unsigned long __res  asm(__HYPERCALL_RETREG);		\
register unsigned long __arg1 asm(__HYPERCALL_ARG1REG) = __arg1; \
register unsigned long __arg2 asm(__HYPERCALL_ARG2REG) = __arg2; \
register unsigned long __arg3 asm(__HYPERCALL_ARG3REG) = __arg3; \
register unsigned long __arg4 asm(__HYPERCALL_ARG4REG) = __arg4; \
register unsigned long __arg5 asm(__HYPERCALL_ARG5REG) = __arg5;
#define __HYPERCALL_0PARAM	"=r" (__res)
#define __HYPERCALL_1PARAM	__HYPERCALL_0PARAM, "+r" (__arg1)
#define __HYPERCALL_2PARAM	__HYPERCALL_1PARAM, "+r" (__arg2)
#define __HYPERCALL_3PARAM	__HYPERCALL_2PARAM, "+r" (__arg3)
#define __HYPERCALL_4PARAM	__HYPERCALL_3PARAM, "+r" (__arg4)
#define __HYPERCALL_5PARAM	__HYPERCALL_4PARAM, "+r" (__arg5)
#define __HYPERCALL_0ARG()
#define __HYPERCALL_1ARG(a1)						\
__HYPERCALL_0ARG()		__arg1 = (unsigned long)(a1);
#define __HYPERCALL_2ARG(a1,a2)						\
__HYPERCALL_1ARG(a1)		__arg2 = (unsigned long)(a2);
#define __HYPERCALL_3ARG(a1,a2,a3)					\
__HYPERCALL_2ARG(a1,a2)		__arg3 = (unsigned long)(a3);
#define __HYPERCALL_4ARG(a1,a2,a3,a4)					\
__HYPERCALL_3ARG(a1,a2,a3)	__arg4 = (unsigned long)(a4);
#define __HYPERCALL_5ARG(a1,a2,a3,a4,a5)				\
__HYPERCALL_4ARG(a1,a2,a3,a4)	__arg5 = (unsigned long)(a5);
#define __HYPERCALL_CLOBBER5	"memory"
#define __HYPERCALL_CLOBBER4	__HYPERCALL_CLOBBER5, __HYPERCALL_ARG5REG
#define __HYPERCALL_CLOBBER3	__HYPERCALL_CLOBBER4, __HYPERCALL_ARG4REG
#define __HYPERCALL_CLOBBER2	__HYPERCALL_CLOBBER3, __HYPERCALL_ARG3REG
#define __HYPERCALL_CLOBBER1	__HYPERCALL_CLOBBER2, __HYPERCALL_ARG2REG
#define __HYPERCALL_CLOBBER0	__HYPERCALL_CLOBBER1, __HYPERCALL_ARG1REG
#define _hypercall0(type, name)						\
()
#define _hypercall1(type, name, a1)					\
()
#define _hypercall2(type, name, a1, a2)					\
()
#define _hypercall3(type, name, a1, a2, a3)				\
()
#define _hypercall4(type, name, a1, a2, a3, a4)				\
()
#define _hypercall5(type, name, a1, a2, a3, a4, a5)			\
()
static inline long
privcmd_call(unsigned call,
unsigned long a1, unsigned long a2,
unsigned long a3, unsigned long a4,
unsigned long a5)
static inline int
HYPERVISOR_set_trap_table(struct trap_info *table)
static inline int
HYPERVISOR_mmu_update(struct mmu_update *req, int count,
int *success_count, domid_t domid)
static inline int
HYPERVISOR_mmuext_op(struct mmuext_op *op, int count,
int *success_count, domid_t domid)
static inline int
HYPERVISOR_set_gdt(unsigned long *frame_list, int entries)
static inline int
HYPERVISOR_stack_switch(unsigned long ss, unsigned long esp)
static inline int
HYPERVISOR_set_callbacks(unsigned long event_selector,
unsigned long event_address,
unsigned long failsafe_selector,
unsigned long failsafe_address)
static inline int
HYPERVISOR_set_callbacks(unsigned long event_address,
unsigned long failsafe_address,
unsigned long syscall_address)
static inline int
HYPERVISOR_callback_op(int cmd, void *arg)
static inline int
HYPERVISOR_fpu_taskswitch(int set)
static inline int
HYPERVISOR_sched_op(int cmd, void *arg)
static inline long
HYPERVISOR_set_timer_op(u64 timeout)
static inline int
HYPERVISOR_set_debugreg(int reg, unsigned long value)
static inline unsigned long
HYPERVISOR_get_debugreg(int reg)
static inline int
HYPERVISOR_update_descriptor(u64 ma, u64 desc)
static inline int
HYPERVISOR_memory_op(unsigned int cmd, void *arg)
static inline int
HYPERVISOR_multicall(void *call_list, int nr_calls)
static inline int
HYPERVISOR_update_va_mapping(unsigned long va, pte_t new_val,
unsigned long flags)
static inline int
HYPERVISOR_event_channel_op(int cmd, void *arg)
static inline int
HYPERVISOR_xen_version(int cmd, void *arg)
static inline int
HYPERVISOR_console_io(int cmd, int count, char *str)
static inline int
HYPERVISOR_physdev_op(int cmd, void *arg)
static inline int
HYPERVISOR_grant_table_op(unsigned int cmd, void *uop, unsigned int count)
static inline int
HYPERVISOR_update_va_mapping_otherdomain(unsigned long va, pte_t new_val,
unsigned long flags, domid_t domid)
static inline int
HYPERVISOR_vm_assist(unsigned int cmd, unsigned int type)
static inline int
HYPERVISOR_vcpu_op(int cmd, int vcpuid, void *extra_args)
static inline int
HYPERVISOR_set_segment_base(int reg, unsigned long value)
static inline int
HYPERVISOR_suspend(unsigned long start_info_mfn)
static inline int
HYPERVISOR_nmi_op(unsigned long op, unsigned long arg)
static inline unsigned long __must_check
HYPERVISOR_hvm_op(int op, void *arg)
static inline int
HYPERVISOR_tmem_op(
struct tmem_op *op)
static inline void
MULTI_fpu_taskswitch(struct multicall_entry *mcl, int set)
static inline void
MULTI_update_va_mapping(struct multicall_entry *mcl, unsigned long va,
pte_t new_val, unsigned long flags)
static inline void
MULTI_grant_table_op(struct multicall_entry *mcl, unsigned int cmd,
void *uop, unsigned int count)
static inline void
MULTI_update_va_mapping_otherdomain(struct multicall_entry *mcl, unsigned long va,
pte_t new_val, unsigned long flags,
domid_t domid)
static inline void
MULTI_update_descriptor(struct multicall_entry *mcl, u64 maddr,
struct desc_struct desc)
static inline void
MULTI_memory_op(struct multicall_entry *mcl, unsigned int cmd, void *arg)
static inline void
MULTI_mmu_update(struct multicall_entry *mcl, struct mmu_update *req,
int count, int *success_count, domid_t domid)
static inline void
MULTI_mmuext_op(struct multicall_entry *mcl, struct mmuext_op *op, int count,
int *success_count, domid_t domid)
static inline void
MULTI_set_gdt(struct multicall_entry *mcl, unsigned long *frames, int entries)
static inline void
MULTI_stack_switch(struct multicall_entry *mcl,
unsigned long ss, unsigned long esp)
