#define FPACK16_OPF	0x03b
#define FPACK32_OPF	0x03a
#define FPACKFIX_OPF	0x03d
#define FEXPAND_OPF	0x04d
#define FPMERGE_OPF	0x04b
#define FMUL8x16_OPF	0x031
#define FMUL8x16AU_OPF	0x033
#define FMUL8x16AL_OPF	0x035
#define FMUL8SUx16_OPF	0x036
#define FMUL8ULx16_OPF	0x037
#define FMULD8SUx16_OPF	0x038
#define FMULD8ULx16_OPF	0x039
#define FCMPGT16_OPF	0x028
#define FCMPGT32_OPF	0x02c
#define FCMPLE16_OPF	0x020
#define FCMPLE32_OPF	0x024
#define FCMPNE16_OPF	0x022
#define FCMPNE32_OPF	0x026
#define FCMPEQ16_OPF	0x02a
#define FCMPEQ32_OPF	0x02e
#define EDGE8_OPF	0x000
#define EDGE8N_OPF	0x001
#define EDGE8L_OPF	0x002
#define EDGE8LN_OPF	0x003
#define EDGE16_OPF	0x004
#define EDGE16N_OPF	0x005
#define EDGE16L_OPF	0x006
#define EDGE16LN_OPF	0x007
#define EDGE32_OPF	0x008
#define EDGE32N_OPF	0x009
#define EDGE32L_OPF	0x00a
#define EDGE32LN_OPF	0x00b
#define PDIST_OPF	0x03e
#define ARRAY8_OPF	0x010
#define ARRAY16_OPF	0x012
#define ARRAY32_OPF	0x014
#define BMASK_OPF	0x019
#define BSHUFFLE_OPF	0x04c
#define VIS_OPF_SHIFT	5
#define VIS_OPF_MASK	(0x1ff << VIS_OPF_SHIFT)
#define RS1(INSN)	(((INSN) >> 14) & 0x1f)
#define RS2(INSN)	(((INSN) >>  0) & 0x1f)
#define RD(INSN)	(((INSN) >> 25) & 0x1f)
static inline void maybe_flush_windows(unsigned int rs1, unsigned int rs2,
unsigned int rd, int from_kernel)
static unsigned long fetch_reg(unsigned int reg, struct pt_regs *regs)
static inline unsigned long __user *__fetch_reg_addr_user(unsigned int reg,
struct pt_regs *regs)
static inline unsigned long *__fetch_reg_addr_kern(unsigned int reg,
struct pt_regs *regs)
static void store_reg(struct pt_regs *regs, unsigned long val, unsigned long rd)
static inline unsigned long fpd_regval(struct fpustate *f,
unsigned int insn_regnum)
static inline unsigned long *fpd_regaddr(struct fpustate *f,
unsigned int insn_regnum)
static inline unsigned int fps_regval(struct fpustate *f,
unsigned int insn_regnum)
static inline unsigned int *fps_regaddr(struct fpustate *f,
unsigned int insn_regnum)
struct edge_tab ;
static struct edge_tab edge8_tab[8] = ;
static struct edge_tab edge8_tab_l[8] = ;
static struct edge_tab edge16_tab[4] = ;
static struct edge_tab edge16_tab_l[4] = ;
static struct edge_tab edge32_tab[2] = ;
static struct edge_tab edge32_tab_l[2] = ;
static void edge(struct pt_regs *regs, unsigned int insn, unsigned int opf)
static void array(struct pt_regs *regs, unsigned int insn, unsigned int opf)
static void bmask(struct pt_regs *regs, unsigned int insn)
static void bshuffle(struct pt_regs *regs, unsigned int insn)
static void pdist(struct pt_regs *regs, unsigned int insn)
static void pformat(struct pt_regs *regs, unsigned int insn, unsigned int opf)
static void pmul(struct pt_regs *regs, unsigned int insn, unsigned int opf)
static void pcmp(struct pt_regs *regs, unsigned int insn, unsigned int opf)
int vis_emul(struct pt_regs *regs, unsigned int insn)
