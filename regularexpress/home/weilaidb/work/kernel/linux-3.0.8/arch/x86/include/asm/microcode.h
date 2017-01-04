#define _ASM_X86_MICROCODE_H
struct cpu_signature ;
struct device;
enum ucode_state ;
struct microcode_ops ;
struct ucode_cpu_info ;
extern struct ucode_cpu_info ucode_cpu_info[];
extern struct microcode_ops * __init init_intel_microcode(void);
static inline struct microcode_ops * __init init_intel_microcode(void)
extern struct microcode_ops * __init init_amd_microcode(void);
static inline void get_ucode_data(void *to, const u8 *from, size_t n)
static inline struct microcode_ops * __init init_amd_microcode(void)
