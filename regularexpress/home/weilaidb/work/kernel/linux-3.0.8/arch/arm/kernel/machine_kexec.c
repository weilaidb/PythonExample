extern const unsigned char relocate_new_kernel[];
extern const unsigned int relocate_new_kernel_size;
extern void setup_mm_for_reboot(char mode);
extern unsigned long kexec_start_address;
extern unsigned long kexec_indirection_page;
extern unsigned long kexec_mach_type;
extern unsigned long kexec_boot_atags;
static atomic_t waiting_for_crash_ipi;
int machine_kexec_prepare(struct kimage *image)
void machine_kexec_cleanup(struct kimage *image)
void machine_crash_nonpanic_core(void *unused)
void machine_crash_shutdown(struct pt_regs *regs)
void (*kexec_reinit)(void);
void machine_kexec(struct kimage *image)
