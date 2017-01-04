#define dprintk printk
#define dprintk(...) do  while(0);
#define OP_LFS			48
#define OP_LFSU			49
#define OP_LFD			50
#define OP_LFDU			51
#define OP_STFS			52
#define OP_STFSU		53
#define OP_STFD			54
#define OP_STFDU		55
#define OP_PSQ_L		56
#define OP_PSQ_LU		57
#define OP_PSQ_ST		60
#define OP_PSQ_STU		61
#define OP_31_LFSX		535
#define OP_31_LFSUX		567
#define OP_31_LFDX		599
#define OP_31_LFDUX		631
#define OP_31_STFSX		663
#define OP_31_STFSUX		695
#define OP_31_STFX		727
#define OP_31_STFUX		759
#define OP_31_LWIZX		887
#define OP_31_STFIWX		983
#define OP_59_FADDS		21
#define OP_59_FSUBS		20
#define OP_59_FSQRTS		22
#define OP_59_FDIVS		18
#define OP_59_FRES		24
#define OP_59_FMULS		25
#define OP_59_FRSQRTES		26
#define OP_59_FMSUBS		28
#define OP_59_FMADDS		29
#define OP_59_FNMSUBS		30
#define OP_59_FNMADDS		31
#define OP_63_FCMPU		0
#define OP_63_FCPSGN		8
#define OP_63_FRSP		12
#define OP_63_FCTIW		14
#define OP_63_FCTIWZ		15
#define OP_63_FDIV		18
#define OP_63_FADD		21
#define OP_63_FSQRT		22
#define OP_63_FSEL		23
#define OP_63_FRE		24
#define OP_63_FMUL		25
#define OP_63_FRSQRTE		26
#define OP_63_FMSUB		28
#define OP_63_FMADD		29
#define OP_63_FNMSUB		30
#define OP_63_FNMADD		31
#define OP_63_FCMPO		32
#define OP_63_MTFSB1		38
#define OP_63_FSUB		20
#define OP_63_FNEG		40
#define OP_63_MCRFS		64
#define OP_63_MTFSB0		70
#define OP_63_FMR		72
#define OP_63_MTFSFI		134
#define OP_63_FABS		264
#define OP_63_MFFS		583
#define OP_63_MTFSF		711
#define OP_4X_PS_CMPU0		0
#define OP_4X_PSQ_LX		6
#define OP_4XW_PSQ_STX		7
#define OP_4A_PS_SUM0		10
#define OP_4A_PS_SUM1		11
#define OP_4A_PS_MULS0		12
#define OP_4A_PS_MULS1		13
#define OP_4A_PS_MADDS0		14
#define OP_4A_PS_MADDS1		15
#define OP_4A_PS_DIV		18
#define OP_4A_PS_SUB		20
#define OP_4A_PS_ADD		21
#define OP_4A_PS_SEL		23
#define OP_4A_PS_RES		24
#define OP_4A_PS_MUL		25
#define OP_4A_PS_RSQRTE		26
#define OP_4A_PS_MSUB		28
#define OP_4A_PS_MADD		29
#define OP_4A_PS_NMSUB		30
#define OP_4A_PS_NMADD		31
#define OP_4X_PS_CMPO0		32
#define OP_4X_PSQ_LUX		38
#define OP_4XW_PSQ_STUX		39
#define OP_4X_PS_NEG		40
#define OP_4X_PS_CMPU1		64
#define OP_4X_PS_MR		72
#define OP_4X_PS_CMPO1		96
#define OP_4X_PS_NABS		136
#define OP_4X_PS_ABS		264
#define OP_4X_PS_MERGE00	528
#define OP_4X_PS_MERGE01	560
#define OP_4X_PS_MERGE10	592
#define OP_4X_PS_MERGE11	624
#define SCALAR_NONE		0
#define SCALAR_HIGH		(1 << 0)
#define SCALAR_LOW		(1 << 1)
#define SCALAR_NO_PS0		(1 << 2)
#define SCALAR_NO_PS1		(1 << 3)
#define GQR_ST_TYPE_MASK	0x00000007
#define GQR_ST_TYPE_SHIFT	0
#define GQR_ST_SCALE_MASK	0x00003f00
#define GQR_ST_SCALE_SHIFT	8
#define GQR_LD_TYPE_MASK	0x00070000
#define GQR_LD_TYPE_SHIFT	16
#define GQR_LD_SCALE_MASK	0x3f000000
#define GQR_LD_SCALE_SHIFT	24
#define GQR_QUANTIZE_FLOAT	0
#define GQR_QUANTIZE_U8		4
#define GQR_QUANTIZE_U16	5
#define GQR_QUANTIZE_S8		6
#define GQR_QUANTIZE_S16	7
#define FPU_LS_SINGLE		0
#define FPU_LS_DOUBLE		1
#define FPU_LS_SINGLE_LOW	2
static inline void kvmppc_sync_qpr(struct kvm_vcpu *vcpu, int rt)
static void kvmppc_inject_pf(struct kvm_vcpu *vcpu, ulong eaddr, bool is_store)
static int kvmppc_emulate_fpr_load(struct kvm_run *run, struct kvm_vcpu *vcpu,
int rs, ulong addr, int ls_type)
static int kvmppc_emulate_fpr_store(struct kvm_run *run, struct kvm_vcpu *vcpu,
int rs, ulong addr, int ls_type)
static int kvmppc_emulate_psq_load(struct kvm_run *run, struct kvm_vcpu *vcpu,
int rs, ulong addr, bool w, int i)
static int kvmppc_emulate_psq_store(struct kvm_run *run, struct kvm_vcpu *vcpu,
int rs, ulong addr, bool w, int i)
static inline u32 inst_get_field(u32 inst, int msb, int lsb)
static inline u32 inst_set_field(u32 inst, int msb, int lsb, int value)
bool kvmppc_inst_is_paired_single(struct kvm_vcpu *vcpu, u32 inst)
static int get_d_signext(u32 inst)
static int kvmppc_ps_three_in(struct kvm_vcpu *vcpu, bool rc,
int reg_out, int reg_in1, int reg_in2,
int reg_in3, int scalar,
void (*func)(u64 *fpscr,
u32 *dst, u32 *src1,
u32 *src2, u32 *src3))
static int kvmppc_ps_two_in(struct kvm_vcpu *vcpu, bool rc,
int reg_out, int reg_in1, int reg_in2,
int scalar,
void (*func)(u64 *fpscr,
u32 *dst, u32 *src1,
u32 *src2))
static int kvmppc_ps_one_in(struct kvm_vcpu *vcpu, bool rc,
int reg_out, int reg_in,
void (*func)(u64 *t,
u32 *dst, u32 *src1))
int kvmppc_emulate_paired_single(struct kvm_run *run, struct kvm_vcpu *vcpu)
