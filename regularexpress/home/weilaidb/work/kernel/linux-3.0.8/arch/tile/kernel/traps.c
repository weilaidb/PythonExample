void __init trap_init(void)
int unaligned_fixup = 1;
static int __init setup_unaligned_fixup(char *str)
__setup("unaligned_fixup=", setup_unaligned_fixup);
#if CHIP_HAS_TILE_DMA()
static int dma_disabled;
static int __init nodma(char *str)
__setup("nodma", nodma);
#define IRET_ERROR (1U << 31)
#define MT_ERROR   (1U << 30)
#define MF_ERROR   (1U << 29)
#define SPR_INDEX  ((1U << 15) - 1)
#define SPR_MPL_SHIFT  9
static int retry_gpv(unsigned int gpv_reason)
#define bundle_bits tilegx_bundle_bits
#define bundle_bits tile_bundle_bits
extern bundle_bits bpt_code;
asm(".pushsection .rodata.bpt_code,\"a\";"
".align 8;"
"bpt_code: bpt;"
".size bpt_code,.-bpt_code;"
".popsection");
static int special_ill(bundle_bits bundle, int *sigp, int *codep)
void __kprobes do_trap(struct pt_regs *regs, int fault_num,
unsigned long reason)
void kernel_double_fault(int dummy, ulong pc, ulong lr, ulong sp, ulong r52)
