extern char ia64_set_b1, ia64_set_b2, ia64_set_b3, ia64_set_b4, ia64_set_b5;
struct illegal_op_return ;
#define unimplemented_virtual_address(va) (						\
((va) & local_cpu_data->unimpl_va_mask) != 0 &&					\
((va) & local_cpu_data->unimpl_va_mask) != local_cpu_data->unimpl_va_mask	\
)
#define unimplemented_physical_address(pa) (		\
((pa) & local_cpu_data->unimpl_pa_mask) != 0	\
)
struct illegal_op_return
ia64_emulate_brl (struct pt_regs *regs, unsigned long ar_ec)
