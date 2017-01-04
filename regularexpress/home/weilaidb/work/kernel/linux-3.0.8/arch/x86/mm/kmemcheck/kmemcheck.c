#  define KMEMCHECK_ENABLED 0
#  define KMEMCHECK_ENABLED 1
#  define KMEMCHECK_ENABLED 2
int kmemcheck_enabled = KMEMCHECK_ENABLED;
int __init kmemcheck_init(void)
early_initcall(kmemcheck_init);
static int __init param_kmemcheck(char *str)
early_param("kmemcheck", param_kmemcheck);
int kmemcheck_show_addr(unsigned long address)
int kmemcheck_hide_addr(unsigned long address)
struct kmemcheck_context ;
static DEFINE_PER_CPU(struct kmemcheck_context, kmemcheck_context);
bool kmemcheck_active(struct pt_regs *regs)
static void kmemcheck_save_addr(unsigned long addr)
static unsigned int kmemcheck_show_all(void)
static unsigned int kmemcheck_hide_all(void)
void kmemcheck_show(struct pt_regs *regs)
void kmemcheck_hide(struct pt_regs *regs)
void kmemcheck_show_pages(struct page *p, unsigned int n)
bool kmemcheck_page_is_tracked(struct page *p)
void kmemcheck_hide_pages(struct page *p, unsigned int n)
static void kmemcheck_read_strict(struct pt_regs *regs,
unsigned long addr, unsigned int size)
bool kmemcheck_is_obj_initialized(unsigned long addr, size_t size)
static void kmemcheck_read(struct pt_regs *regs,
unsigned long addr, unsigned int size)
static void kmemcheck_write_strict(struct pt_regs *regs,
unsigned long addr, unsigned int size)
static void kmemcheck_write(struct pt_regs *regs,
unsigned long addr, unsigned int size)
static void kmemcheck_copy(struct pt_regs *regs,
unsigned long src_addr, unsigned long dst_addr, unsigned int size)
enum kmemcheck_method ;
static void kmemcheck_access(struct pt_regs *regs,
unsigned long fallback_address, enum kmemcheck_method fallback_method)
bool kmemcheck_fault(struct pt_regs *regs, unsigned long address,
unsigned long error_code)
bool kmemcheck_trap(struct pt_regs *regs)
