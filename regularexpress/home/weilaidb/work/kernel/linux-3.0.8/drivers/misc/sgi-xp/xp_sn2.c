EXPORT_SYMBOL_GPL(xp_nofault_PIOR);
u64 xp_nofault_PIOR_target;
EXPORT_SYMBOL_GPL(xp_nofault_PIOR_target);
static enum xp_retval
xp_register_nofault_code_sn2(void)
static void
xp_unregister_nofault_code_sn2(void)
static unsigned long
xp_pa_sn2(void *addr)
static unsigned long
xp_socket_pa_sn2(unsigned long gpa)
static enum xp_retval
xp_remote_memcpy_sn2(unsigned long dst_pa, const unsigned long src_pa,
size_t len)
static int
xp_cpu_to_nasid_sn2(int cpuid)
static enum xp_retval
xp_expand_memprotect_sn2(unsigned long phys_addr, unsigned long size)
static enum xp_retval
xp_restrict_memprotect_sn2(unsigned long phys_addr, unsigned long size)
enum xp_retval
xp_init_sn2(void)
void
xp_exit_sn2(void)
