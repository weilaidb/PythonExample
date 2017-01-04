int cx23885_g_chip_ident(struct file *file, void *fh,
struct v4l2_dbg_chip_ident *chip)
static int cx23885_g_host_register(struct cx23885_dev *dev,
struct v4l2_dbg_register *reg)
static int cx23417_g_register(struct cx23885_dev *dev,
struct v4l2_dbg_register *reg)
int cx23885_g_register(struct file *file, void *fh,
struct v4l2_dbg_register *reg)
static int cx23885_s_host_register(struct cx23885_dev *dev,
struct v4l2_dbg_register *reg)
static int cx23417_s_register(struct cx23885_dev *dev,
struct v4l2_dbg_register *reg)
int cx23885_s_register(struct file *file, void *fh,
struct v4l2_dbg_register *reg)
