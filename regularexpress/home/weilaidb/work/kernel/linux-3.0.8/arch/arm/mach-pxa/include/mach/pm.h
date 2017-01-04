struct pxa_cpu_pm_fns ;
extern struct pxa_cpu_pm_fns *pxa_cpu_pm_fns;
extern void pxa25x_cpu_suspend(unsigned int, long);
extern void pxa27x_cpu_suspend(unsigned int, long);
extern int pxa_pm_enter(suspend_state_t state);
extern int pxa_pm_prepare(void);
extern void pxa_pm_finish(void);
extern void lubbock_set_hexled(uint32_t value);
#define lubbock_set_hexled(x)
