#if !CHIP_HAS_COHERENT_LOCAL_CACHE()
extern unsigned long __memcpy_asm(void *to, const void *from, unsigned long n);
extern unsigned long __copy_to_user_inatomic_asm(
void __user *to, const void *from, unsigned long n);
extern unsigned long __copy_from_user_inatomic_asm(
void *to, const void __user *from, unsigned long n);
extern unsigned long __copy_from_user_zeroing_asm(
void *to, const void __user *from, unsigned long n);
typedef unsigned long (*memcpy_t)(void *, const void *, unsigned long);
#define LARGE_COPY_CUTOFF 2048
#define sim_allow_multiple_caching(b) \
__insn_mtspr(SPR_SIM_CONTROL, \
SIM_CONTROL_ALLOW_MULTIPLE_CACHING | ((b) << _SIM_CONTROL_OPERATOR_BITS))
static void memcpy_multicache(void *dest, const void *source,
pte_t dst_pte, pte_t src_pte, int len)
static unsigned long fast_copy(void *dest, const void *source, int len,
memcpy_t func)
void *memcpy(void *to, const void *from, __kernel_size_t n)
unsigned long __copy_to_user_inatomic(void __user *to, const void *from,
unsigned long n)
unsigned long __copy_from_user_inatomic(void *to, const void __user *from,
unsigned long n)
unsigned long __copy_from_user_zeroing(void *to, const void __user *from,
unsigned long n)
