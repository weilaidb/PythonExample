#define OSM_NAME "exec-osm"
struct i2o_driver i2o_exec_driver;
static LIST_HEAD(i2o_exec_wait_list);
struct i2o_exec_wait ;
struct i2o_exec_lct_notify_work ;
static struct i2o_class_id i2o_exec_class_id[] = ;
static struct i2o_exec_wait *i2o_exec_wait_alloc(void)
;
static void i2o_exec_wait_free(struct i2o_exec_wait *wait)
;
int i2o_msg_post_wait_mem(struct i2o_controller *c, struct i2o_message *msg,
unsigned long timeout, struct i2o_dma *dma)
;
static int i2o_msg_post_wait_complete(struct i2o_controller *c, u32 m,
struct i2o_message *msg, u32 context)
;
static ssize_t i2o_exec_show_vendor_id(struct device *d,
struct device_attribute *attr, char *buf)
;
static ssize_t i2o_exec_show_product_id(struct device *d,
struct device_attribute *attr,
char *buf)
;
static DEVICE_ATTR(vendor_id, S_IRUGO, i2o_exec_show_vendor_id, NULL);
static DEVICE_ATTR(product_id, S_IRUGO, i2o_exec_show_product_id, NULL);
static int i2o_exec_probe(struct device *dev)
;
static int i2o_exec_remove(struct device *dev)
;
static int i2o_exec_lct_notify(struct i2o_controller *c, u32 change_ind)
static void i2o_exec_lct_modified(struct work_struct *_work)
;
static int i2o_exec_reply(struct i2o_controller *c, u32 m,
struct i2o_message *msg)
static void i2o_exec_event(struct work_struct *work)
;
int i2o_exec_lct_get(struct i2o_controller *c)
struct i2o_driver i2o_exec_driver = ;
int __init i2o_exec_init(void)
;
void i2o_exec_exit(void)
;
EXPORT_SYMBOL(i2o_msg_post_wait_mem);
EXPORT_SYMBOL(i2o_exec_lct_get);
