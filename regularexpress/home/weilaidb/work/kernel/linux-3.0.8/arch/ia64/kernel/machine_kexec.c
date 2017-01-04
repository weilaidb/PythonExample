typedef NORET_TYPE void (*relocate_new_kernel_t)(
unsigned long indirection_page,
unsigned long start_address,
struct ia64_boot_param *boot_param,
unsigned long pal_addr) ATTRIB_NORET;
struct kimage *ia64_kimage;
struct resource efi_memmap_res = ;
struct resource boot_param_res = ;
int machine_kexec_prepare(struct kimage *image)
void machine_kexec_cleanup(struct kimage *image)
static void ia64_machine_kexec(struct unw_frame_info *info, void *arg)
void machine_kexec(struct kimage *image)
void arch_crash_save_vmcoreinfo(void)
unsigned long paddr_vmcoreinfo_note(void)
