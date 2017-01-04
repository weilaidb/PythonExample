#define _CX23885_IOCTL_H_
int cx23885_g_chip_ident(struct file *file, void *fh,
struct v4l2_dbg_chip_ident *chip);
int cx23885_g_register(struct file *file, void *fh,
struct v4l2_dbg_register *reg);
int cx23885_s_register(struct file *file, void *fh,
struct v4l2_dbg_register *reg);
