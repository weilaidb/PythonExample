#define _XTENSA_PLATFORM_H
extern void platform_init(bp_tag_t*);
extern void platform_setup (char **);
extern void platform_init_irq (void);
extern void platform_restart (void);
extern void platform_halt (void);
extern void platform_power_off (void);
extern void platform_idle (void);
extern void platform_heartbeat (void);
extern void platform_pcibios_init (void);
extern int platform_pcibios_fixup (void);
extern void platform_calibrate_ccount (void);
