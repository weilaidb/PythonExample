extern int die_if_kernel(char *str, struct pt_regs *regs, long err);
#undef DEBUG_UNALIGNED_TRAP
# define DPRINT(a...)	do  while (0)
# define DDUMP(str,vp,len)	dump(str, vp, len)
static void
dump (const char *str, void *vp, size_t len)
# define DPRINT(a...)
# define DDUMP(str,vp,len)
#define IA64_FIRST_STACKED_GR	32
#define IA64_FIRST_ROTATING_FR	32
#define SIGN_EXT9		0xffffffffffffff00ul
int no_unaligned_warning;
int unaligned_dump_stack;
#define IA64_OPCODE_MASK	0x1ef
#define IA64_OPCODE_SHIFT	32
#define LD_OP            0x080
#define LDS_OP           0x081
#define LDA_OP           0x082
#define LDSA_OP          0x083
#define LDBIAS_OP        0x084
#define LDACQ_OP         0x085
#define LDCCLR_OP        0x088
#define LDCNC_OP         0x089
#define LDCCLRACQ_OP     0x08a
#define ST_OP            0x08c
#define STREL_OP         0x08d
#define LD_IMM_OP            0x0a0
#define LDS_IMM_OP           0x0a1
#define LDA_IMM_OP           0x0a2
#define LDSA_IMM_OP          0x0a3
#define LDBIAS_IMM_OP        0x0a4
#define LDACQ_IMM_OP         0x0a5
#define LDCCLR_IMM_OP        0x0a8
#define LDCNC_IMM_OP         0x0a9
#define LDCCLRACQ_IMM_OP     0x0aa
#define ST_IMM_OP            0x0ac
#define STREL_IMM_OP         0x0ad
#define LDF_OP           0x0c0
#define LDFS_OP          0x0c1
#define LDFA_OP          0x0c2
#define LDFSA_OP         0x0c3
#define LDFCCLR_OP       0x0c8
#define LDFCNC_OP        0x0c9
#define STF_OP           0x0cc
#define LDF_IMM_OP       0x0e0
#define LDFS_IMM_OP      0x0e1
#define LDFA_IMM_OP      0x0e2
#define LDFSA_IMM_OP     0x0e3
#define LDFCCLR_IMM_OP   0x0e8
#define LDFCNC_IMM_OP    0x0e9
#define STF_IMM_OP       0x0ec
typedef struct  load_store_t;
typedef enum  update_t;
#define RPO(x)	((size_t) &((struct pt_regs *)0)->x)
#define RSO(x)	((size_t) &((struct switch_stack *)0)->x)
#define RPT(x)		(RPO(x) << 1)
#define RSW(x)		(1| RSO(x)<<1)
#define GR_OFFS(x)	(gr_info[x]>>1)
#define GR_IN_SW(x)	(gr_info[x] & 0x1)
#define FR_OFFS(x)	(fr_info[x]>>1)
#define FR_IN_SW(x)	(fr_info[x] & 0x1)
static u16 gr_info[32]=;
static u16 fr_info[32]=;
static void
invala_gr (int regno)
static void
invala_fr (int regno)
static inline unsigned long
rotate_reg (unsigned long sor, unsigned long rrb, unsigned long reg)
static void
set_rse_reg (struct pt_regs *regs, unsigned long r1, unsigned long val, int nat)
static void
get_rse_reg (struct pt_regs *regs, unsigned long r1, unsigned long *val, int *nat)
static void
setreg (unsigned long regnum, unsigned long val, int nat, struct pt_regs *regs)
static inline unsigned long
fph_index (struct pt_regs *regs, long regnum)
static void
setfpreg (unsigned long regnum, struct ia64_fpreg *fpval, struct pt_regs *regs)
static inline void
float_spill_f0 (struct ia64_fpreg *final)
static inline void
float_spill_f1 (struct ia64_fpreg *final)
static void
getfpreg (unsigned long regnum, struct ia64_fpreg *fpval, struct pt_regs *regs)
static void
getreg (unsigned long regnum, unsigned long *val, int *nat, struct pt_regs *regs)
static void
emulate_load_updates (update_t type, load_store_t ld, struct pt_regs *regs, unsigned long ifa)
static int
emulate_load_int (unsigned long ifa, load_store_t ld, struct pt_regs *regs)
static int
emulate_store_int (unsigned long ifa, load_store_t ld, struct pt_regs *regs)
static const unsigned char float_fsz[4]=;
static inline void
mem2float_extended (struct ia64_fpreg *init, struct ia64_fpreg *final)
static inline void
mem2float_integer (struct ia64_fpreg *init, struct ia64_fpreg *final)
static inline void
mem2float_single (struct ia64_fpreg *init, struct ia64_fpreg *final)
static inline void
mem2float_double (struct ia64_fpreg *init, struct ia64_fpreg *final)
static inline void
float2mem_extended (struct ia64_fpreg *init, struct ia64_fpreg *final)
static inline void
float2mem_integer (struct ia64_fpreg *init, struct ia64_fpreg *final)
static inline void
float2mem_single (struct ia64_fpreg *init, struct ia64_fpreg *final)
static inline void
float2mem_double (struct ia64_fpreg *init, struct ia64_fpreg *final)
static int
emulate_load_floatpair (unsigned long ifa, load_store_t ld, struct pt_regs *regs)
static int
emulate_load_float (unsigned long ifa, load_store_t ld, struct pt_regs *regs)
static int
emulate_store_float (unsigned long ifa, load_store_t ld, struct pt_regs *regs)
static DEFINE_RATELIMIT_STATE(logging_rate_limit, 5 * HZ, 5);
void
ia64_handle_unaligned (unsigned long ifa, struct pt_regs *regs)
