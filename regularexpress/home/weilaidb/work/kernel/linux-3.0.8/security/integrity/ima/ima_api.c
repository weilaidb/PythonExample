static const char *IMA_TEMPLATE_NAME = "ima";
int ima_store_template(struct ima_template_entry *entry,
int violation, struct inode *inode)
void ima_add_violation(struct inode *inode, const unsigned char *filename,
const char *op, const char *cause)
int ima_must_measure(struct inode *inode, int mask, int function)
int ima_collect_measurement(struct ima_iint_cache *iint, struct file *file)
void ima_store_measurement(struct ima_iint_cache *iint, struct file *file,
const unsigned char *filename)
