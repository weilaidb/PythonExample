static int get_reg(struct pt_regs *regs, int nr)
static void set_reg(struct pt_regs *regs, int nr, int val)
#define REG1(insn)	(((insn) & 0x0f00) >> 8)
#define REG2(insn)	((insn) & 0x000f)
#define PSW_BC		0x100
#define ISA_LD1		0x20c0
#define ISA_LD2		0x20e0
#define ISA_LDH		0x20a0
#define ISA_LDUH	0x20b0
#define ISA_ST1		0x2040
#define ISA_ST2		0x2060
#define ISA_ST3		0x2070
#define ISA_STH1	0x2020
#define ISA_STH2	0x2030
#define ISA_ADD		0x00a0
#define ISA_ADDI	0x4000
#define ISA_ADDX	0x0090
#define ISA_AND		0x00c0
#define ISA_CMP		0x0040
#define ISA_CMPEQ	0x0060
#define ISA_CMPU	0x0050
#define ISA_CMPZ	0x0070
#define ISA_LDI		0x6000
#define ISA_MV		0x1080
#define ISA_NEG		0x0030
#define ISA_NOP		0x7000
#define ISA_NOT		0x00b0
#define ISA_OR		0x00e0
#define ISA_SUB		0x0020
#define ISA_SUBX	0x0010
#define ISA_XOR		0x00d0
#define ISA_MUL		0x1060
#define ISA_MULLO_A0	0x3010
#define ISA_MULLO_A1	0x3090
#define ISA_MVFACMI_A0	0x50f2
#define ISA_MVFACMI_A1	0x50f6
static int emu_addi(unsigned short insn, struct pt_regs *regs)
static int emu_ldi(unsigned short insn, struct pt_regs *regs)
static int emu_add(unsigned short insn, struct pt_regs *regs)
static int emu_addx(unsigned short insn, struct pt_regs *regs)
static int emu_and(unsigned short insn, struct pt_regs *regs)
static int emu_cmp(unsigned short insn, struct pt_regs *regs)
static int emu_cmpeq(unsigned short insn, struct pt_regs *regs)
static int emu_cmpu(unsigned short insn, struct pt_regs *regs)
static int emu_cmpz(unsigned short insn, struct pt_regs *regs)
static int emu_mv(unsigned short insn, struct pt_regs *regs)
static int emu_neg(unsigned short insn, struct pt_regs *regs)
static int emu_not(unsigned short insn, struct pt_regs *regs)
static int emu_or(unsigned short insn, struct pt_regs *regs)
static int emu_sub(unsigned short insn, struct pt_regs *regs)
static int emu_subx(unsigned short insn, struct pt_regs *regs)
static int emu_xor(unsigned short insn, struct pt_regs *regs)
static int emu_mul(unsigned short insn, struct pt_regs *regs)
static int emu_mullo_a0(unsigned short insn, struct pt_regs *regs)
static int emu_mullo_a1(unsigned short insn, struct pt_regs *regs)
static int emu_mvfacmi_a0(unsigned short insn, struct pt_regs *regs)
static int emu_mvfacmi_a1(unsigned short insn, struct pt_regs *regs)
static int emu_m32r2(unsigned short insn, struct pt_regs *regs)
static int insn_check(unsigned long insn, struct pt_regs *regs,
unsigned char **ucp)
static int emu_ld(unsigned long insn32, struct pt_regs *regs)
static int emu_st(unsigned long insn32, struct pt_regs *regs)
int handle_unaligned_access(unsigned long insn32, struct pt_regs *regs)
