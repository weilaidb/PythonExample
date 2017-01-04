#define	OPC_PAL		0x00
#define OPC_INTA	0x10
#define OPC_INTL	0x11
#define OPC_INTS	0x12
#define OPC_INTM	0x13
#define OPC_FLTC	0x14
#define OPC_FLTV	0x15
#define OPC_FLTI	0x16
#define OPC_FLTL	0x17
#define OPC_MISC	0x18
#define	OPC_JSR		0x1a
#define FOP_SRC_S	0
#define FOP_SRC_T	2
#define FOP_SRC_Q	3
#define FOP_FNC_ADDx	0
#define FOP_FNC_CVTQL	0
#define FOP_FNC_SUBx	1
#define FOP_FNC_MULx	2
#define FOP_FNC_DIVx	3
#define FOP_FNC_CMPxUN	4
#define FOP_FNC_CMPxEQ	5
#define FOP_FNC_CMPxLT	6
#define FOP_FNC_CMPxLE	7
#define FOP_FNC_SQRTx	11
#define FOP_FNC_CVTxS	12
#define FOP_FNC_CVTxT	14
#define FOP_FNC_CVTxQ	15
#define MISC_TRAPB	0x0000
#define MISC_EXCB	0x0400
extern unsigned long alpha_read_fp_reg (unsigned long reg);
extern void alpha_write_fp_reg (unsigned long reg, unsigned long val);
extern unsigned long alpha_read_fp_reg_s (unsigned long reg);
extern void alpha_write_fp_reg_s (unsigned long reg, unsigned long val);
MODULE_DESCRIPTION("FP Software completion module");
extern long (*alpha_fp_emul_imprecise)(struct pt_regs *, unsigned long);
extern long (*alpha_fp_emul) (unsigned long pc);
static long (*save_emul_imprecise)(struct pt_regs *, unsigned long);
static long (*save_emul) (unsigned long pc);
long do_alpha_fp_emul_imprecise(struct pt_regs *, unsigned long);
long do_alpha_fp_emul(unsigned long);
int init_module(void)
void cleanup_module(void)
#undef  alpha_fp_emul_imprecise
#define alpha_fp_emul_imprecise		do_alpha_fp_emul_imprecise
#undef  alpha_fp_emul
#define alpha_fp_emul			do_alpha_fp_emul
long
alpha_fp_emul (unsigned long pc)
long
alpha_fp_emul_imprecise (struct pt_regs *regs, unsigned long write_mask)
