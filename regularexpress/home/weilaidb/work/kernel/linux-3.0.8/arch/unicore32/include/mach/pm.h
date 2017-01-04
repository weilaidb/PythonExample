#define __PUV3_PM_H__
struct puv3_cpu_pm_fns ;
extern struct puv3_cpu_pm_fns *puv3_cpu_pm_fns;
extern void puv3_cpu_suspend(unsigned int);
extern void puv3_cpu_resume(void);
extern int puv3_pm_enter(suspend_state_t state);
extern int restore_image(pgd_t *resume_pg_dir, struct pbe *restore_pblist);
extern const void __nosave_begin, __nosave_end;
extern struct pbe *restore_pblist;
