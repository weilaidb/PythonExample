#define _ASM_IA64_KEXEC_H
#define KEXEC_SOURCE_MEMORY_LIMIT (-1UL)
#define KEXEC_DESTINATION_MEMORY_LIMIT (-1UL)
#define KEXEC_CONTROL_MEMORY_LIMIT TASK_SIZE
#define KEXEC_CONTROL_PAGE_SIZE (8192 + 8192 + 4096)
#define KEXEC_ARCH KEXEC_ARCH_IA_64
#define kexec_flush_icache_page(page) do  while(0)
extern struct kimage *ia64_kimage;
extern const unsigned int relocate_new_kernel_size;
extern void relocate_new_kernel(unsigned long, unsigned long,
struct ia64_boot_param *, unsigned long);
static inline void
crash_setup_regs(struct pt_regs *newregs, struct pt_regs *oldregs)
extern struct resource efi_memmap_res;
extern struct resource boot_param_res;
extern void kdump_smp_send_stop(void);
extern void kdump_smp_send_init(void);
extern void kexec_disable_iosapic(void);
extern void crash_save_this_cpu(void);
struct rsvd_region;
extern unsigned long kdump_find_rsvd_region(unsigned long size,
struct rsvd_region *rsvd_regions, int n);
extern void kdump_cpu_freeze(struct unw_frame_info *info, void *arg);
extern int kdump_status[];
extern atomic_t kdump_cpu_freezed;
extern atomic_t kdump_in_progress;
