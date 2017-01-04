static struct clk *audmux_clk;
static void __iomem *audmux_base;
#define MXC_AUDMUX_V2_PTCR(x)		((x) * 8)
#define MXC_AUDMUX_V2_PDCR(x)		((x) * 8 + 4)
static struct dentry *audmux_debugfs_root;
static int audmux_open_file(struct inode *inode, struct file *file)
static const char *audmux_port_string(int port)
static ssize_t audmux_read_file(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations audmux_debugfs_fops = ;
static void audmux_debugfs_init(void)
static inline void audmux_debugfs_init(void)
int mxc_audmux_v2_configure_port(unsigned int port, unsigned int ptcr,
unsigned int pdcr)
EXPORT_SYMBOL_GPL(mxc_audmux_v2_configure_port);
static int mxc_audmux_v2_init(void)
postcore_initcall(mxc_audmux_v2_init);
