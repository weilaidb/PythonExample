typedef void (*relocate_new_kernel_t)(unsigned long indirection_page,
unsigned long reboot_code_buffer,
unsigned long start_address);
extern const unsigned char relocate_new_kernel[];
extern const unsigned int relocate_new_kernel_size;
extern void *vbr_base;
void native_machine_crash_shutdown(struct pt_regs *regs)
int machine_kexec_prepare(struct kimage *image)
void machine_kexec_cleanup(struct kimage *image)
static void kexec_info(struct kimage *image)
void machine_kexec(struct kimage *image)
void arch_crash_save_vmcoreinfo(void)
void __init reserve_crashkernel(void)
