extern unsigned long switch_to_osf_pal(unsigned long nr,
struct pcb_struct * pcb_va, struct pcb_struct * pcb_pa,
unsigned long *vptb);
extern void move_stack(unsigned long new_stack);
struct hwrpb_struct *hwrpb = INIT_HWRPB;
static struct pcb_struct pcb_va[1];
static inline void *
find_pa(unsigned long *vptb, void *ptr)
#define VPTB	((unsigned long *) 0x200000000)
#define L1	((unsigned long *) 0x200802000)
void
pal_init(void)
static inline void
load(unsigned long dst, unsigned long src, unsigned long count)
static inline void
runkernel(void)
extern char _end;
#define KERNEL_ORIGIN \
((((unsigned long)&_end) + 511) & ~511)
void
start_kernel(void)
