#define sign_extend(x, signbit) ((x) | (0 - ((x) & (1 << (signbit)))))
#define branch_displacement(insn) sign_extend(((insn) & 0xffffff) << 2, 25)
#define is_r15(insn, bitpos) (((insn) & (0xf << bitpos)) == (0xf << bitpos))
#define is_writeback(insn) ((insn ^ 0x01000000) & 0x01200000)
#define PSR_fs	(PSR_f|PSR_s)
#define KPROBE_RETURN_INSTRUCTION	0xe1a0f00e
typedef long (insn_0arg_fn_t)(void);
typedef long (insn_1arg_fn_t)(long);
typedef long (insn_2arg_fn_t)(long, long);
typedef long (insn_3arg_fn_t)(long, long, long);
typedef long (insn_4arg_fn_t)(long, long, long, long);
typedef long long (insn_llret_0arg_fn_t)(void);
typedef long long (insn_llret_3arg_fn_t)(long, long, long);
typedef long long (insn_llret_4arg_fn_t)(long, long, long, long);
union reg_pair ;
static int str_pc_offset;
static void __init find_str_pc_offset(void)
static inline long __kprobes
insnslot_0arg_rflags(long cpsr, insn_0arg_fn_t *fn)
static inline long long __kprobes
insnslot_llret_0arg_rflags(long cpsr, insn_llret_0arg_fn_t *fn)
static inline long __kprobes
insnslot_1arg_rflags(long r0, long cpsr, insn_1arg_fn_t *fn)
static inline long __kprobes
insnslot_2arg_rflags(long r0, long r1, long cpsr, insn_2arg_fn_t *fn)
static inline long __kprobes
insnslot_3arg_rflags(long r0, long r1, long r2, long cpsr, insn_3arg_fn_t *fn)
static inline long long __kprobes
insnslot_llret_3arg_rflags(long r0, long r1, long r2, long cpsr,
insn_llret_3arg_fn_t *fn)
static inline long __kprobes
insnslot_4arg_rflags(long r0, long r1, long r2, long r3, long cpsr,
insn_4arg_fn_t *fn)
static inline long __kprobes
insnslot_1arg_rwflags(long r0, long *cpsr, insn_1arg_fn_t *fn)
static inline long __kprobes
insnslot_2arg_rwflags(long r0, long r1, long *cpsr, insn_2arg_fn_t *fn)
static inline long __kprobes
insnslot_3arg_rwflags(long r0, long r1, long r2, long *cpsr,
insn_3arg_fn_t *fn)
static inline long __kprobes
insnslot_4arg_rwflags(long r0, long r1, long r2, long r3, long *cpsr,
insn_4arg_fn_t *fn)
static inline long long __kprobes
insnslot_llret_4arg_rwflags(long r0, long r1, long r2, long r3, long *cpsr,
insn_llret_4arg_fn_t *fn)
static void __kprobes simulate_bbl(struct kprobe *p, struct pt_regs *regs)
static void __kprobes simulate_blx1(struct kprobe *p, struct pt_regs *regs)
static void __kprobes simulate_blx2bx(struct kprobe *p, struct pt_regs *regs)
static void __kprobes simulate_mrs(struct kprobe *p, struct pt_regs *regs)
static void __kprobes simulate_ldm1stm1(struct kprobe *p, struct pt_regs *regs)
static void __kprobes simulate_stm1_pc(struct kprobe *p, struct pt_regs *regs)
static void __kprobes simulate_mov_ipsp(struct kprobe *p, struct pt_regs *regs)
static void __kprobes emulate_ldrd(struct kprobe *p, struct pt_regs *regs)
static void __kprobes emulate_strd(struct kprobe *p, struct pt_regs *regs)
static void __kprobes emulate_ldr(struct kprobe *p, struct pt_regs *regs)
static void __kprobes emulate_str(struct kprobe *p, struct pt_regs *regs)
static void __kprobes emulate_sat(struct kprobe *p, struct pt_regs *regs)
static void __kprobes emulate_sel(struct kprobe *p, struct pt_regs *regs)
static void __kprobes emulate_none(struct kprobe *p, struct pt_regs *regs)
static void __kprobes emulate_nop(struct kprobe *p, struct pt_regs *regs)
static void __kprobes
emulate_rd12_modify(struct kprobe *p, struct pt_regs *regs)
static void __kprobes
emulate_rd12rn0_modify(struct kprobe *p, struct pt_regs *regs)
static void __kprobes emulate_rd12rm0(struct kprobe *p, struct pt_regs *regs)
static void __kprobes
emulate_rd12rn16rm0_rwflags(struct kprobe *p, struct pt_regs *regs)
static void __kprobes
emulate_rd16rn12rs8rm0_rwflags(struct kprobe *p, struct pt_regs *regs)
static void __kprobes
emulate_rd16rs8rm0_rwflags(struct kprobe *p, struct pt_regs *regs)
static void __kprobes
emulate_rdhi16rdlo12rs8rm0_rwflags(struct kprobe *p, struct pt_regs *regs)
static void __kprobes
emulate_alu_imm_rflags(struct kprobe *p, struct pt_regs *regs)
static void __kprobes
emulate_alu_imm_rwflags(struct kprobe *p, struct pt_regs *regs)
static void __kprobes
emulate_alu_tests_imm(struct kprobe *p, struct pt_regs *regs)
static void __kprobes
emulate_alu_rflags(struct kprobe *p, struct pt_regs *regs)
static void __kprobes
emulate_alu_rwflags(struct kprobe *p, struct pt_regs *regs)
static void __kprobes
emulate_alu_tests(struct kprobe *p, struct pt_regs *regs)
static enum kprobe_insn __kprobes
prep_emulate_ldr_str(kprobe_opcode_t insn, struct arch_specific_insn *asi)
static enum kprobe_insn __kprobes
prep_emulate_rd12_modify(kprobe_opcode_t insn, struct arch_specific_insn *asi)
static enum kprobe_insn __kprobes
prep_emulate_rd12rn0_modify(kprobe_opcode_t insn,
struct arch_specific_insn *asi)
static enum kprobe_insn __kprobes
prep_emulate_rd12rm0(kprobe_opcode_t insn, struct arch_specific_insn *asi)
static enum kprobe_insn __kprobes
prep_emulate_rd12rn16rm0_wflags(kprobe_opcode_t insn,
struct arch_specific_insn *asi)
static enum kprobe_insn __kprobes
prep_emulate_rd16rs8rm0_wflags(kprobe_opcode_t insn,
struct arch_specific_insn *asi)
static enum kprobe_insn __kprobes
prep_emulate_rd16rn12rs8rm0_wflags(kprobe_opcode_t insn,
struct arch_specific_insn *asi)
static enum kprobe_insn __kprobes
prep_emulate_rdhi16rdlo12rs8rm0_wflags(kprobe_opcode_t insn,
struct arch_specific_insn *asi)
static enum kprobe_insn __kprobes
space_1111(kprobe_opcode_t insn, struct arch_specific_insn *asi)
static enum kprobe_insn __kprobes
space_cccc_000x(kprobe_opcode_t insn, struct arch_specific_insn *asi)
static enum kprobe_insn __kprobes
space_cccc_001x(kprobe_opcode_t insn, struct arch_specific_insn *asi)
static enum kprobe_insn __kprobes
space_cccc_0110__1(kprobe_opcode_t insn, struct arch_specific_insn *asi)
static enum kprobe_insn __kprobes
space_cccc_0111__1(kprobe_opcode_t insn, struct arch_specific_insn *asi)
static enum kprobe_insn __kprobes
space_cccc_01xx(kprobe_opcode_t insn, struct arch_specific_insn *asi)
static enum kprobe_insn __kprobes
space_cccc_100x(kprobe_opcode_t insn, struct arch_specific_insn *asi)
static enum kprobe_insn __kprobes
space_cccc_101x(kprobe_opcode_t insn, struct arch_specific_insn *asi)
static enum kprobe_insn __kprobes
space_cccc_11xx(kprobe_opcode_t insn, struct arch_specific_insn *asi)
static unsigned long __kprobes __check_eq(unsigned long cpsr)
static unsigned long __kprobes __check_ne(unsigned long cpsr)
static unsigned long __kprobes __check_cs(unsigned long cpsr)
static unsigned long __kprobes __check_cc(unsigned long cpsr)
static unsigned long __kprobes __check_mi(unsigned long cpsr)
static unsigned long __kprobes __check_pl(unsigned long cpsr)
static unsigned long __kprobes __check_vs(unsigned long cpsr)
static unsigned long __kprobes __check_vc(unsigned long cpsr)
static unsigned long __kprobes __check_hi(unsigned long cpsr)
static unsigned long __kprobes __check_ls(unsigned long cpsr)
static unsigned long __kprobes __check_ge(unsigned long cpsr)
static unsigned long __kprobes __check_lt(unsigned long cpsr)
static unsigned long __kprobes __check_gt(unsigned long cpsr)
static unsigned long __kprobes __check_le(unsigned long cpsr)
static unsigned long __kprobes __check_al(unsigned long cpsr)
static kprobe_check_cc * const condition_checks[16] = ;
enum kprobe_insn __kprobes
arm_kprobe_decode_insn(kprobe_opcode_t insn, struct arch_specific_insn *asi)
void __init arm_kprobe_decode_init(void)
