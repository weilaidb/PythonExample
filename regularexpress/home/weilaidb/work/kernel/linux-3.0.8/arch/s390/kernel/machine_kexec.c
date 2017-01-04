typedef void (*relocate_kernel_t)(kimage_entry_t *, unsigned long);
extern const unsigned char relocate_kernel[];
extern const unsigned long long relocate_kernel_len;
int machine_kexec_prepare(struct kimage *image)
void machine_kexec_cleanup(struct kimage *image)
void machine_shutdown(void)
static void __machine_kexec(void *data)
void machine_kexec(struct kimage *image)
