extern int vsprintf(char *, const char *, va_list);
extern unsigned long switch_to_osf_pal(unsigned long nr,
struct pcb_struct * pcb_va, struct pcb_struct * pcb_pa,
unsigned long *vptb);
struct hwrpb_struct *hwrpb = INIT_HWRPB;
static struct pcb_struct pcb_va[1];
static inline void *
find_pa(unsigned long *vptb, void *ptr)
#define VPTB	((unsigned long *) 0x200000000)
#define L1	((unsigned long *) 0x200802000)
void
pal_init(void)
static inline long openboot(void)
static inline long close(long dev)
static inline long load(long dev, unsigned long addr, unsigned long count)
static void runkernel(void)
void start_kernel(void)
