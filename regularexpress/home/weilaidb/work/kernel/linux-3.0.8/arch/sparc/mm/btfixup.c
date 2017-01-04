#define BTFIXUP_OPTIMIZE_NOP
#define BTFIXUP_OPTIMIZE_OTHER
extern char *srmmu_name;
static char version[] __initdata = "Boot time fixup v1.6. 4/Mar/98 Jakub Jelinek (jj@ultra.linux.cz). Patching kernel for ";
static char str_sun4c[] __initdata = "sun4c\n";
static char str_srmmu[] __initdata = "srmmu[%s]/";
static char str_iommu[] __initdata = "iommu\n";
static char str_iounit[] __initdata = "io-unit\n";
static int visited __initdata = 0;
extern unsigned int ___btfixup_start[], ___btfixup_end[], __init_begin[], __init_end[], __init_text_end[];
extern unsigned int _stext[], _end[], __start___ksymtab[], __stop___ksymtab[];
static char wrong_f[] __initdata = "Trying to set f fixup %p to invalid function %08x\n";
static char wrong_b[] __initdata = "Trying to set b fixup %p to invalid function %08x\n";
static char wrong_s[] __initdata = "Trying to set s fixup %p to invalid value %08x\n";
static char wrong_h[] __initdata = "Trying to set h fixup %p to invalid value %08x\n";
static char wrong_a[] __initdata = "Trying to set a fixup %p to invalid value %08x\n";
static char wrong[] __initdata = "Wrong address for %c fixup %p\n";
static char insn_f[] __initdata = "Fixup f %p refers to weird instructions at %p[%08x,%08x]\n";
static char insn_b[] __initdata = "Fixup b %p doesn't refer to a SETHI at %p[%08x]\n";
static char insn_s[] __initdata = "Fixup s %p doesn't refer to an OR at %p[%08x]\n";
static char insn_h[] __initdata = "Fixup h %p doesn't refer to a SETHI at %p[%08x]\n";
static char insn_a[] __initdata = "Fixup a %p doesn't refer to a SETHI nor OR at %p[%08x]\n";
static char insn_i[] __initdata = "Fixup i %p doesn't refer to a valid instruction at %p[%08x]\n";
static char fca_und[] __initdata = "flush_cache_all undefined in btfixup()\n";
static char wrong_setaddr[] __initdata = "Garbled CALL/INT patch at %p[%08x,%08x,%08x]=%08x\n";
static void __init set_addr(unsigned int *addr, unsigned int q1, int fmangled, unsigned int value)
static inline void set_addr(unsigned int *addr, unsigned int q1, int fmangled, unsigned int value)
void __init btfixup(void)
