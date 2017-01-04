struct bfad_debug_info ;
static int
bfad_debugfs_open_drvtrc(struct inode *inode, struct file *file)
static int
bfad_debugfs_open_fwtrc(struct inode *inode, struct file *file)
static int
bfad_debugfs_open_fwsave(struct inode *inode, struct file *file)
static int
bfad_debugfs_open_reg(struct inode *inode, struct file *file)
static loff_t
bfad_debugfs_lseek(struct file *file, loff_t offset, int orig)
static ssize_t
bfad_debugfs_read(struct file *file, char __user *buf,
size_t nbytes, loff_t *pos)
#define BFA_REG_CT_ADDRSZ	(0x40000)
#define BFA_REG_CB_ADDRSZ	(0x20000)
#define BFA_REG_ADDRSZ(__bfa)	\
((bfa_ioc_devid(&(__bfa)->ioc) == BFA_PCI_DEVICE_ID_CT) ?	\
BFA_REG_CT_ADDRSZ : BFA_REG_CB_ADDRSZ)
#define BFA_REG_ADDRMSK(__bfa)  ((u32)(BFA_REG_ADDRSZ(__bfa) - 1))
static bfa_status_t
bfad_reg_offset_check(struct bfa_s *bfa, u32 offset, u32 len)
static ssize_t
bfad_debugfs_read_regrd(struct file *file, char __user *buf,
size_t nbytes, loff_t *pos)
static ssize_t
bfad_debugfs_write_regrd(struct file *file, const char __user *buf,
size_t nbytes, loff_t *ppos)
static ssize_t
bfad_debugfs_write_regwr(struct file *file, const char __user *buf,
size_t nbytes, loff_t *ppos)
static int
bfad_debugfs_release(struct inode *inode, struct file *file)
static int
bfad_debugfs_release_fwtrc(struct inode *inode, struct file *file)
static const struct file_operations bfad_debugfs_op_drvtrc = ;
static const struct file_operations bfad_debugfs_op_fwtrc = ;
static const struct file_operations bfad_debugfs_op_fwsave = ;
static const struct file_operations bfad_debugfs_op_regrd = ;
static const struct file_operations bfad_debugfs_op_regwr = ;
struct bfad_debugfs_entry ;
static const struct bfad_debugfs_entry bfad_debugfs_files[] = ;
static struct dentry *bfa_debugfs_root;
static atomic_t bfa_debugfs_port_count;
inline void
bfad_debugfs_init(struct bfad_port_s *port)
inline void
bfad_debugfs_exit(struct bfad_port_s *port)
