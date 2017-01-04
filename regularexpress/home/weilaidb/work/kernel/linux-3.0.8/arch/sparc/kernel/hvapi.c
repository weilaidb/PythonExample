struct api_info ;
static struct api_info api_table[] = ;
static DEFINE_SPINLOCK(hvapi_lock);
static struct api_info *__get_info(unsigned long group)
static void __get_ref(struct api_info *p)
static void __put_ref(struct api_info *p)
int sun4v_hvapi_register(unsigned long group, unsigned long major,
unsigned long *minor)
EXPORT_SYMBOL(sun4v_hvapi_register);
void sun4v_hvapi_unregister(unsigned long group)
EXPORT_SYMBOL(sun4v_hvapi_unregister);
int sun4v_hvapi_get(unsigned long group,
unsigned long *major,
unsigned long *minor)
EXPORT_SYMBOL(sun4v_hvapi_get);
void __init sun4v_hvapi_init(void)
