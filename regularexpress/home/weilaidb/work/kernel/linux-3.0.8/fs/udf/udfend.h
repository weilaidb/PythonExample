#define __UDF_ENDIAN_H
static inline struct kernel_lb_addr lelb_to_cpu(struct lb_addr in)
static inline struct lb_addr cpu_to_lelb(struct kernel_lb_addr in)
static inline struct short_ad lesa_to_cpu(struct short_ad in)
static inline struct short_ad cpu_to_lesa(struct short_ad in)
static inline struct kernel_long_ad lela_to_cpu(struct long_ad in)
static inline struct long_ad cpu_to_lela(struct kernel_long_ad in)
static inline struct kernel_extent_ad leea_to_cpu(struct extent_ad in)
