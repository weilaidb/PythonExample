#if defined CONFIG_X86_64
#elif defined CONFIG_IA64_GENERIC || defined CONFIG_IA64_SGI_UV
static unsigned long
xp_pa_uv(void *addr)
static unsigned long
xp_socket_pa_uv(unsigned long gpa)
static enum xp_retval
xp_remote_mmr_read(unsigned long dst_gpa, const unsigned long src_gpa,
size_t len)
static enum xp_retval
xp_remote_memcpy_uv(unsigned long dst_gpa, const unsigned long src_gpa,
size_t len)
static int
xp_cpu_to_nasid_uv(int cpuid)
static enum xp_retval
xp_expand_memprotect_uv(unsigned long phys_addr, unsigned long size)
static enum xp_retval
xp_restrict_memprotect_uv(unsigned long phys_addr, unsigned long size)
enum xp_retval
xp_init_uv(void)
void
xp_exit_uv(void)
