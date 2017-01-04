#define PRINT_USER_FAULTS
#define bit22set(x)		(x & 0x00000200)
#define bits23_25set(x)		(x & 0x000001c0)
#define isGraphicsFlushRead(x)	((x & 0xfc003fdf) == 0x04001a80)
#define BITSSET		0x1c0
DEFINE_PER_CPU(struct exception_data, exception_data);
static unsigned long
parisc_acctyp(unsigned long code, unsigned int inst)
#undef bit22set
#undef bits23_25set
#undef isGraphicsFlushRead
#undef BITSSET
int fixup_exception(struct pt_regs *regs)
void do_page_fault(struct pt_regs *regs, unsigned long code,
unsigned long address)
