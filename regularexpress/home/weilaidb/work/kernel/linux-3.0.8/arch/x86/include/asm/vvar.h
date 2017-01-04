#define VSYSCALL_VARS_OFFSET (3072 + 128)
#if defined(__VVAR_KERNEL_LDS)
#define DECLARE_VVAR(offset, type, name) \
EMIT_VVAR(name, VSYSCALL_VARS_OFFSET + offset)
#define DECLARE_VVAR(offset, type, name)				\
static type const * const vvaraddr_ ## name =			\
(void *)(VSYSCALL_START + VSYSCALL_VARS_OFFSET + (offset));
#define DEFINE_VVAR(type, name)						\
type __vvar_ ## name						\
__attribute__((section(".vsyscall_var_" #name), aligned(16)))
#define VVAR(name) (*vvaraddr_ ## name)
DECLARE_VVAR(0, volatile unsigned long, jiffies)
DECLARE_VVAR(8, int, vgetcpu_mode)
DECLARE_VVAR(128, struct vsyscall_gtod_data, vsyscall_gtod_data)
#undef DECLARE_VVAR
#undef VSYSCALL_VARS_OFFSET
