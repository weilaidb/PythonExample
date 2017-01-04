struct uwb_dbg ;
static struct dentry *root_dir;
static void uwb_dbg_rsv_cb(struct uwb_rsv *rsv)
static int cmd_rsv_establish(struct uwb_rc *rc,
struct uwb_dbg_cmd_rsv_establish *cmd)
static int cmd_rsv_terminate(struct uwb_rc *rc,
struct uwb_dbg_cmd_rsv_terminate *cmd)
static int cmd_ie_add(struct uwb_rc *rc, struct uwb_dbg_cmd_ie *ie_to_add)
static int cmd_ie_rm(struct uwb_rc *rc, struct uwb_dbg_cmd_ie *ie_to_rm)
static int command_open(struct inode *inode, struct file *file)
static ssize_t command_write(struct file *file, const char __user *buf,
size_t len, loff_t *off)
static const struct file_operations command_fops = ;
static int reservations_print(struct seq_file *s, void *p)
static int reservations_open(struct inode *inode, struct file *file)
static const struct file_operations reservations_fops = ;
static int drp_avail_print(struct seq_file *s, void *p)
static int drp_avail_open(struct inode *inode, struct file *file)
static const struct file_operations drp_avail_fops = ;
static void uwb_dbg_channel_changed(struct uwb_pal *pal, int channel)
static void uwb_dbg_new_rsv(struct uwb_pal *pal, struct uwb_rsv *rsv)
void uwb_dbg_add_rc(struct uwb_rc *rc)
void uwb_dbg_del_rc(struct uwb_rc *rc)
void uwb_dbg_init(void)
void uwb_dbg_exit(void)
struct dentry *uwb_dbg_create_pal_dir(struct uwb_pal *pal)
