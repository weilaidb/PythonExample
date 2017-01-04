static LIST_HEAD(vmcore_list);
static char *elfcorebuf;
static size_t elfcorebuf_sz;
static u64 vmcore_size;
static struct proc_dir_entry *proc_vmcore = NULL;
static int (*oldmem_pfn_is_ram)(unsigned long pfn);
int register_oldmem_pfn_is_ram(int (*fn)(unsigned long pfn))
EXPORT_SYMBOL_GPL(register_oldmem_pfn_is_ram);
void unregister_oldmem_pfn_is_ram(void)
EXPORT_SYMBOL_GPL(unregister_oldmem_pfn_is_ram);
static int pfn_is_ram(unsigned long pfn)
static ssize_t read_from_oldmem(char *buf, size_t count,
u64 *ppos, int userbuf)
static u64 map_offset_to_paddr(loff_t offset, struct list_head *vc_list,
struct vmcore **m_ptr)
static ssize_t read_vmcore(struct file *file, char __user *buffer,
size_t buflen, loff_t *fpos)
static const struct file_operations proc_vmcore_operations = ;
static struct vmcore* __init get_new_element(void)
static u64 __init get_vmcore_size_elf64(char *elfptr)
static u64 __init get_vmcore_size_elf32(char *elfptr)
static int __init merge_note_headers_elf64(char *elfptr, size_t *elfsz,
struct list_head *vc_list)
static int __init merge_note_headers_elf32(char *elfptr, size_t *elfsz,
struct list_head *vc_list)
static int __init process_ptload_program_headers_elf64(char *elfptr,
size_t elfsz,
struct list_head *vc_list)
static int __init process_ptload_program_headers_elf32(char *elfptr,
size_t elfsz,
struct list_head *vc_list)
static void __init set_vmcore_list_offsets_elf64(char *elfptr,
struct list_head *vc_list)
static void __init set_vmcore_list_offsets_elf32(char *elfptr,
struct list_head *vc_list)
static int __init parse_crash_elf64_headers(void)
static int __init parse_crash_elf32_headers(void)
static int __init parse_crash_elf_headers(void)
static int __init vmcore_init(void)
module_init(vmcore_init)
