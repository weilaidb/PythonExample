#define KMSG_COMPONENT "tape"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
MODULE_AUTHOR("Stefan Bader <shbader@de.ibm.com>");
MODULE_DESCRIPTION(
"(C) Copyright IBM Corp. 2004   All Rights Reserved.\n"
"tape_class.c"
);
MODULE_LICENSE("GPL");
static struct class *tape_class;
struct tape_class_device *register_tape_dev(
struct device *		device,
dev_t			dev,
const struct file_operations *fops,
char *			device_name,
char *			mode_name)
EXPORT_SYMBOL(register_tape_dev);
void unregister_tape_dev(struct device *device, struct tape_class_device *tcd)
EXPORT_SYMBOL(unregister_tape_dev);
static int __init tape_init(void)
static void __exit tape_exit(void)
postcore_initcall(tape_init);
module_exit(tape_exit);
