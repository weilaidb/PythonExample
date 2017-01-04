struct aligninfo ;
#define IS_XFORM(inst)	(((inst) >> 26) == 31)
#define IS_DSFORM(inst)	(((inst) >> 26) >= 56)
#define INVALID
#define LD	0
#define ST	1
#define SE	2
#define F	4
#define U	8
#define M	0x10
#define SW	0x20
#define S	0x40
#define SX	0x40
#define HARD	0x80
#define E4	0x40
#define E8	0x80
#define SPLT	0x80
#define DCBZ	0x5f
#define SWAP(a, b)	(t = (a), (a) = (b), (b) = t)
static struct aligninfo aligninfo[128] = ;
static inline unsigned make_dsisr(unsigned instr)
static int emulate_dcbz(struct pt_regs *regs, unsigned char __user *addr)
#define REG_BYTE(rp, i)		*((u8 *)((rp) + ((i) >> 2)) + ((i) & 3) + 4)
#define REG_BYTE(rp, i)		*((u8 *)(rp) + (i))
#define SWIZ_PTR(p)		((unsigned char __user *)((p) ^ swiz))
static int emulate_multiple(struct pt_regs *regs, unsigned char __user *addr,
unsigned int reg, unsigned int nb,
unsigned int flags, unsigned int instr,
unsigned long swiz)
static int emulate_fp_pair(unsigned char __user *addr, unsigned int reg,
unsigned int flags)
static struct aligninfo spe_aligninfo[32] = ;
#define	EVLDD		0x00
#define	EVLDW		0x01
#define	EVLDH		0x02
#define	EVLHHESPLAT	0x04
#define	EVLHHOUSPLAT	0x06
#define	EVLHHOSSPLAT	0x07
#define	EVLWHE		0x08
#define	EVLWHOU		0x0A
#define	EVLWHOS		0x0B
#define	EVLWWSPLAT	0x0C
#define	EVLWHSPLAT	0x0E
#define	EVSTDD		0x10
#define	EVSTDW		0x11
#define	EVSTDH		0x12
#define	EVSTWHE		0x18
#define	EVSTWHO		0x1A
#define	EVSTWWE		0x1C
#define	EVSTWWO		0x1E
static int emulate_spe(struct pt_regs *regs, unsigned int reg,
unsigned int instr)
static int emulate_vsx(unsigned char __user *addr, unsigned int reg,
unsigned int areg, struct pt_regs *regs,
unsigned int flags, unsigned int length,
unsigned int elsize)
int fix_alignment(struct pt_regs *regs)
