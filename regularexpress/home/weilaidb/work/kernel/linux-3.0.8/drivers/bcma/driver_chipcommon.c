static inline u32 bcma_cc_write32_masked(struct bcma_drv_cc *cc, u16 offset,
u32 mask, u32 value)
void bcma_core_chipcommon_init(struct bcma_drv_cc *cc)
void bcma_chipco_watchdog_timer_set(struct bcma_drv_cc *cc, u32 ticks)
void bcma_chipco_irq_mask(struct bcma_drv_cc *cc, u32 mask, u32 value)
u32 bcma_chipco_irq_status(struct bcma_drv_cc *cc, u32 mask)
u32 bcma_chipco_gpio_in(struct bcma_drv_cc *cc, u32 mask)
u32 bcma_chipco_gpio_out(struct bcma_drv_cc *cc, u32 mask, u32 value)
u32 bcma_chipco_gpio_outen(struct bcma_drv_cc *cc, u32 mask, u32 value)
u32 bcma_chipco_gpio_control(struct bcma_drv_cc *cc, u32 mask, u32 value)
EXPORT_SYMBOL_GPL(bcma_chipco_gpio_control);
u32 bcma_chipco_gpio_intmask(struct bcma_drv_cc *cc, u32 mask, u32 value)
u32 bcma_chipco_gpio_polarity(struct bcma_drv_cc *cc, u32 mask, u32 value)
