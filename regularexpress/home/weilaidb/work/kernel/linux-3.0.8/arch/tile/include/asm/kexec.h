#define _ASM_TILE_KEXEC_H
#define KEXEC_SOURCE_MEMORY_LIMIT TASK_SIZE
#define KEXEC_DESTINATION_MEMORY_LIMIT TASK_SIZE
#define KEXEC_CONTROL_MEMORY_LIMIT TASK_SIZE
#define KEXEC_CONTROL_PAGE_SIZE	PAGE_SIZE
#define KEXEC_ARCH KEXEC_ARCH_DEFAULT
struct page *kimage_alloc_pages_arch(gfp_t gfp_mask, unsigned int order);
#define kimage_alloc_pages_arch kimage_alloc_pages_arch
#define MAX_NOTE_BYTES 1024
extern const unsigned char relocate_new_kernel[];
extern const unsigned long relocate_new_kernel_size;
extern void relocate_new_kernel_end(void);
static inline void crash_setup_regs(struct pt_regs *n, struct pt_regs *o)
