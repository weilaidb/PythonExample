static int lpfc_debugfs_enable = 1;
module_param(lpfc_debugfs_enable, int, S_IRUGO);
MODULE_PARM_DESC(lpfc_debugfs_enable, "Enable debugfs services");
static int lpfc_debugfs_max_disc_trc;
module_param(lpfc_debugfs_max_disc_trc, int, S_IRUGO);
MODULE_PARM_DESC(lpfc_debugfs_max_disc_trc,
"Set debugfs discovery trace depth");
static int lpfc_debugfs_max_slow_ring_trc;
module_param(lpfc_debugfs_max_slow_ring_trc, int, S_IRUGO);
MODULE_PARM_DESC(lpfc_debugfs_max_slow_ring_trc,
"Set debugfs slow ring trace depth");
static int lpfc_debugfs_mask_disc_trc;
module_param(lpfc_debugfs_mask_disc_trc, int, S_IRUGO);
MODULE_PARM_DESC(lpfc_debugfs_mask_disc_trc,
"Set debugfs discovery trace mask");
static atomic_t lpfc_debugfs_seq_trc_cnt = ATOMIC_INIT(0);
static unsigned long lpfc_debugfs_start_time = 0L;
static struct lpfc_idiag idiag;
static int
lpfc_debugfs_disc_trc_data(struct lpfc_vport *vport, char *buf, int size)
static int
lpfc_debugfs_slow_ring_trc_data(struct lpfc_hba *phba, char *buf, int size)
static int lpfc_debugfs_last_hbq = -1;
static int
lpfc_debugfs_hbqinfo_data(struct lpfc_hba *phba, char *buf, int size)
static int lpfc_debugfs_last_hba_slim_off;
static int
lpfc_debugfs_dumpHBASlim_data(struct lpfc_hba *phba, char *buf, int size)
static int
lpfc_debugfs_dumpHostSlim_data(struct lpfc_hba *phba, char *buf, int size)
static int
lpfc_debugfs_nodelist_data(struct lpfc_vport *vport, char *buf, int size)
inline void
lpfc_debugfs_disc_trc(struct lpfc_vport *vport, int mask, char *fmt,
uint32_t data1, uint32_t data2, uint32_t data3)
inline void
lpfc_debugfs_slow_ring_trc(struct lpfc_hba *phba, char *fmt,
uint32_t data1, uint32_t data2, uint32_t data3)
static int
lpfc_debugfs_disc_trc_open(struct inode *inode, struct file *file)
static int
lpfc_debugfs_slow_ring_trc_open(struct inode *inode, struct file *file)
static int
lpfc_debugfs_hbqinfo_open(struct inode *inode, struct file *file)
static int
lpfc_debugfs_dumpHBASlim_open(struct inode *inode, struct file *file)
static int
lpfc_debugfs_dumpHostSlim_open(struct inode *inode, struct file *file)
static int
lpfc_debugfs_dumpData_open(struct inode *inode, struct file *file)
static int
lpfc_debugfs_dumpDif_open(struct inode *inode, struct file *file)
static ssize_t
lpfc_debugfs_dumpDataDif_write(struct file *file, const char __user *buf,
size_t nbytes, loff_t *ppos)
static int
lpfc_debugfs_nodelist_open(struct inode *inode, struct file *file)
static loff_t
lpfc_debugfs_lseek(struct file *file, loff_t off, int whence)
static ssize_t
lpfc_debugfs_read(struct file *file, char __user *buf,
size_t nbytes, loff_t *ppos)
static int
lpfc_debugfs_release(struct inode *inode, struct file *file)
static int
lpfc_debugfs_dumpDataDif_release(struct inode *inode, struct file *file)
static int lpfc_idiag_cmd_get(const char __user *buf, size_t nbytes,
struct lpfc_idiag_cmd *idiag_cmd)
static int
lpfc_idiag_open(struct inode *inode, struct file *file)
static int
lpfc_idiag_release(struct inode *inode, struct file *file)
static int
lpfc_idiag_cmd_release(struct inode *inode, struct file *file)
static ssize_t
lpfc_idiag_pcicfg_read(struct file *file, char __user *buf, size_t nbytes,
loff_t *ppos)
static ssize_t
lpfc_idiag_pcicfg_write(struct file *file, const char __user *buf,
size_t nbytes, loff_t *ppos)
static ssize_t
lpfc_idiag_queinfo_read(struct file *file, char __user *buf, size_t nbytes,
loff_t *ppos)
static int
lpfc_idiag_que_param_check(struct lpfc_queue *q, int index, int count)
static int
lpfc_idiag_queacc_read_qe(char *pbuffer, int len, struct lpfc_queue *pque,
uint32_t index)
static ssize_t
lpfc_idiag_queacc_read(struct file *file, char __user *buf, size_t nbytes,
loff_t *ppos)
static ssize_t
lpfc_idiag_queacc_write(struct file *file, const char __user *buf,
size_t nbytes, loff_t *ppos)
static int
lpfc_idiag_drbacc_read_reg(struct lpfc_hba *phba, char *pbuffer,
int len, uint32_t drbregid)
static ssize_t
lpfc_idiag_drbacc_read(struct file *file, char __user *buf, size_t nbytes,
loff_t *ppos)
static ssize_t
lpfc_idiag_drbacc_write(struct file *file, const char __user *buf,
size_t nbytes, loff_t *ppos)
#undef lpfc_debugfs_op_disc_trc
static const struct file_operations lpfc_debugfs_op_disc_trc = ;
#undef lpfc_debugfs_op_nodelist
static const struct file_operations lpfc_debugfs_op_nodelist = ;
#undef lpfc_debugfs_op_hbqinfo
static const struct file_operations lpfc_debugfs_op_hbqinfo = ;
#undef lpfc_debugfs_op_dumpHBASlim
static const struct file_operations lpfc_debugfs_op_dumpHBASlim = ;
#undef lpfc_debugfs_op_dumpHostSlim
static const struct file_operations lpfc_debugfs_op_dumpHostSlim = ;
#undef lpfc_debugfs_op_dumpData
static const struct file_operations lpfc_debugfs_op_dumpData = ;
#undef lpfc_debugfs_op_dumpDif
static const struct file_operations lpfc_debugfs_op_dumpDif = ;
#undef lpfc_debugfs_op_slow_ring_trc
static const struct file_operations lpfc_debugfs_op_slow_ring_trc = ;
static struct dentry *lpfc_debugfs_root = NULL;
static atomic_t lpfc_debugfs_hba_count;
#undef lpfc_idiag_op_pciCfg
static const struct file_operations lpfc_idiag_op_pciCfg = ;
#undef lpfc_idiag_op_queInfo
static const struct file_operations lpfc_idiag_op_queInfo = ;
#undef lpfc_idiag_op_queacc
static const struct file_operations lpfc_idiag_op_queAcc = ;
#undef lpfc_idiag_op_drbacc
static const struct file_operations lpfc_idiag_op_drbAcc = ;
inline void
lpfc_debugfs_initialize(struct lpfc_vport *vport)
inline void
lpfc_debugfs_terminate(struct lpfc_vport *vport)
