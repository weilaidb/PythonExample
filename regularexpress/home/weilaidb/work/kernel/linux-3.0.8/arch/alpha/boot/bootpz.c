#define MALLOC_AREA_SIZE 0x200000
#undef DEBUG_CHECK_RANGE
#undef DEBUG_ADDRESSES
#undef DEBUG_LAST_STEPS
extern unsigned long switch_to_osf_pal(unsigned long nr,
struct pcb_struct * pcb_va, struct pcb_struct * pcb_pa,
unsigned long *vptb);
extern int decompress_kernel(void* destination, void *source,
size_t ksize, size_t kzsize);
extern void move_stack(unsigned long new_stack);
struct hwrpb_struct *hwrpb = INIT_HWRPB;
static struct pcb_struct pcb_va[1];
#define VPTB	((unsigned long *) 0x200000000)
static inline unsigned long
find_pa(unsigned long address)
int
check_range(unsigned long vstart, unsigned long vend,
unsigned long kstart, unsigned long kend)
#define L1	((unsigned long *) 0x200802000)
void
pal_init(void)
static inline void
runkernel(void)
unsigned long SP_on_entry;
extern char _end;
#define KERNEL_ORIGIN \
((((unsigned long)&_end) + 511) & ~511)
#define NEXT_PAGE(a)	(((a) | (PAGE_SIZE - 1)) + 1)
# define REAL_INITRD_SIZE INITRD_IMAGE_SIZE
# define REAL_INITRD_SIZE 0
#define V_BOOT_IMAGE_START	BOOT_ADDR
#define V_BOOT_IMAGE_END	SP_on_entry
#define V_BOOTSTRAPPER_START	BOOT_ADDR
#define V_BOOTSTRAPPER_END	KERNEL_ORIGIN
#define V_DATA_START		KERNEL_ORIGIN
#define V_INITRD_START		(KERNEL_ORIGIN + KERNEL_Z_SIZE)
#define V_INTRD_END		(V_INITRD_START + REAL_INITRD_SIZE)
#define V_DATA_END	 	V_BOOT_IMAGE_END
#define K_KERNEL_DATA_START	ZERO_PGE
#define K_KERNEL_IMAGE_START	START_ADDR
#define K_KERNEL_IMAGE_END	(START_ADDR + KERNEL_SIZE)
#define K_COPY_IMAGE_START	NEXT_PAGE(K_KERNEL_IMAGE_END)
#define K_INITRD_START \
NEXT_PAGE(K_COPY_IMAGE_START + KERNEL_SIZE + PAGE_SIZE)
#define K_COPY_IMAGE_END \
(K_INITRD_START + REAL_INITRD_SIZE + MALLOC_AREA_SIZE)
#define K_COPY_IMAGE_SIZE \
NEXT_PAGE(K_COPY_IMAGE_END - K_COPY_IMAGE_START)
void
start_kernel(void)
void *__kmalloc(size_t size, gfp_t flags)
