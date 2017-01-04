#define EFI_DEBUG	0
extern efi_status_t efi_call_phys (void *, ...);
struct efi efi;
EXPORT_SYMBOL(efi);
static efi_runtime_services_t *runtime;
static u64 mem_limit = ~0UL, max_addr = ~0UL, min_addr = 0UL;
#define efi_call_virt(f, args...)	(*(f))(args)
#define STUB_GET_TIME(prefix, adjust_arg)				       \
static efi_status_t							       \
prefix##_get_time (efi_time_t *tm, efi_time_cap_t *tc)			       \
#define STUB_SET_TIME(prefix, adjust_arg)				       \
static efi_status_t							       \
prefix##_set_time (efi_time_t *tm)					       \
#define STUB_GET_WAKEUP_TIME(prefix, adjust_arg)			       \
static efi_status_t							       \
prefix##_get_wakeup_time (efi_bool_t *enabled, efi_bool_t *pending,	       \
efi_time_t *tm)				       \
#define STUB_SET_WAKEUP_TIME(prefix, adjust_arg)			       \
static efi_status_t							       \
prefix##_set_wakeup_time (efi_bool_t enabled, efi_time_t *tm)		       \
#define STUB_GET_VARIABLE(prefix, adjust_arg)				       \
static efi_status_t							       \
prefix##_get_variable (efi_char16_t *name, efi_guid_t *vendor, u32 *attr,      \
unsigned long *data_size, void *data)		       \
#define STUB_GET_NEXT_VARIABLE(prefix, adjust_arg)			       \
static efi_status_t							       \
prefix##_get_next_variable (unsigned long *name_size, efi_char16_t *name,      \
efi_guid_t *vendor)				       \
#define STUB_SET_VARIABLE(prefix, adjust_arg)				       \
static efi_status_t							       \
prefix##_set_variable (efi_char16_t *name, efi_guid_t *vendor,		       \
unsigned long attr, unsigned long data_size,	       \
void *data)					       \
#define STUB_GET_NEXT_HIGH_MONO_COUNT(prefix, adjust_arg)		       \
static efi_status_t							       \
prefix##_get_next_high_mono_count (u32 *count)				       \
#define STUB_RESET_SYSTEM(prefix, adjust_arg)				       \
static void								       \
prefix##_reset_system (int reset_type, efi_status_t status,		       \
unsigned long data_size, efi_char16_t *data)	       \
#define phys_ptr(arg)	((__typeof__(arg)) ia64_tpa(arg))
STUB_GET_TIME(phys, phys_ptr)
STUB_SET_TIME(phys, phys_ptr)
STUB_GET_WAKEUP_TIME(phys, phys_ptr)
STUB_SET_WAKEUP_TIME(phys, phys_ptr)
STUB_GET_VARIABLE(phys, phys_ptr)
STUB_GET_NEXT_VARIABLE(phys, phys_ptr)
STUB_SET_VARIABLE(phys, phys_ptr)
STUB_GET_NEXT_HIGH_MONO_COUNT(phys, phys_ptr)
STUB_RESET_SYSTEM(phys, phys_ptr)
#define id(arg)	arg
STUB_GET_TIME(virt, id)
STUB_SET_TIME(virt, id)
STUB_GET_WAKEUP_TIME(virt, id)
STUB_SET_WAKEUP_TIME(virt, id)
STUB_GET_VARIABLE(virt, id)
STUB_GET_NEXT_VARIABLE(virt, id)
STUB_SET_VARIABLE(virt, id)
STUB_GET_NEXT_HIGH_MONO_COUNT(virt, id)
STUB_RESET_SYSTEM(virt, id)
void
efi_gettimeofday (struct timespec *ts)
static int
is_memory_available (efi_memory_desc_t *md)
typedef struct kern_memdesc  kern_memdesc_t;
static kern_memdesc_t *kern_memmap;
#define efi_md_size(md)	(md->num_pages << EFI_PAGE_SHIFT)
static inline u64
kmd_end(kern_memdesc_t *kmd)
static inline u64
efi_md_end(efi_memory_desc_t *md)
static inline int
efi_wb(efi_memory_desc_t *md)
static inline int
efi_uc(efi_memory_desc_t *md)
static void
walk (efi_freemem_callback_t callback, void *arg, u64 attr)
void
efi_memmap_walk (efi_freemem_callback_t callback, void *arg)
void
efi_memmap_walk_uc (efi_freemem_callback_t callback, void *arg)
void *
efi_get_pal_addr (void)
static u8 __init palo_checksum(u8 *buffer, u32 length)
static void __init handle_palo(unsigned long palo_phys)
void
efi_map_pal_code (void)
void __init
efi_init (void)
void
efi_enter_virtual_mode (void)
u64
efi_get_iobase (void)
static struct kern_memdesc *
kern_memory_descriptor (unsigned long phys_addr)
static efi_memory_desc_t *
efi_memory_descriptor (unsigned long phys_addr)
static int
efi_memmap_intersects (unsigned long phys_addr, unsigned long size)
u32
efi_mem_type (unsigned long phys_addr)
u64
efi_mem_attributes (unsigned long phys_addr)
EXPORT_SYMBOL(efi_mem_attributes);
u64
efi_mem_attribute (unsigned long phys_addr, unsigned long size)
u64
kern_mem_attribute (unsigned long phys_addr, unsigned long size)
EXPORT_SYMBOL(kern_mem_attribute);
int
valid_phys_addr_range (unsigned long phys_addr, unsigned long size)
int
valid_mmap_phys_addr_range (unsigned long pfn, unsigned long size)
pgprot_t
phys_mem_access_prot(struct file *file, unsigned long pfn, unsigned long size,
pgprot_t vma_prot)
int __init
efi_uart_console_only(void)
struct kern_memdesc *
find_memmap_space (void)
unsigned long
efi_memmap_init(u64 *s, u64 *e)
void
efi_initialize_iomem_resources(struct resource *code_resource,
struct resource *data_resource,
struct resource *bss_resource)
unsigned long __init
kdump_find_rsvd_region (unsigned long size, struct rsvd_region *r, int n)
unsigned long __init
vmcore_find_descriptor_size (unsigned long address)
