enum direction ;
static inline enum direction decode_direction(unsigned int insn)
static inline int decode_access_size(unsigned int insn)
static inline int decode_signedness(unsigned int insn)
static inline void maybe_flush_windows(unsigned int rs1, unsigned int rs2,
unsigned int rd)
static inline int sign_extend_imm13(int imm)
static inline unsigned long fetch_reg(unsigned int reg, struct pt_regs *regs)
static inline unsigned long safe_fetch_reg(unsigned int reg, struct pt_regs *regs)
static inline unsigned long *fetch_reg_addr(unsigned int reg, struct pt_regs *regs)
static unsigned long compute_effective_address(struct pt_regs *regs,
unsigned int insn)
unsigned long safe_compute_effective_address(struct pt_regs *regs,
unsigned int insn)
static void unaligned_panic(char *str)
extern int do_int_load(unsigned long *dest_reg, int size,
unsigned long *saddr, int is_signed);
extern int __do_int_store(unsigned long *dst_addr, int size,
unsigned long *src_val);
static int do_int_store(int reg_num, int size, unsigned long *dst_addr,
struct pt_regs *regs)
extern void smp_capture(void);
extern void smp_release(void);
static inline void advance(struct pt_regs *regs)
static inline int floating_point_load_or_store_p(unsigned int insn)
static inline int ok_for_kernel(unsigned int insn)
static void kernel_mna_trap_fault(struct pt_regs *regs, unsigned int insn)
asmlinkage void kernel_unaligned_trap(struct pt_regs *regs, unsigned int insn)
static inline int ok_for_user(struct pt_regs *regs, unsigned int insn,
enum direction dir)
static void user_mna_trap_fault(struct pt_regs *regs, unsigned int insn)
asmlinkage void user_unaligned_trap(struct pt_regs *regs, unsigned int insn)
