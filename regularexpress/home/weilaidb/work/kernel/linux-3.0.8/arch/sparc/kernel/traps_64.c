struct tl1_traplog ;
static void dump_tl1_traplog(struct tl1_traplog *p)
void bad_trap(struct pt_regs *regs, long lvl)
void bad_trap_tl1(struct pt_regs *regs, long lvl)
void do_BUG(const char *file, int line)
EXPORT_SYMBOL(do_BUG);
static DEFINE_SPINLOCK(dimm_handler_lock);
static dimm_printer_t dimm_handler;
static int sprintf_dimm(int synd_code, unsigned long paddr, char *buf, int buflen)
int register_dimm_printer(dimm_printer_t func)
EXPORT_SYMBOL_GPL(register_dimm_printer);
void unregister_dimm_printer(dimm_printer_t func)
EXPORT_SYMBOL_GPL(unregister_dimm_printer);
void spitfire_insn_access_exception(struct pt_regs *regs, unsigned long sfsr, unsigned long sfar)
void spitfire_insn_access_exception_tl1(struct pt_regs *regs, unsigned long sfsr, unsigned long sfar)
void sun4v_insn_access_exception(struct pt_regs *regs, unsigned long addr, unsigned long type_ctx)
void sun4v_insn_access_exception_tl1(struct pt_regs *regs, unsigned long addr, unsigned long type_ctx)
void spitfire_data_access_exception(struct pt_regs *regs, unsigned long sfsr, unsigned long sfar)
void spitfire_data_access_exception_tl1(struct pt_regs *regs, unsigned long sfsr, unsigned long sfar)
void sun4v_data_access_exception(struct pt_regs *regs, unsigned long addr, unsigned long type_ctx)
void sun4v_data_access_exception_tl1(struct pt_regs *regs, unsigned long addr, unsigned long type_ctx)
static void spitfire_clean_and_reenable_l1_caches(void)
static void spitfire_enable_estate_errors(void)
static char ecc_syndrome_table[] = ;
static char *syndrome_unknown = "<Unknown>";
static void spitfire_log_udb_syndrome(unsigned long afar, unsigned long udbh, unsigned long udbl, unsigned long bit)
static void spitfire_cee_log(unsigned long afsr, unsigned long afar, unsigned long udbh, unsigned long udbl, int tl1, struct pt_regs *regs)
static void spitfire_ue_log(unsigned long afsr, unsigned long afar, unsigned long udbh, unsigned long udbl, unsigned long tt, int tl1, struct pt_regs *regs)
void spitfire_access_error(struct pt_regs *regs, unsigned long status_encoded, unsigned long afar)
int cheetah_pcache_forced_on;
void cheetah_enable_pcache(void)
static unsigned long ecache_flush_physbase;
static unsigned long ecache_flush_linesize;
static unsigned long ecache_flush_size;
struct afsr_error_table ;
static const char CHAFSR_PERR_msg[] =
"System interface protocol error";
static const char CHAFSR_IERR_msg[] =
"Internal processor error";
static const char CHAFSR_ISAP_msg[] =
"System request parity error on incoming address";
static const char CHAFSR_UCU_msg[] =
"Uncorrectable E-cache ECC error for ifetch/data";
static const char CHAFSR_UCC_msg[] =
"SW Correctable E-cache ECC error for ifetch/data";
static const char CHAFSR_UE_msg[] =
"Uncorrectable system bus data ECC error for read";
static const char CHAFSR_EDU_msg[] =
"Uncorrectable E-cache ECC error for stmerge/blkld";
static const char CHAFSR_EMU_msg[] =
"Uncorrectable system bus MTAG error";
static const char CHAFSR_WDU_msg[] =
"Uncorrectable E-cache ECC error for writeback";
static const char CHAFSR_CPU_msg[] =
"Uncorrectable ECC error for copyout";
static const char CHAFSR_CE_msg[] =
"HW corrected system bus data ECC error for read";
static const char CHAFSR_EDC_msg[] =
"HW corrected E-cache ECC error for stmerge/blkld";
static const char CHAFSR_EMC_msg[] =
"HW corrected system bus MTAG ECC error";
static const char CHAFSR_WDC_msg[] =
"HW corrected E-cache ECC error for writeback";
static const char CHAFSR_CPC_msg[] =
"HW corrected ECC error for copyout";
static const char CHAFSR_TO_msg[] =
"Unmapped error from system bus";
static const char CHAFSR_BERR_msg[] =
"Bus error response from system bus";
static const char CHAFSR_IVC_msg[] =
"HW corrected system bus data ECC error for ivec read";
static const char CHAFSR_IVU_msg[] =
"Uncorrectable system bus data ECC error for ivec read";
static struct afsr_error_table __cheetah_error_table[] = ;
static const char CHPAFSR_DTO_msg[] =
"System bus unmapped error for prefetch/storequeue-read";
static const char CHPAFSR_DBERR_msg[] =
"System bus error for prefetch/storequeue-read";
static const char CHPAFSR_THCE_msg[] =
"Hardware corrected E-cache Tag ECC error";
static const char CHPAFSR_TSCE_msg[] =
"SW handled correctable E-cache Tag ECC error";
static const char CHPAFSR_TUE_msg[] =
"Uncorrectable E-cache Tag ECC error";
static const char CHPAFSR_DUE_msg[] =
"System bus uncorrectable data ECC error due to prefetch/store-fill";
static struct afsr_error_table __cheetah_plus_error_table[] = ;
static const char JPAFSR_JETO_msg[] =
"System interface protocol error, hw timeout caused";
static const char JPAFSR_SCE_msg[] =
"Parity error on system snoop results";
static const char JPAFSR_JEIC_msg[] =
"System interface protocol error, illegal command detected";
static const char JPAFSR_JEIT_msg[] =
"System interface protocol error, illegal ADTYPE detected";
static const char JPAFSR_OM_msg[] =
"Out of range memory error has occurred";
static const char JPAFSR_ETP_msg[] =
"Parity error on L2 cache tag SRAM";
static const char JPAFSR_UMS_msg[] =
"Error due to unsupported store";
static const char JPAFSR_RUE_msg[] =
"Uncorrectable ECC error from remote cache/memory";
static const char JPAFSR_RCE_msg[] =
"Correctable ECC error from remote cache/memory";
static const char JPAFSR_BP_msg[] =
"JBUS parity error on returned read data";
static const char JPAFSR_WBP_msg[] =
"JBUS parity error on data for writeback or block store";
static const char JPAFSR_FRC_msg[] =
"Foreign read to DRAM incurring correctable ECC error";
static const char JPAFSR_FRU_msg[] =
"Foreign read to DRAM incurring uncorrectable ECC error";
static struct afsr_error_table __jalapeno_error_table[] = ;
static struct afsr_error_table *cheetah_error_table;
static unsigned long cheetah_afsr_errors;
struct cheetah_err_info *cheetah_error_log;
static inline struct cheetah_err_info *cheetah_get_error_log(unsigned long afsr)
extern unsigned int tl0_icpe[], tl1_icpe[];
extern unsigned int tl0_dcpe[], tl1_dcpe[];
extern unsigned int tl0_fecc[], tl1_fecc[];
extern unsigned int tl0_cee[], tl1_cee[];
extern unsigned int tl0_iae[], tl1_iae[];
extern unsigned int tl0_dae[], tl1_dae[];
extern unsigned int cheetah_plus_icpe_trap_vector[], cheetah_plus_icpe_trap_vector_tl1[];
extern unsigned int cheetah_plus_dcpe_trap_vector[], cheetah_plus_dcpe_trap_vector_tl1[];
extern unsigned int cheetah_fecc_trap_vector[], cheetah_fecc_trap_vector_tl1[];
extern unsigned int cheetah_cee_trap_vector[], cheetah_cee_trap_vector_tl1[];
extern unsigned int cheetah_deferred_trap_vector[], cheetah_deferred_trap_vector_tl1[];
void __init cheetah_ecache_flush_init(void)
static void cheetah_flush_ecache(void)
static void cheetah_flush_ecache_line(unsigned long physaddr)
static void __cheetah_flush_icache(void)
static void cheetah_flush_icache(void)
static void cheetah_flush_dcache(void)
static void cheetah_plus_zap_dcache_parity(void)
#define MT0	137
#define MT1	138
#define MT2	139
#define NONE	254
#define MTC0	140
#define MTC1	141
#define MTC2	142
#define MTC3	143
#define C0	128
#define C1	129
#define C2	130
#define C3	131
#define C4	132
#define C5	133
#define C6	134
#define C7	135
#define C8	136
#define M2	144
#define M3	145
#define M4	146
#define M	147
static unsigned char cheetah_ecc_syntab[] = ;
static unsigned char cheetah_mtag_syntab[] = ;
static inline unsigned long cheetah_get_hipri(unsigned long afsr)
static const char *cheetah_get_string(unsigned long bit)
static void cheetah_log_errors(struct pt_regs *regs, struct cheetah_err_info *info,
unsigned long afsr, unsigned long afar, int recoverable)
static int cheetah_recheck_errors(struct cheetah_err_info *logp)
void cheetah_fecc_handler(struct pt_regs *regs, unsigned long afsr, unsigned long afar)
static int cheetah_fix_ce(unsigned long physaddr)
static int cheetah_check_main_memory(unsigned long paddr)
void cheetah_cee_handler(struct pt_regs *regs, unsigned long afsr, unsigned long afar)
void cheetah_deferred_handler(struct pt_regs *regs, unsigned long afsr, unsigned long afar)
void cheetah_plus_parity_error(int type, struct pt_regs *regs)
struct sun4v_error_entry ;
static atomic_t sun4v_resum_oflow_cnt = ATOMIC_INIT(0);
static atomic_t sun4v_nonresum_oflow_cnt = ATOMIC_INIT(0);
static const char *sun4v_err_type_to_str(u32 type)
static void sun4v_log_error(struct pt_regs *regs, struct sun4v_error_entry *ent, int cpu, const char *pfx, atomic_t *ocnt)
void sun4v_resum_error(struct pt_regs *regs, unsigned long offset)
void sun4v_resum_overflow(struct pt_regs *regs)
void sun4v_nonresum_error(struct pt_regs *regs, unsigned long offset)
void sun4v_nonresum_overflow(struct pt_regs *regs)
unsigned long sun4v_err_itlb_vaddr;
unsigned long sun4v_err_itlb_ctx;
unsigned long sun4v_err_itlb_pte;
unsigned long sun4v_err_itlb_error;
void sun4v_itlb_error_report(struct pt_regs *regs, int tl)
unsigned long sun4v_err_dtlb_vaddr;
unsigned long sun4v_err_dtlb_ctx;
unsigned long sun4v_err_dtlb_pte;
unsigned long sun4v_err_dtlb_error;
void sun4v_dtlb_error_report(struct pt_regs *regs, int tl)
void hypervisor_tlbop_error(unsigned long err, unsigned long op)
void hypervisor_tlbop_error_xcall(unsigned long err, unsigned long op)
void do_fpe_common(struct pt_regs *regs)
void do_fpieee(struct pt_regs *regs)
extern int do_mathemu(struct pt_regs *, struct fpustate *);
void do_fpother(struct pt_regs *regs)
void do_tof(struct pt_regs *regs)
void do_div0(struct pt_regs *regs)
static void instruction_dump(unsigned int *pc)
static void user_instruction_dump(unsigned int __user *pc)
void show_stack(struct task_struct *tsk, unsigned long *_ksp)
void dump_stack(void)
EXPORT_SYMBOL(dump_stack);
static inline struct reg_window *kernel_stack_up(struct reg_window *rw)
void die_if_kernel(char *str, struct pt_regs *regs)
EXPORT_SYMBOL(die_if_kernel);
#define VIS_OPCODE_MASK	((0x3 << 30) | (0x3f << 19))
#define VIS_OPCODE_VAL	((0x2 << 30) | (0x36 << 19))
extern int handle_popc(u32 insn, struct pt_regs *regs);
extern int handle_ldf_stq(u32 insn, struct pt_regs *regs);
void do_illegal_instruction(struct pt_regs *regs)
extern void kernel_unaligned_trap(struct pt_regs *regs, unsigned int insn);
void mem_address_unaligned(struct pt_regs *regs, unsigned long sfar, unsigned long sfsr)
void sun4v_do_mna(struct pt_regs *regs, unsigned long addr, unsigned long type_ctx)
void do_privop(struct pt_regs *regs)
void do_privact(struct pt_regs *regs)
void do_cee(struct pt_regs *regs)
void do_cee_tl1(struct pt_regs *regs)
void do_dae_tl1(struct pt_regs *regs)
void do_iae_tl1(struct pt_regs *regs)
void do_div0_tl1(struct pt_regs *regs)
void do_fpdis_tl1(struct pt_regs *regs)
void do_fpieee_tl1(struct pt_regs *regs)
void do_fpother_tl1(struct pt_regs *regs)
void do_ill_tl1(struct pt_regs *regs)
void do_irq_tl1(struct pt_regs *regs)
void do_lddfmna_tl1(struct pt_regs *regs)
void do_stdfmna_tl1(struct pt_regs *regs)
void do_paw(struct pt_regs *regs)
void do_paw_tl1(struct pt_regs *regs)
void do_vaw(struct pt_regs *regs)
void do_vaw_tl1(struct pt_regs *regs)
void do_tof_tl1(struct pt_regs *regs)
void do_getpsr(struct pt_regs *regs)
struct trap_per_cpu trap_block[NR_CPUS];
EXPORT_SYMBOL(trap_block);
void notrace init_cur_cpu_trap(struct thread_info *t)
extern void thread_info_offsets_are_bolixed_dave(void);
extern void trap_per_cpu_offsets_are_bolixed_dave(void);
extern void tsb_config_offsets_are_bolixed_dave(void);
void __init trap_init(void)
