static struct dentry *ceph_debugfs_dir;
static int monmap_show(struct seq_file *s, void *p)
static int osdmap_show(struct seq_file *s, void *p)
static int monc_show(struct seq_file *s, void *p)
static int osdc_show(struct seq_file *s, void *pp)
CEPH_DEFINE_SHOW_FUNC(monmap_show)
CEPH_DEFINE_SHOW_FUNC(osdmap_show)
CEPH_DEFINE_SHOW_FUNC(monc_show)
CEPH_DEFINE_SHOW_FUNC(osdc_show)
int ceph_debugfs_init(void)
void ceph_debugfs_cleanup(void)
int ceph_debugfs_client_init(struct ceph_client *client)
void ceph_debugfs_client_cleanup(struct ceph_client *client)
int ceph_debugfs_init(void)
void ceph_debugfs_cleanup(void)
int ceph_debugfs_client_init(struct ceph_client *client)
void ceph_debugfs_client_cleanup(struct ceph_client *client)
EXPORT_SYMBOL(ceph_debugfs_init);
EXPORT_SYMBOL(ceph_debugfs_cleanup);
