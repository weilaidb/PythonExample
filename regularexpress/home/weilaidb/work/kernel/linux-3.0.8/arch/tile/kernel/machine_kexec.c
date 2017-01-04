struct Elf32_Bhdr ;
#define ELF_BOOT_MAGIC		0x0E1FB007
#define EBN_COMMAND_LINE	0x00000004
#define roundupsz(X) (((X) + 3) & ~3)
void machine_shutdown(void)
void machine_crash_shutdown(struct pt_regs *regs)
int machine_kexec_prepare(struct kimage *image)
void machine_kexec_cleanup(struct kimage *image)
static unsigned char *kexec_bn2cl(void *pg)
static void kexec_find_and_set_command_line(struct kimage *image)
struct page *kimage_alloc_pages_arch(gfp_t gfp_mask, unsigned int order)
static void setup_quasi_va_is_pa(void)
NORET_TYPE void machine_kexec(struct kimage *image)
