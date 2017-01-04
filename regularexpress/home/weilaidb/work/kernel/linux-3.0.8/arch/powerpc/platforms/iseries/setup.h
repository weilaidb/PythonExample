#define	__ISERIES_SETUP_H__
extern void *iSeries_early_setup(void);
extern unsigned long iSeries_get_boot_time(void);
extern int iSeries_set_rtc_time(struct rtc_time *tm);
extern void iSeries_get_rtc_time(struct rtc_time *tm);
extern void *build_flat_dt(unsigned long phys_mem_size);
