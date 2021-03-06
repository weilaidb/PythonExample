#define __ASM_POWERPC_CPUTABLE_H
#define PPC_FEATURE_32			0x80000000
#define PPC_FEATURE_64			0x40000000
#define PPC_FEATURE_601_INSTR		0x20000000
#define PPC_FEATURE_HAS_ALTIVEC		0x10000000
#define PPC_FEATURE_HAS_FPU		0x08000000
#define PPC_FEATURE_HAS_MMU		0x04000000
#define PPC_FEATURE_HAS_4xxMAC		0x02000000
#define PPC_FEATURE_UNIFIED_CACHE	0x01000000
#define PPC_FEATURE_HAS_SPE		0x00800000
#define PPC_FEATURE_HAS_EFP_SINGLE	0x00400000
#define PPC_FEATURE_HAS_EFP_DOUBLE	0x00200000
#define PPC_FEATURE_NO_TB		0x00100000
#define PPC_FEATURE_POWER4		0x00080000
#define PPC_FEATURE_POWER5		0x00040000
#define PPC_FEATURE_POWER5_PLUS		0x00020000
#define PPC_FEATURE_CELL		0x00010000
#define PPC_FEATURE_BOOKE		0x00008000
#define PPC_FEATURE_SMT			0x00004000
#define PPC_FEATURE_ICACHE_SNOOP	0x00002000
#define PPC_FEATURE_ARCH_2_05		0x00001000
#define PPC_FEATURE_PA6T		0x00000800
#define PPC_FEATURE_HAS_DFP		0x00000400
#define PPC_FEATURE_POWER6_EXT		0x00000200
#define PPC_FEATURE_ARCH_2_06		0x00000100
#define PPC_FEATURE_HAS_VSX		0x00000080
#define PPC_FEATURE_PSERIES_PERFMON_COMPAT \
0x00000040
#define PPC_FEATURE_TRUE_LE		0x00000002
#define PPC_FEATURE_PPC_LE		0x00000001
struct cpu_spec;
typedef	void (*cpu_setup_t)(unsigned long offset, struct cpu_spec* spec);
typedef	void (*cpu_restore_t)(void);
enum powerpc_oprofile_type ;
enum powerpc_pmc_type ;
struct pt_regs;
extern int machine_check_generic(struct pt_regs *regs);
extern int machine_check_4xx(struct pt_regs *regs);
extern int machine_check_440A(struct pt_regs *regs);
extern int machine_check_e500mc(struct pt_regs *regs);
extern int machine_check_e500(struct pt_regs *regs);
extern int machine_check_e200(struct pt_regs *regs);
extern int machine_check_47x(struct pt_regs *regs);
struct cpu_spec ;
extern struct cpu_spec		*cur_cpu_spec;
extern unsigned int __start___ftr_fixup, __stop___ftr_fixup;
extern struct cpu_spec *identify_cpu(unsigned long offset, unsigned int pvr);
extern void do_feature_fixups(unsigned long value, void *fixup_start,
void *fixup_end);
extern const char *powerpc_base_platform;
#define CPU_FTR_COHERENT_ICACHE		ASM_CONST(0x0000000000000001)
#define CPU_FTR_L2CR			ASM_CONST(0x0000000000000002)
#define CPU_FTR_SPEC7450		ASM_CONST(0x0000000000000004)
#define CPU_FTR_ALTIVEC			ASM_CONST(0x0000000000000008)
#define CPU_FTR_TAU			ASM_CONST(0x0000000000000010)
#define CPU_FTR_CAN_DOZE		ASM_CONST(0x0000000000000020)
#define CPU_FTR_USE_TB			ASM_CONST(0x0000000000000040)
#define CPU_FTR_L2CSR			ASM_CONST(0x0000000000000080)
#define CPU_FTR_601			ASM_CONST(0x0000000000000100)
#define CPU_FTR_DBELL			ASM_CONST(0x0000000000000200)
#define CPU_FTR_CAN_NAP			ASM_CONST(0x0000000000000400)
#define CPU_FTR_L3CR			ASM_CONST(0x0000000000000800)
#define CPU_FTR_L3_DISABLE_NAP		ASM_CONST(0x0000000000001000)
#define CPU_FTR_NAP_DISABLE_L2_PR	ASM_CONST(0x0000000000002000)
#define CPU_FTR_DUAL_PLL_750FX		ASM_CONST(0x0000000000004000)
#define CPU_FTR_NO_DPM			ASM_CONST(0x0000000000008000)
#define CPU_FTR_476_DD2			ASM_CONST(0x0000000000010000)
#define CPU_FTR_NEED_COHERENT		ASM_CONST(0x0000000000020000)
#define CPU_FTR_NO_BTIC			ASM_CONST(0x0000000000040000)
#define CPU_FTR_DEBUG_LVL_EXC		ASM_CONST(0x0000000000080000)
#define CPU_FTR_NODSISRALIGN		ASM_CONST(0x0000000000100000)
#define CPU_FTR_PPC_LE			ASM_CONST(0x0000000000200000)
#define CPU_FTR_REAL_LE			ASM_CONST(0x0000000000400000)
#define CPU_FTR_FPU_UNAVAILABLE		ASM_CONST(0x0000000000800000)
#define CPU_FTR_UNIFIED_ID_CACHE	ASM_CONST(0x0000000001000000)
#define CPU_FTR_SPE			ASM_CONST(0x0000000002000000)
#define CPU_FTR_NEED_PAIRED_STWCX	ASM_CONST(0x0000000004000000)
#define CPU_FTR_LWSYNC			ASM_CONST(0x0000000008000000)
#define CPU_FTR_NOEXECUTE		ASM_CONST(0x0000000010000000)
#define CPU_FTR_INDEXED_DCR		ASM_CONST(0x0000000020000000)
#define LONG_ASM_CONST(x)		ASM_CONST(x)
#define LONG_ASM_CONST(x)		0
#define CPU_FTR_HVMODE_206		LONG_ASM_CONST(0x0000000800000000)
#define CPU_FTR_CFAR			LONG_ASM_CONST(0x0000001000000000)
#define CPU_FTR_IABR			LONG_ASM_CONST(0x0000002000000000)
#define CPU_FTR_MMCRA			LONG_ASM_CONST(0x0000004000000000)
#define CPU_FTR_CTRL			LONG_ASM_CONST(0x0000008000000000)
#define CPU_FTR_SMT			LONG_ASM_CONST(0x0000010000000000)
#define CPU_FTR_PAUSE_ZERO		LONG_ASM_CONST(0x0000200000000000)
#define CPU_FTR_PURR			LONG_ASM_CONST(0x0000400000000000)
#define CPU_FTR_CELL_TB_BUG		LONG_ASM_CONST(0x0000800000000000)
#define CPU_FTR_SPURR			LONG_ASM_CONST(0x0001000000000000)
#define CPU_FTR_DSCR			LONG_ASM_CONST(0x0002000000000000)
#define CPU_FTR_VSX			LONG_ASM_CONST(0x0010000000000000)
#define CPU_FTR_SAO			LONG_ASM_CONST(0x0020000000000000)
#define CPU_FTR_CP_USE_DCBTZ		LONG_ASM_CONST(0x0040000000000000)
#define CPU_FTR_UNALIGNED_LD_STD	LONG_ASM_CONST(0x0080000000000000)
#define CPU_FTR_ASYM_SMT		LONG_ASM_CONST(0x0100000000000000)
#define CPU_FTR_STCX_CHECKS_ADDRESS	LONG_ASM_CONST(0x0200000000000000)
#define CPU_FTR_POPCNTB			LONG_ASM_CONST(0x0400000000000000)
#define CPU_FTR_POPCNTD			LONG_ASM_CONST(0x0800000000000000)
#define CPU_FTR_ICSWX			LONG_ASM_CONST(0x1000000000000000)
#define CPU_FTR_PPCAS_ARCH_V2	(CPU_FTR_NOEXECUTE | CPU_FTR_NODSISRALIGN)
#define MMU_FTR_PPCAS_ARCH_V2 	(MMU_FTR_SLB | MMU_FTR_TLBIEL | \
MMU_FTR_16M_PAGE)
#define CPU_FTR_ALTIVEC_COMP	CPU_FTR_ALTIVEC
#define PPC_FEATURE_HAS_ALTIVEC_COMP PPC_FEATURE_HAS_ALTIVEC
#define CPU_FTR_ALTIVEC_COMP	0
#define PPC_FEATURE_HAS_ALTIVEC_COMP    0
#define CPU_FTR_VSX_COMP	CPU_FTR_VSX
#define PPC_FEATURE_HAS_VSX_COMP PPC_FEATURE_HAS_VSX
#define CPU_FTR_VSX_COMP	0
#define PPC_FEATURE_HAS_VSX_COMP    0
#define CPU_FTR_SPE_COMP	CPU_FTR_SPE
#define PPC_FEATURE_HAS_SPE_COMP PPC_FEATURE_HAS_SPE
#define PPC_FEATURE_HAS_EFP_SINGLE_COMP PPC_FEATURE_HAS_EFP_SINGLE
#define PPC_FEATURE_HAS_EFP_DOUBLE_COMP PPC_FEATURE_HAS_EFP_DOUBLE
#define CPU_FTR_SPE_COMP	0
#define PPC_FEATURE_HAS_SPE_COMP    0
#define PPC_FEATURE_HAS_EFP_SINGLE_COMP 0
#define PPC_FEATURE_HAS_EFP_DOUBLE_COMP 0
#if defined(CONFIG_SMP) || defined(CONFIG_MPC10X_BRIDGE) \
|| defined(CONFIG_PPC_83xx) || defined(CONFIG_8260) \
|| defined(CONFIG_PPC_MPC52xx)
#define CPU_FTR_COMMON                  CPU_FTR_NEED_COHERENT
#define CPU_FTR_COMMON                  0
#define CPU_FTR_MAYBE_CAN_DOZE	CPU_FTR_CAN_DOZE
#define CPU_FTR_MAYBE_CAN_NAP	CPU_FTR_CAN_NAP
#define CPU_FTR_MAYBE_CAN_DOZE	0
#define CPU_FTR_MAYBE_CAN_NAP	0
#define CLASSIC_PPC (!defined(CONFIG_8xx) && !defined(CONFIG_4xx) && \
!defined(CONFIG_POWER3) && !defined(CONFIG_POWER4) && \
!defined(CONFIG_BOOKE))
#define CPU_FTRS_PPC601	(CPU_FTR_COMMON | CPU_FTR_601 | \
CPU_FTR_COHERENT_ICACHE | CPU_FTR_UNIFIED_ID_CACHE)
#define CPU_FTRS_603	(CPU_FTR_COMMON | \
CPU_FTR_MAYBE_CAN_DOZE | CPU_FTR_USE_TB | \
CPU_FTR_MAYBE_CAN_NAP | CPU_FTR_PPC_LE)
#define CPU_FTRS_604	(CPU_FTR_COMMON | \
CPU_FTR_USE_TB | CPU_FTR_PPC_LE)
#define CPU_FTRS_740_NOTAU	(CPU_FTR_COMMON | \
CPU_FTR_MAYBE_CAN_DOZE | CPU_FTR_USE_TB | CPU_FTR_L2CR | \
CPU_FTR_MAYBE_CAN_NAP | CPU_FTR_PPC_LE)
#define CPU_FTRS_740	(CPU_FTR_COMMON | \
CPU_FTR_MAYBE_CAN_DOZE | CPU_FTR_USE_TB | CPU_FTR_L2CR | \
CPU_FTR_TAU | CPU_FTR_MAYBE_CAN_NAP | \
CPU_FTR_PPC_LE)
#define CPU_FTRS_750	(CPU_FTR_COMMON | \
CPU_FTR_MAYBE_CAN_DOZE | CPU_FTR_USE_TB | CPU_FTR_L2CR | \
CPU_FTR_TAU | CPU_FTR_MAYBE_CAN_NAP | \
CPU_FTR_PPC_LE)
#define CPU_FTRS_750CL	(CPU_FTRS_750)
#define CPU_FTRS_750FX1	(CPU_FTRS_750 | CPU_FTR_DUAL_PLL_750FX | CPU_FTR_NO_DPM)
#define CPU_FTRS_750FX2	(CPU_FTRS_750 | CPU_FTR_NO_DPM)
#define CPU_FTRS_750FX	(CPU_FTRS_750 | CPU_FTR_DUAL_PLL_750FX)
#define CPU_FTRS_750GX	(CPU_FTRS_750FX)
#define CPU_FTRS_7400_NOTAU	(CPU_FTR_COMMON | \
CPU_FTR_MAYBE_CAN_DOZE | CPU_FTR_USE_TB | CPU_FTR_L2CR | \
CPU_FTR_ALTIVEC_COMP | \
CPU_FTR_MAYBE_CAN_NAP | CPU_FTR_PPC_LE)
#define CPU_FTRS_7400	(CPU_FTR_COMMON | \
CPU_FTR_MAYBE_CAN_DOZE | CPU_FTR_USE_TB | CPU_FTR_L2CR | \
CPU_FTR_TAU | CPU_FTR_ALTIVEC_COMP | \
CPU_FTR_MAYBE_CAN_NAP | CPU_FTR_PPC_LE)
#define CPU_FTRS_7450_20	(CPU_FTR_COMMON | \
CPU_FTR_USE_TB | CPU_FTR_L2CR | CPU_FTR_ALTIVEC_COMP | \
CPU_FTR_L3CR | CPU_FTR_SPEC7450 | \
CPU_FTR_NEED_COHERENT | CPU_FTR_PPC_LE | CPU_FTR_NEED_PAIRED_STWCX)
#define CPU_FTRS_7450_21	(CPU_FTR_COMMON | \
CPU_FTR_USE_TB | \
CPU_FTR_MAYBE_CAN_NAP | CPU_FTR_L2CR | CPU_FTR_ALTIVEC_COMP | \
CPU_FTR_L3CR | CPU_FTR_SPEC7450 | \
CPU_FTR_NAP_DISABLE_L2_PR | CPU_FTR_L3_DISABLE_NAP | \
CPU_FTR_NEED_COHERENT | CPU_FTR_PPC_LE | CPU_FTR_NEED_PAIRED_STWCX)
#define CPU_FTRS_7450_23	(CPU_FTR_COMMON | \
CPU_FTR_USE_TB | CPU_FTR_NEED_PAIRED_STWCX | \
CPU_FTR_MAYBE_CAN_NAP | CPU_FTR_L2CR | CPU_FTR_ALTIVEC_COMP | \
CPU_FTR_L3CR | CPU_FTR_SPEC7450 | \
CPU_FTR_NAP_DISABLE_L2_PR | CPU_FTR_NEED_COHERENT | CPU_FTR_PPC_LE)
#define CPU_FTRS_7455_1	(CPU_FTR_COMMON | \
CPU_FTR_USE_TB | CPU_FTR_NEED_PAIRED_STWCX | \
CPU_FTR_L2CR | CPU_FTR_ALTIVEC_COMP | CPU_FTR_L3CR | \
CPU_FTR_SPEC7450 | CPU_FTR_NEED_COHERENT | CPU_FTR_PPC_LE)
#define CPU_FTRS_7455_20	(CPU_FTR_COMMON | \
CPU_FTR_USE_TB | CPU_FTR_NEED_PAIRED_STWCX | \
CPU_FTR_MAYBE_CAN_NAP | CPU_FTR_L2CR | CPU_FTR_ALTIVEC_COMP | \
CPU_FTR_L3CR | CPU_FTR_SPEC7450 | \
CPU_FTR_NAP_DISABLE_L2_PR | CPU_FTR_L3_DISABLE_NAP | \
CPU_FTR_NEED_COHERENT | CPU_FTR_PPC_LE)
#define CPU_FTRS_7455	(CPU_FTR_COMMON | \
CPU_FTR_USE_TB | \
CPU_FTR_MAYBE_CAN_NAP | CPU_FTR_L2CR | CPU_FTR_ALTIVEC_COMP | \
CPU_FTR_L3CR | CPU_FTR_SPEC7450 | CPU_FTR_NAP_DISABLE_L2_PR | \
CPU_FTR_NEED_COHERENT | CPU_FTR_PPC_LE | CPU_FTR_NEED_PAIRED_STWCX)
#define CPU_FTRS_7447_10	(CPU_FTR_COMMON | \
CPU_FTR_USE_TB | \
CPU_FTR_MAYBE_CAN_NAP | CPU_FTR_L2CR | CPU_FTR_ALTIVEC_COMP | \
CPU_FTR_L3CR | CPU_FTR_SPEC7450 | CPU_FTR_NAP_DISABLE_L2_PR | \
CPU_FTR_NEED_COHERENT | CPU_FTR_NO_BTIC | CPU_FTR_PPC_LE | \
CPU_FTR_NEED_PAIRED_STWCX)
#define CPU_FTRS_7447	(CPU_FTR_COMMON | \
CPU_FTR_USE_TB | \
CPU_FTR_MAYBE_CAN_NAP | CPU_FTR_L2CR | CPU_FTR_ALTIVEC_COMP | \
CPU_FTR_L3CR | CPU_FTR_SPEC7450 | CPU_FTR_NAP_DISABLE_L2_PR | \
CPU_FTR_NEED_COHERENT | CPU_FTR_PPC_LE | CPU_FTR_NEED_PAIRED_STWCX)
#define CPU_FTRS_7447A	(CPU_FTR_COMMON | \
CPU_FTR_USE_TB | \
CPU_FTR_MAYBE_CAN_NAP | CPU_FTR_L2CR | CPU_FTR_ALTIVEC_COMP | \
CPU_FTR_SPEC7450 | CPU_FTR_NAP_DISABLE_L2_PR | \
CPU_FTR_NEED_COHERENT | CPU_FTR_PPC_LE | CPU_FTR_NEED_PAIRED_STWCX)
#define CPU_FTRS_7448	(CPU_FTR_COMMON | \
CPU_FTR_USE_TB | \
CPU_FTR_MAYBE_CAN_NAP | CPU_FTR_L2CR | CPU_FTR_ALTIVEC_COMP | \
CPU_FTR_SPEC7450 | CPU_FTR_NAP_DISABLE_L2_PR | \
CPU_FTR_PPC_LE | CPU_FTR_NEED_PAIRED_STWCX)
#define CPU_FTRS_82XX	(CPU_FTR_COMMON | \
CPU_FTR_MAYBE_CAN_DOZE | CPU_FTR_USE_TB)
#define CPU_FTRS_G2_LE	(CPU_FTR_COMMON | CPU_FTR_MAYBE_CAN_DOZE | \
CPU_FTR_USE_TB | CPU_FTR_MAYBE_CAN_NAP)
#define CPU_FTRS_E300	(CPU_FTR_MAYBE_CAN_DOZE | \
CPU_FTR_USE_TB | CPU_FTR_MAYBE_CAN_NAP | \
CPU_FTR_COMMON)
#define CPU_FTRS_E300C2	(CPU_FTR_MAYBE_CAN_DOZE | \
CPU_FTR_USE_TB | CPU_FTR_MAYBE_CAN_NAP | \
CPU_FTR_COMMON | CPU_FTR_FPU_UNAVAILABLE)
#define CPU_FTRS_CLASSIC32	(CPU_FTR_COMMON | CPU_FTR_USE_TB)
#define CPU_FTRS_8XX	(CPU_FTR_USE_TB)
#define CPU_FTRS_40X	(CPU_FTR_USE_TB | CPU_FTR_NODSISRALIGN | CPU_FTR_NOEXECUTE)
#define CPU_FTRS_44X	(CPU_FTR_USE_TB | CPU_FTR_NODSISRALIGN | CPU_FTR_NOEXECUTE)
#define CPU_FTRS_440x6	(CPU_FTR_USE_TB | CPU_FTR_NODSISRALIGN | CPU_FTR_NOEXECUTE | \
CPU_FTR_INDEXED_DCR)
#define CPU_FTRS_47X	(CPU_FTRS_440x6)
#define CPU_FTRS_E200	(CPU_FTR_USE_TB | CPU_FTR_SPE_COMP | \
CPU_FTR_NODSISRALIGN | CPU_FTR_COHERENT_ICACHE | \
CPU_FTR_UNIFIED_ID_CACHE | CPU_FTR_NOEXECUTE)
#define CPU_FTRS_E500	(CPU_FTR_MAYBE_CAN_DOZE | CPU_FTR_USE_TB | \
CPU_FTR_SPE_COMP | CPU_FTR_MAYBE_CAN_NAP | CPU_FTR_NODSISRALIGN | \
CPU_FTR_NOEXECUTE)
#define CPU_FTRS_E500_2	(CPU_FTR_MAYBE_CAN_DOZE | CPU_FTR_USE_TB | \
CPU_FTR_SPE_COMP | CPU_FTR_MAYBE_CAN_NAP | \
CPU_FTR_NODSISRALIGN | CPU_FTR_NOEXECUTE)
#define CPU_FTRS_E500MC	(CPU_FTR_USE_TB | CPU_FTR_NODSISRALIGN | \
CPU_FTR_L2CSR | CPU_FTR_LWSYNC | CPU_FTR_NOEXECUTE | \
CPU_FTR_DBELL)
#define CPU_FTRS_E5500	(CPU_FTR_USE_TB | CPU_FTR_NODSISRALIGN | \
CPU_FTR_L2CSR | CPU_FTR_LWSYNC | CPU_FTR_NOEXECUTE | \
CPU_FTR_DBELL | CPU_FTR_POPCNTB | CPU_FTR_POPCNTD | \
CPU_FTR_DEBUG_LVL_EXC)
#define CPU_FTRS_GENERIC_32	(CPU_FTR_COMMON | CPU_FTR_NODSISRALIGN)
#define CPU_FTRS_POWER3	(CPU_FTR_USE_TB | \
CPU_FTR_IABR | CPU_FTR_PPC_LE)
#define CPU_FTRS_RS64	(CPU_FTR_USE_TB | \
CPU_FTR_IABR | \
CPU_FTR_MMCRA | CPU_FTR_CTRL)
#define CPU_FTRS_POWER4	(CPU_FTR_USE_TB | CPU_FTR_LWSYNC | \
CPU_FTR_PPCAS_ARCH_V2 | CPU_FTR_CTRL | \
CPU_FTR_MMCRA | CPU_FTR_CP_USE_DCBTZ | \
CPU_FTR_STCX_CHECKS_ADDRESS)
#define CPU_FTRS_PPC970	(CPU_FTR_USE_TB | CPU_FTR_LWSYNC | \
CPU_FTR_PPCAS_ARCH_V2 | CPU_FTR_CTRL | \
CPU_FTR_ALTIVEC_COMP | CPU_FTR_CAN_NAP | CPU_FTR_MMCRA | \
CPU_FTR_CP_USE_DCBTZ | CPU_FTR_STCX_CHECKS_ADDRESS)
#define CPU_FTRS_POWER5	(CPU_FTR_USE_TB | CPU_FTR_LWSYNC | \
CPU_FTR_PPCAS_ARCH_V2 | CPU_FTR_CTRL | \
CPU_FTR_MMCRA | CPU_FTR_SMT | \
CPU_FTR_COHERENT_ICACHE | CPU_FTR_PURR | \
CPU_FTR_STCX_CHECKS_ADDRESS | CPU_FTR_POPCNTB)
#define CPU_FTRS_POWER6 (CPU_FTR_USE_TB | CPU_FTR_LWSYNC | \
CPU_FTR_PPCAS_ARCH_V2 | CPU_FTR_CTRL | \
CPU_FTR_MMCRA | CPU_FTR_SMT | \
CPU_FTR_COHERENT_ICACHE | \
CPU_FTR_PURR | CPU_FTR_SPURR | CPU_FTR_REAL_LE | \
CPU_FTR_DSCR | CPU_FTR_UNALIGNED_LD_STD | \
CPU_FTR_STCX_CHECKS_ADDRESS | CPU_FTR_POPCNTB | CPU_FTR_CFAR)
#define CPU_FTRS_POWER7 (CPU_FTR_USE_TB | CPU_FTR_LWSYNC | \
CPU_FTR_PPCAS_ARCH_V2 | CPU_FTR_CTRL | CPU_FTR_HVMODE_206 |\
CPU_FTR_MMCRA | CPU_FTR_SMT | \
CPU_FTR_COHERENT_ICACHE | \
CPU_FTR_PURR | CPU_FTR_SPURR | CPU_FTR_REAL_LE | \
CPU_FTR_DSCR | CPU_FTR_SAO  | CPU_FTR_ASYM_SMT | \
CPU_FTR_STCX_CHECKS_ADDRESS | CPU_FTR_POPCNTB | CPU_FTR_POPCNTD | \
CPU_FTR_ICSWX | CPU_FTR_CFAR)
#define CPU_FTRS_CELL	(CPU_FTR_USE_TB | CPU_FTR_LWSYNC | \
CPU_FTR_PPCAS_ARCH_V2 | CPU_FTR_CTRL | \
CPU_FTR_ALTIVEC_COMP | CPU_FTR_MMCRA | CPU_FTR_SMT | \
CPU_FTR_PAUSE_ZERO  | CPU_FTR_CELL_TB_BUG | CPU_FTR_CP_USE_DCBTZ | \
CPU_FTR_UNALIGNED_LD_STD)
#define CPU_FTRS_PA6T (CPU_FTR_USE_TB | CPU_FTR_LWSYNC | \
CPU_FTR_PPCAS_ARCH_V2 | CPU_FTR_ALTIVEC_COMP | \
CPU_FTR_PURR | CPU_FTR_REAL_LE)
#define CPU_FTRS_COMPATIBLE	(CPU_FTR_USE_TB | CPU_FTR_PPCAS_ARCH_V2)
#define CPU_FTRS_A2 (CPU_FTR_USE_TB | CPU_FTR_SMT | CPU_FTR_DBELL | \
CPU_FTR_NOEXECUTE | CPU_FTR_NODSISRALIGN)
#define CPU_FTRS_POSSIBLE	(CPU_FTRS_E5500 | CPU_FTRS_A2)
#define CPU_FTRS_POSSIBLE	\
(CPU_FTRS_POWER3 | CPU_FTRS_RS64 | CPU_FTRS_POWER4 |	\
CPU_FTRS_PPC970 | CPU_FTRS_POWER5 | CPU_FTRS_POWER6 |	\
CPU_FTRS_POWER7 | CPU_FTRS_CELL | CPU_FTRS_PA6T |		\
CPU_FTR_VSX)
enum ;
#define CPU_FTRS_ALWAYS		(CPU_FTRS_E5500 & CPU_FTRS_A2)
#define CPU_FTRS_ALWAYS		\
(CPU_FTRS_POWER3 & CPU_FTRS_RS64 & CPU_FTRS_POWER4 &	\
CPU_FTRS_PPC970 & CPU_FTRS_POWER5 & CPU_FTRS_POWER6 &	\
CPU_FTRS_POWER7 & CPU_FTRS_CELL & CPU_FTRS_PA6T & CPU_FTRS_POSSIBLE)
enum ;
static inline int cpu_has_feature(unsigned long feature)
#define HBP_NUM 1
