extern const unsigned char relocate_new_kernel[];
extern const size_t relocate_new_kernel_size;
extern unsigned long kexec_start_address;
extern unsigned long kexec_indirection_page;
int
machine_kexec_prepare(struct kimage *kimage)
void
machine_kexec_cleanup(struct kimage *kimage)
void
machine_shutdown(void)
void
machine_crash_shutdown(struct pt_regs *regs)
typedef void (*noretfun_t)(void) __attribute__((noreturn));
void
machine_kexec(struct kimage *image)
