#define DBG(format, arg...) do  while (0)
#define DBG(format, arg...)
enum ;
extern struct list_head capi_drivers;
extern struct mutex capi_drivers_lock;
extern struct capi_ctr *capi_controller[CAPI_MAXCONTR];
extern struct mutex capi_controller_lock;
extern struct capi20_appl *capi_applications[CAPI_MAXAPPL];
void kcapi_proc_init(void);
void kcapi_proc_exit(void);
static inline void kcapi_proc_init(void) ;
static inline void kcapi_proc_exit(void) ;
