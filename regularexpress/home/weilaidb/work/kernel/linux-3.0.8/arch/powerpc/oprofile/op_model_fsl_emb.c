static unsigned long reset_value[OP_MAX_COUNTER];
static int num_counters;
static int oprofile_running;
static inline u32 get_pmlca(int ctr)
static inline void set_pmlca(int ctr, u32 pmlca)
static inline unsigned int ctr_read(unsigned int i)
static inline void ctr_write(unsigned int i, unsigned int val)
static void init_pmc_stop(int ctr)
static void set_pmc_event(int ctr, int event)
static void set_pmc_user_kernel(int ctr, int user, int kernel)
static void set_pmc_marked(int ctr, int mark0, int mark1)
static void pmc_start_ctr(int ctr, int enable)
static void pmc_start_ctrs(int enable)
static void pmc_stop_ctrs(void)
static int fsl_emb_cpu_setup(struct op_counter_config *ctr)
static int fsl_emb_reg_setup(struct op_counter_config *ctr,
struct op_system_config *sys,
int num_ctrs)
static int fsl_emb_start(struct op_counter_config *ctr)
static void fsl_emb_stop(void)
static void fsl_emb_handle_interrupt(struct pt_regs *regs,
struct op_counter_config *ctr)
struct op_powerpc_model op_model_fsl_emb = ;
