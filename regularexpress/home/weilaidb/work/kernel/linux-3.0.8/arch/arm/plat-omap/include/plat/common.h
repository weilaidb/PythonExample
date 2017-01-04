#define __ARCH_ARM_MACH_OMAP_COMMON_H
struct sys_timer;
extern void omap_map_common_io(void);
extern struct sys_timer omap_timer;
extern bool omap_32k_timer_init(void);
extern int __init omap_init_clocksource_32k(void);
extern unsigned long long notrace omap_32k_sched_clock(void);
extern void omap_reserve(void);
struct omap_globals ;
void omap2_set_globals_242x(void);
void omap2_set_globals_243x(void);
void omap2_set_globals_3xxx(void);
void omap2_set_globals_443x(void);
void omap2_set_globals_ti816x(void);
void omap2_set_globals_tap(struct omap_globals *);
void omap2_set_globals_sdrc(struct omap_globals *);
void omap2_set_globals_control(struct omap_globals *);
void omap2_set_globals_prcm(struct omap_globals *);
void omap3_map_io(void);
#define omap_test_timeout(cond, timeout, index)			\
()
extern struct device *omap2_get_mpuss_device(void);
extern struct device *omap2_get_iva_device(void);
extern struct device *omap2_get_l3_device(void);
extern struct device *omap4_get_dsp_device(void);
