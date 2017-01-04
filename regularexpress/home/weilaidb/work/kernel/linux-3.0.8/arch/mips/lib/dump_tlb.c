static inline const char *msk2str(unsigned int mask)
#define BARRIER()					\
__asm__ __volatile__(				\
".set\tnoreorder\n\t"			\
"nop;nop;nop;nop;nop;nop;nop\n\t"	\
".set\treorder");
static void dump_tlb(int first, int last)
void dump_tlb_all(void)
