enum ssb_clksrc ;
static inline u32 chipco_write32_masked(struct ssb_chipcommon *cc, u16 offset,
u32 mask, u32 value)
void ssb_chipco_set_clockmode(struct ssb_chipcommon *cc,
enum ssb_clkmode mode)
static enum ssb_clksrc chipco_pctl_get_slowclksrc(struct ssb_chipcommon *cc)
static int chipco_pctl_clockfreqlimit(struct ssb_chipcommon *cc, int get_max)
static void chipco_powercontrol_init(struct ssb_chipcommon *cc)
default:
return 15000;
}
}
if (cc->dev->id.revision >= 11)
cc->status = chipco_read32(cc, SSB_CHIPCO_CHIPSTAT);
ssb_dprintk(KERN_INFO PFX "chipcommon status is 0x%x\n", cc->status);
if (cc->dev->id.revision >= 20)
ssb_pmu_init(cc);
chipco_powercontrol_init(cc);
ssb_chipco_set_clockmode(cc, SSB_CLKMODE_FAST);
calc_fast_powerup_delay(cc);
}
void ssb_chipco_suspend(struct ssb_chipcommon *cc)
void ssb_chipco_resume(struct ssb_chipcommon *cc)
void ssb_chipco_get_clockcpu(struct ssb_chipcommon *cc,
u32 *plltype, u32 *n, u32 *m)
void ssb_chipco_get_clockcontrol(struct ssb_chipcommon *cc,
u32 *plltype, u32 *n, u32 *m)
void ssb_chipco_timing_init(struct ssb_chipcommon *cc,
unsigned long ns)
void ssb_chipco_watchdog_timer_set(struct ssb_chipcommon *cc, u32 ticks)
void ssb_chipco_irq_mask(struct ssb_chipcommon *cc, u32 mask, u32 value)
u32 ssb_chipco_irq_status(struct ssb_chipcommon *cc, u32 mask)
u32 ssb_chipco_gpio_in(struct ssb_chipcommon *cc, u32 mask)
u32 ssb_chipco_gpio_out(struct ssb_chipcommon *cc, u32 mask, u32 value)
u32 ssb_chipco_gpio_outen(struct ssb_chipcommon *cc, u32 mask, u32 value)
u32 ssb_chipco_gpio_control(struct ssb_chipcommon *cc, u32 mask, u32 value)
EXPORT_SYMBOL(ssb_chipco_gpio_control);
u32 ssb_chipco_gpio_intmask(struct ssb_chipcommon *cc, u32 mask, u32 value)
u32 ssb_chipco_gpio_polarity(struct ssb_chipcommon *cc, u32 mask, u32 value)
int ssb_chipco_serial_init(struct ssb_chipcommon *cc,
struct ssb_serial_port *ports)
