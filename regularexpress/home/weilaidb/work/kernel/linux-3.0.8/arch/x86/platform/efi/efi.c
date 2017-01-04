#define EFI_DEBUG	1
#define PFX 		"EFI: "
int efi_enabled;
EXPORT_SYMBOL(efi_enabled);
struct efi efi;
EXPORT_SYMBOL(efi);
struct efi_memory_map memmap;
static struct efi efi_phys __initdata;
static efi_system_table_t efi_systab __initdata;
static int __init setup_noefi(char *arg)
early_param("noefi", setup_noefi);
int add_efi_memmap;
EXPORT_SYMBOL(add_efi_memmap);
static int __init setup_add_efi_memmap(char *arg)
early_param("add_efi_memmap", setup_add_efi_memmap);
static efi_status_t virt_efi_get_time(efi_time_t *tm, efi_time_cap_t *tc)
static efi_status_t virt_efi_set_time(efi_time_t *tm)
static efi_status_t virt_efi_get_wakeup_time(efi_bool_t *enabled,
efi_bool_t *pending,
efi_time_t *tm)
static efi_status_t virt_efi_set_wakeup_time(efi_bool_t enabled, efi_time_t *tm)
static efi_status_t virt_efi_get_variable(efi_char16_t *name,
efi_guid_t *vendor,
u32 *attr,
unsigned long *data_size,
void *data)
static efi_status_t virt_efi_get_next_variable(unsigned long *name_size,
efi_char16_t *name,
efi_guid_t *vendor)
static efi_status_t virt_efi_set_variable(efi_char16_t *name,
efi_guid_t *vendor,
unsigned long attr,
unsigned long data_size,
void *data)
static efi_status_t virt_efi_get_next_high_mono_count(u32 *count)
static void virt_efi_reset_system(int reset_type,
efi_status_t status,
unsigned long data_size,
efi_char16_t *data)
static efi_status_t __init phys_efi_set_virtual_address_map(
unsigned long memory_map_size,
unsigned long descriptor_size,
u32 descriptor_version,
efi_memory_desc_t *virtual_map)
static efi_status_t __init phys_efi_get_time(efi_time_t *tm,
efi_time_cap_t *tc)
int efi_set_rtc_mmss(unsigned long nowtime)
unsigned long efi_get_time(void)
static void __init do_add_efi_memmap(void)
void __init efi_memblock_x86_reserve_range(void)
#if EFI_DEBUG
static void __init print_efi_memmap(void)
void __init efi_reserve_boot_services(void)
static void __init efi_free_boot_services(void)
void __init efi_init(void)
void __init efi_set_executable(efi_memory_desc_t *md, bool executable)
static void __init runtime_code_page_mkexec(void)
void __init efi_enter_virtual_mode(void)
u32 efi_mem_type(unsigned long phys_addr)
u64 efi_mem_attributes(unsigned long phys_addr)
