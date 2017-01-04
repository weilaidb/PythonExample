#define _LIBFDT_ENV_H
#define _B(n)	((unsigned long long)((uint8_t *)&x)[n])
static inline uint32_t fdt32_to_cpu(uint32_t x)
#define cpu_to_fdt32(x) fdt32_to_cpu(x)
static inline uint64_t fdt64_to_cpu(uint64_t x)
#define cpu_to_fdt64(x) fdt64_to_cpu(x)
#undef _B
