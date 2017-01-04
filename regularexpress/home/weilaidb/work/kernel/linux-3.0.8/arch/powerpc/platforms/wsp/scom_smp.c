#define SCOM_RAMC		0x2a
#define SCOM_RAMC_TGT1_EXT	0x80000000
#define SCOM_RAMC_SRC1_EXT	0x40000000
#define SCOM_RAMC_SRC2_EXT	0x20000000
#define SCOM_RAMC_SRC3_EXT	0x10000000
#define SCOM_RAMC_ENABLE	0x00080000
#define SCOM_RAMC_THREADSEL	0x00060000
#define SCOM_RAMC_EXECUTE	0x00010000
#define SCOM_RAMC_MSR_OVERRIDE	0x00008000
#define SCOM_RAMC_MSR_PR	0x00004000
#define SCOM_RAMC_MSR_GS	0x00002000
#define SCOM_RAMC_FORCE		0x00001000
#define SCOM_RAMC_FLUSH		0x00000800
#define SCOM_RAMC_INTERRUPT	0x00000004
#define SCOM_RAMC_ERROR		0x00000002
#define SCOM_RAMC_DONE		0x00000001
#define SCOM_RAMI		0x29
#define SCOM_RAMIC		0x28
#define SCOM_RAMIC_INSN		0xffffffff00000000
#define SCOM_RAMD		0x2d
#define SCOM_RAMDH		0x2e
#define SCOM_RAMDL		0x2f
#define SCOM_PCCR0		0x33
#define SCOM_PCCR0_ENABLE_DEBUG	0x80000000
#define SCOM_PCCR0_ENABLE_RAM	0x40000000
#define SCOM_THRCTL		0x30
#define SCOM_THRCTL_T0_STOP	0x80000000
#define SCOM_THRCTL_T1_STOP	0x40000000
#define SCOM_THRCTL_T2_STOP	0x20000000
#define SCOM_THRCTL_T3_STOP	0x10000000
#define SCOM_THRCTL_T0_STEP	0x08000000
#define SCOM_THRCTL_T1_STEP	0x04000000
#define SCOM_THRCTL_T2_STEP	0x02000000
#define SCOM_THRCTL_T3_STEP	0x01000000
#define SCOM_THRCTL_T0_RUN	0x00800000
#define SCOM_THRCTL_T1_RUN	0x00400000
#define SCOM_THRCTL_T2_RUN	0x00200000
#define SCOM_THRCTL_T3_RUN	0x00100000
#define SCOM_THRCTL_T0_PM	0x00080000
#define SCOM_THRCTL_T1_PM	0x00040000
#define SCOM_THRCTL_T2_PM	0x00020000
#define SCOM_THRCTL_T3_PM	0x00010000
#define SCOM_THRCTL_T0_UDE	0x00008000
#define SCOM_THRCTL_T1_UDE	0x00004000
#define SCOM_THRCTL_T2_UDE	0x00002000
#define SCOM_THRCTL_T3_UDE	0x00001000
#define SCOM_THRCTL_ASYNC_DIS	0x00000800
#define SCOM_THRCTL_TB_DIS	0x00000400
#define SCOM_THRCTL_DEC_DIS	0x00000200
#define SCOM_THRCTL_AND		0x31
#define SCOM_THRCTL_OR		0x32
static DEFINE_PER_CPU(scom_map_t, scom_ptrs);
static scom_map_t get_scom(int cpu, struct device_node *np, int *first_thread)
static int a2_scom_ram(scom_map_t scom, int thread, u32 insn, int extmask)
static int a2_scom_getgpr(scom_map_t scom, int thread, int gpr, int alt,
u64 *out_gpr)
static int a2_scom_getspr(scom_map_t scom, int thread, int spr, u64 *out_spr)
static int a2_scom_setgpr(scom_map_t scom, int thread, int gpr,
int alt, u64 val)
static int a2_scom_setspr(scom_map_t scom, int thread, int spr, u64 val)
static int a2_scom_initial_tlb(scom_map_t scom, int thread)
int __devinit a2_scom_startup_cpu(unsigned int lcpu, int thr_idx,
struct device_node *np)
