#define _ASM_POWERPC_OPROFILE_IMPL_H
#define OP_MAX_COUNTER 8
struct op_counter_config ;
struct op_system_config ;
struct op_powerpc_model ;
extern struct op_powerpc_model op_model_fsl_emb;
extern struct op_powerpc_model op_model_rs64;
extern struct op_powerpc_model op_model_power4;
extern struct op_powerpc_model op_model_7450;
extern struct op_powerpc_model op_model_cell;
extern struct op_powerpc_model op_model_pa6t;
static inline unsigned int classic_ctr_read(unsigned int i)
static inline void classic_ctr_write(unsigned int i, unsigned int val)
extern void op_powerpc_backtrace(struct pt_regs * const regs, unsigned int depth);
