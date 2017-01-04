static inline int i2o_device_issue_claim(struct i2o_device *dev, u32 cmd,
u32 type)
int i2o_device_claim(struct i2o_device *dev)
int i2o_device_claim_release(struct i2o_device *dev)
static void i2o_device_release(struct device *dev)
static ssize_t i2o_device_show_class_id(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t i2o_device_show_tid(struct device *dev,
struct device_attribute *attr, char *buf)
struct device_attribute i2o_device_attrs[] = ;
static struct i2o_device *i2o_device_alloc(void)
static int i2o_device_add(struct i2o_controller *c, i2o_lct_entry *entry)
void i2o_device_remove(struct i2o_device *i2o_dev)
int i2o_device_parse_lct(struct i2o_controller *c)
int i2o_parm_issue(struct i2o_device *i2o_dev, int cmd, void *oplist,
int oplen, void *reslist, int reslen)
int i2o_parm_field_get(struct i2o_device *i2o_dev, int group, int field,
void *buf, int buflen)
int i2o_parm_table_get(struct i2o_device *dev, int oper, int group,
int fieldcount, void *ibuf, int ibuflen, void *resblk,
int reslen)
EXPORT_SYMBOL(i2o_device_claim);
EXPORT_SYMBOL(i2o_device_claim_release);
EXPORT_SYMBOL(i2o_parm_field_get);
EXPORT_SYMBOL(i2o_parm_table_get);
EXPORT_SYMBOL(i2o_parm_issue);
