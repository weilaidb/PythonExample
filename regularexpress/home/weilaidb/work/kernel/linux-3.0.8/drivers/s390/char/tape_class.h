#define __TAPE_CLASS_H__
#define TAPECLASS_NAME_LEN	32
struct tape_class_device ;
struct tape_class_device *register_tape_dev(
struct device *		device,
dev_t			dev,
const struct file_operations *fops,
char *			device_name,
char *			node_name
);
void unregister_tape_dev(struct device *device, struct tape_class_device *tcd);
