#define OP_X86_MODEL_H
struct op_msr ;
struct op_msrs ;
struct pt_regs;
struct oprofile_operations;
struct op_x86_model_spec ;
struct op_counter_config;
static inline void op_x86_warn_in_use(int counter)
static inline void op_x86_warn_reserved(int counter)
extern u64 op_x86_get_ctrl(struct op_x86_model_spec const *model,
struct op_counter_config *counter_config);
extern int op_x86_phys_to_virt(int phys);
extern int op_x86_virt_to_phys(int virt);
extern struct op_x86_model_spec op_ppro_spec;
extern struct op_x86_model_spec op_p4_spec;
extern struct op_x86_model_spec op_p4_ht2_spec;
extern struct op_x86_model_spec op_amd_spec;
extern struct op_x86_model_spec op_arch_perfmon_spec;
