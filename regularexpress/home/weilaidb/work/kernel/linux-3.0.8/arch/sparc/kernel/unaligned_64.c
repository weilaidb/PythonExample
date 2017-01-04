enum direction ;
static inline enum direction decode_direction(unsigned int insn)
static inline int decode_access_size(struct pt_regs *regs, unsigned int insn)
static inline int decode_asi(unsigned int insn, struct pt_regs *regs)
static inline int decode_signedness(unsigned int insn)
static inline void maybe_flush_windows(unsigned int rs1, unsigned int rs2,
unsigned int rd, int from_kernel)
static inline long sign_extend_imm13(long imm)
static unsigned long fetch_reg(unsigned int reg, struct pt_regs *regs)
static unsigned long *fetch_reg_addr(unsigned int reg, struct pt_regs *regs)
unsigned long compute_effective_address(struct pt_regs *regs,
unsigned int insn, unsigned int rd)
static void __used unaligned_panic(char *str, struct pt_regs *regs)
extern int do_int_load(unsigned long *dest_reg, int size,
unsigned long *saddr, int is_signed, int asi);
extern int __do_int_store(unsigned long *dst_addr, int size,
unsigned long src_val, int asi);
static inline int do_int_store(int reg_num, int size, unsigned long *dst_addr,
struct pt_regs *regs, int asi, int orig_asi)
static inline void advance(struct pt_regs *regs)
static inline int floating_point_load_or_store_p(unsigned int insn)
static inline int ok_for_kernel(unsigned int insn)
static void kernel_mna_trap_fault(int fixup_tstate_asi)
static void log_unaligned(struct pt_regs *regs)
asmlinkage void kernel_unaligned_trap(struct pt_regs *regs, unsigned int insn)
int handle_popc(u32 insn, struct pt_regs *regs)
extern void do_fpother(struct pt_regs *regs);
extern void do_privact(struct pt_regs *regs);
extern void spitfire_data_access_exception(struct pt_regs *regs,
unsigned long sfsr,
unsigned long sfar);
extern void sun4v_data_access_exception(struct pt_regs *regs,
unsigned long addr,
unsigned long type_ctx);
int handle_ldf_stq(u32 insn, struct pt_regs *regs)
void handle_ld_nf(u32 insn, struct pt_regs *regs)
void handle_lddfmna(struct pt_regs *regs, unsigned long sfar, unsigned long sfsr)
void handle_stdfmna(struct pt_regs *regs, unsigned long sfar, unsigned long sfsr)
