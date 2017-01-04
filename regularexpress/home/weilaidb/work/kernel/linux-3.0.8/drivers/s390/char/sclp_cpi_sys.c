#define KMSG_COMPONENT "sclp_cpi"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define CPI_LENGTH_NAME 8
#define CPI_LENGTH_LEVEL 16
static DEFINE_MUTEX(sclp_cpi_mutex);
struct cpi_evbuf  __attribute__((packed));
struct cpi_sccb  __attribute__((packed));
static struct sclp_register sclp_cpi_event = ;
static char system_name[CPI_LENGTH_NAME + 1];
static char sysplex_name[CPI_LENGTH_NAME + 1];
static char system_type[CPI_LENGTH_NAME + 1];
static u64 system_level;
static void set_data(char *field, char *data)
static void cpi_callback(struct sclp_req *req, void *data)
static struct sclp_req *cpi_prepare_req(void)
static void cpi_free_req(struct sclp_req *req)
static int cpi_req(void)
static int check_string(const char *attr, const char *str)
static void set_string(char *attr, const char *value)
static ssize_t system_name_show(struct kobject *kobj,
struct kobj_attribute *attr, char *page)
static ssize_t system_name_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf,
size_t len)
static struct kobj_attribute system_name_attr =
__ATTR(system_name, 0644, system_name_show, system_name_store);
static ssize_t sysplex_name_show(struct kobject *kobj,
struct kobj_attribute *attr, char *page)
static ssize_t sysplex_name_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf,
size_t len)
static struct kobj_attribute sysplex_name_attr =
__ATTR(sysplex_name, 0644, sysplex_name_show, sysplex_name_store);
static ssize_t system_type_show(struct kobject *kobj,
struct kobj_attribute *attr, char *page)
static ssize_t system_type_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf,
size_t len)
static struct kobj_attribute system_type_attr =
__ATTR(system_type, 0644, system_type_show, system_type_store);
static ssize_t system_level_show(struct kobject *kobj,
struct kobj_attribute *attr, char *page)
static ssize_t system_level_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf,
size_t len)
static struct kobj_attribute system_level_attr =
__ATTR(system_level, 0644, system_level_show, system_level_store);
static ssize_t set_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t len)
static struct kobj_attribute set_attr = __ATTR(set, 0200, NULL, set_store);
static struct attribute *cpi_attrs[] = ;
static struct attribute_group cpi_attr_group = ;
static struct kset *cpi_kset;
int sclp_cpi_set_data(const char *system, const char *sysplex, const char *type,
const u64 level)
EXPORT_SYMBOL(sclp_cpi_set_data);
static int __init cpi_init(void)
__initcall(cpi_init);
