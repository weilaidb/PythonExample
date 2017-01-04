extern const void __nosave_begin, __nosave_end;
extern int restore_image(void);
unsigned long restore_jump_address;
unsigned long restore_cr3;
pgd_t *temp_level4_pgt;
void *relocated_restore_code;
static int res_phys_pud_init(pud_t *pud, unsigned long address, unsigned long end)
static int set_up_temporary_mappings(void)
int swsusp_arch_resume(void)
int pfn_is_nosave(unsigned long pfn)
struct restore_data_record ;
#define RESTORE_MAGIC	0x0123456789ABCDEFUL
int arch_hibernation_header_save(void *addr, unsigned int max_size)
int arch_hibernation_header_restore(void *addr)
