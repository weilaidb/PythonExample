#define __ASM_MACH_ATH79_H
enum ath79_soc_type ;
extern enum ath79_soc_type ath79_soc;
static inline int soc_is_ar71xx(void)
static inline int soc_is_ar724x(void)
static inline int soc_is_ar7240(void)
static inline int soc_is_ar7241(void)
static inline int soc_is_ar7242(void)
static inline int soc_is_ar913x(void)
extern void __iomem *ath79_ddr_base;
extern void __iomem *ath79_pll_base;
extern void __iomem *ath79_reset_base;
static inline void ath79_pll_wr(unsigned reg, u32 val)
static inline u32 ath79_pll_rr(unsigned reg)
static inline void ath79_reset_wr(unsigned reg, u32 val)
static inline u32 ath79_reset_rr(unsigned reg)
void ath79_device_reset_set(u32 mask);
void ath79_device_reset_clear(u32 mask);
