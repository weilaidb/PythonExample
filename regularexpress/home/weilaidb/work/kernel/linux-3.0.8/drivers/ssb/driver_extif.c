static inline u32 extif_read32(struct ssb_extif *extif, u16 offset)
static inline void extif_write32(struct ssb_extif *extif, u16 offset, u32 value)
static inline u32 extif_write32_masked(struct ssb_extif *extif, u16 offset,
u32 mask, u32 value)
static bool serial_exists(u8 *regs)
int ssb_extif_serial_init(struct ssb_extif *extif, struct ssb_serial_port *ports)
void ssb_extif_timing_init(struct ssb_extif *extif, unsigned long ns)
void ssb_extif_get_clockcontrol(struct ssb_extif *extif,
u32 *pll_type, u32 *n, u32 *m)
void ssb_extif_watchdog_timer_set(struct ssb_extif *extif,
u32 ticks)
u32 ssb_extif_gpio_in(struct ssb_extif *extif, u32 mask)
u32 ssb_extif_gpio_out(struct ssb_extif *extif, u32 mask, u32 value)
u32 ssb_extif_gpio_outen(struct ssb_extif *extif, u32 mask, u32 value)
u32 ssb_extif_gpio_polarity(struct ssb_extif *extif, u32 mask, u32 value)
u32 ssb_extif_gpio_intmask(struct ssb_extif *extif, u32 mask, u32 value)
