#define _LINUX_CDEV_H
struct file_operations;
struct inode;
struct module;
struct cdev ;
void cdev_init(struct cdev *, const struct file_operations *);
struct cdev *cdev_alloc(void);
void cdev_put(struct cdev *p);
int cdev_add(struct cdev *, dev_t, unsigned);
void cdev_del(struct cdev *);
void cd_forget(struct inode *);
extern struct backing_dev_info directly_mappable_cdev_bdi;
