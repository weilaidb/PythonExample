typedef NORET_TYPE void (*relocate_new_kernel_t)(
unsigned long indirection_page,
unsigned long reboot_code_buffer,
unsigned long start_address) ATTRIB_NORET;
void default_machine_kexec(struct kimage *image)
int default_machine_kexec_prepare(struct kimage *image)
