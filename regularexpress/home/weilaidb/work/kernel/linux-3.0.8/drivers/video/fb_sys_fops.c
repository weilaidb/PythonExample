ssize_t fb_sys_read(struct fb_info *info, char __user *buf, size_t count,
loff_t *ppos)
EXPORT_SYMBOL_GPL(fb_sys_read);
ssize_t fb_sys_write(struct fb_info *info, const char __user *buf,
size_t count, loff_t *ppos)
EXPORT_SYMBOL_GPL(fb_sys_write);
MODULE_AUTHOR("Antonino Daplas <adaplas@pol.net>");
MODULE_DESCRIPTION("Generic file read (fb in system RAM)");
MODULE_LICENSE("GPL");
