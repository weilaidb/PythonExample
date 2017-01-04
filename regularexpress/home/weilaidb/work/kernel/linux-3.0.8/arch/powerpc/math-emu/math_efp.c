#define FP_EX_BOOKE_E500_SPE
#define EFAPU		0x4
#define VCT		0x4
#define SPFP		0x6
#define DPFP		0x7
#define EFSADD		0x2c0
#define EFSSUB		0x2c1
#define EFSABS		0x2c4
#define EFSNABS		0x2c5
#define EFSNEG		0x2c6
#define EFSMUL		0x2c8
#define EFSDIV		0x2c9
#define EFSCMPGT	0x2cc
#define EFSCMPLT	0x2cd
#define EFSCMPEQ	0x2ce
#define EFSCFD		0x2cf
#define EFSCFSI		0x2d1
#define EFSCTUI		0x2d4
#define EFSCTSI		0x2d5
#define EFSCTUF		0x2d6
#define EFSCTSF		0x2d7
#define EFSCTUIZ	0x2d8
#define EFSCTSIZ	0x2da
#define EVFSADD		0x280
#define EVFSSUB		0x281
#define EVFSABS		0x284
#define EVFSNABS	0x285
#define EVFSNEG		0x286
#define EVFSMUL		0x288
#define EVFSDIV		0x289
#define EVFSCMPGT	0x28c
#define EVFSCMPLT	0x28d
#define EVFSCMPEQ	0x28e
#define EVFSCTUI	0x294
#define EVFSCTSI	0x295
#define EVFSCTUF	0x296
#define EVFSCTSF	0x297
#define EVFSCTUIZ	0x298
#define EVFSCTSIZ	0x29a
#define EFDADD		0x2e0
#define EFDSUB		0x2e1
#define EFDABS		0x2e4
#define EFDNABS		0x2e5
#define EFDNEG		0x2e6
#define EFDMUL		0x2e8
#define EFDDIV		0x2e9
#define EFDCTUIDZ	0x2ea
#define EFDCTSIDZ	0x2eb
#define EFDCMPGT	0x2ec
#define EFDCMPLT	0x2ed
#define EFDCMPEQ	0x2ee
#define EFDCFS		0x2ef
#define EFDCTUI		0x2f4
#define EFDCTSI		0x2f5
#define EFDCTUF		0x2f6
#define EFDCTSF		0x2f7
#define EFDCTUIZ	0x2f8
#define EFDCTSIZ	0x2fa
#define AB	2
#define XA	3
#define XB	4
#define XCR	5
#define NOTYPE	0
#define SIGN_BIT_S	(1UL << 31)
#define SIGN_BIT_D	(1ULL << 63)
#define FP_EX_MASK	(FP_EX_INEXACT | FP_EX_INVALID | FP_EX_DIVZERO | \
FP_EX_UNDERFLOW | FP_EX_OVERFLOW)
static int have_e500_cpu_a005_erratum;
union dw_union ;
static unsigned long insn_type(unsigned long speinsn)
int do_spe_mathemu(struct pt_regs *regs)
int speround_handler(struct pt_regs *regs)
int __init spe_mathemu_init(void)
module_init(spe_mathemu_init);
