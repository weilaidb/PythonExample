static DEFINE_SPINLOCK(ath79_device_reset_lock);
u32 ath79_cpu_freq;
EXPORT_SYMBOL_GPL(ath79_cpu_freq);
u32 ath79_ahb_freq;
EXPORT_SYMBOL_GPL(ath79_ahb_freq);
u32 ath79_ddr_freq;
EXPORT_SYMBOL_GPL(ath79_ddr_freq);
enum ath79_soc_type ath79_soc;
void __iomem *ath79_pll_base;
void __iomem *ath79_reset_base;
EXPORT_SYMBOL_GPL(ath79_reset_base);
void __iomem *ath79_ddr_base;
void ath79_ddr_wb_flush(u32 reg)
EXPORT_SYMBOL_GPL(ath79_ddr_wb_flush);
void ath79_device_reset_set(u32 mask)
EXPORT_SYMBOL_GPL(ath79_device_reset_set);
void ath79_device_reset_clear(u32 mask)
EXPORT_SYMBOL_GPL(ath79_device_reset_clear);
