note_buf_t __percpu *crash_notes;
static unsigned char vmcoreinfo_data[VMCOREINFO_BYTES];
u32 vmcoreinfo_note[VMCOREINFO_NOTE_SIZE/4];
size_t vmcoreinfo_size;
size_t vmcoreinfo_max_size = sizeof(vmcoreinfo_data);
struct resource crashk_res = ;
int kexec_should_crash(struct task_struct *p)
#define KIMAGE_NO_DEST (-1UL)
static int kimage_is_destination_range(struct kimage *image,
unsigned long start, unsigned long end);
static struct page *kimage_alloc_page(struct kimage *image,
gfp_t gfp_mask,
unsigned long dest);
static int do_kimage_alloc(struct kimage **rimage, unsigned long entry,
unsigned long nr_segments,
struct kexec_segment __user *segments)
static int kimage_normal_alloc(struct kimage **rimage, unsigned long entry,
unsigned long nr_segments,
struct kexec_segment __user *segments)
static int kimage_crash_alloc(struct kimage **rimage, unsigned long entry,
unsigned long nr_segments,
struct kexec_segment __user *segments)
static int kimage_is_destination_range(struct kimage *image,
unsigned long start,
unsigned long end)
static struct page *kimage_alloc_pages(gfp_t gfp_mask, unsigned int order)
static void kimage_free_pages(struct page *page)
static void kimage_free_page_list(struct list_head *list)
static struct page *kimage_alloc_normal_control_pages(struct kimage *image,
unsigned int order)
static struct page *kimage_alloc_crash_control_pages(struct kimage *image,
unsigned int order)
struct page *kimage_alloc_control_pages(struct kimage *image,
unsigned int order)
static int kimage_add_entry(struct kimage *image, kimage_entry_t entry)
static int kimage_set_destination(struct kimage *image,
unsigned long destination)
static int kimage_add_page(struct kimage *image, unsigned long page)
static void kimage_free_extra_pages(struct kimage *image)
static void kimage_terminate(struct kimage *image)
#define for_each_kimage_entry(image, ptr, entry) \
for (ptr = &image->head; (entry = *ptr) && !(entry & IND_DONE); \
ptr = (entry & IND_INDIRECTION)? \
phys_to_virt((entry & PAGE_MASK)): ptr +1)
static void kimage_free_entry(kimage_entry_t entry)
static void kimage_free(struct kimage *image)
static kimage_entry_t *kimage_dst_used(struct kimage *image,
unsigned long page)
static struct page *kimage_alloc_page(struct kimage *image,
gfp_t gfp_mask,
unsigned long destination)
static int kimage_load_normal_segment(struct kimage *image,
struct kexec_segment *segment)
static int kimage_load_crash_segment(struct kimage *image,
struct kexec_segment *segment)
static int kimage_load_segment(struct kimage *image,
struct kexec_segment *segment)
struct kimage *kexec_image;
struct kimage *kexec_crash_image;
static DEFINE_MUTEX(kexec_mutex);
SYSCALL_DEFINE4(kexec_load, unsigned long, entry, unsigned long, nr_segments,
struct kexec_segment __user *, segments, unsigned long, flags)
asmlinkage long compat_sys_kexec_load(unsigned long entry,
unsigned long nr_segments,
struct compat_kexec_segment __user *segments,
unsigned long flags)
void crash_kexec(struct pt_regs *regs)
size_t crash_get_memory_size(void)
void __weak crash_free_reserved_phys_range(unsigned long begin,
unsigned long end)
int crash_shrink_memory(unsigned long new_size)
static u32 *append_elf_note(u32 *buf, char *name, unsigned type, void *data,
size_t data_len)
static void final_note(u32 *buf)
void crash_save_cpu(struct pt_regs *regs, int cpu)
static int __init crash_notes_memory_init(void)
module_init(crash_notes_memory_init)
static int __init parse_crashkernel_mem(char 			*cmdline,
unsigned long long	system_ram,
unsigned long long	*crash_size,
unsigned long long	*crash_base)
static int __init parse_crashkernel_simple(char 		*cmdline,
unsigned long long 	*crash_size,
unsigned long long 	*crash_base)
int __init parse_crashkernel(char 		 *cmdline,
unsigned long long system_ram,
unsigned long long *crash_size,
unsigned long long *crash_base)
void crash_save_vmcoreinfo(void)
void vmcoreinfo_append_str(const char *fmt, ...)
void __attribute__ ((weak)) arch_crash_save_vmcoreinfo(void)
unsigned long __attribute__ ((weak)) paddr_vmcoreinfo_note(void)
static int __init crash_save_vmcoreinfo_init(void)
module_init(crash_save_vmcoreinfo_init)
int kernel_kexec(void)
