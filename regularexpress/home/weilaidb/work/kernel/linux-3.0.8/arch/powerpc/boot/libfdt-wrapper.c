#define DEBUG	0
#define BAD_ERROR(err)	(((err) < 0) \
&& ((err) != -FDT_ERR_NOTFOUND) \
&& ((err) != -FDT_ERR_EXISTS))
#define check_err(err) \
()
#define offset_devp(off)	\
()
#define devp_offset_find(devp)	(((int)(devp))-1)
#define devp_offset(devp)	(devp ? ((int)(devp))-1 : 0)
static void *fdt;
static void *buf;
#define EXPAND_GRANULARITY	1024
static void expand_buf(int minexpand)
static void *fdt_wrapper_finddevice(const char *path)
static int fdt_wrapper_getprop(const void *devp, const char *name,
void *buf, const int buflen)
static int fdt_wrapper_setprop(const void *devp, const char *name,
const void *buf, const int len)
static int fdt_wrapper_del_node(const void *devp)
static void *fdt_wrapper_get_parent(const void *devp)
static void *fdt_wrapper_create_node(const void *devp, const char *name)
static void *fdt_wrapper_find_node_by_prop_value(const void *prev,
const char *name,
const char *val,
int len)
static void *fdt_wrapper_find_node_by_compatible(const void *prev,
const char *val)
static char *fdt_wrapper_get_path(const void *devp, char *buf, int len)
static unsigned long fdt_wrapper_finalize(void)
void fdt_init(void *blob)
