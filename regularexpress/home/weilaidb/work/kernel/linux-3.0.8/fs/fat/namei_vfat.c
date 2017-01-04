static int vfat_revalidate_shortname(struct dentry *dentry)
static int vfat_revalidate(struct dentry *dentry, struct nameidata *nd)
static int vfat_revalidate_ci(struct dentry *dentry, struct nameidata *nd)
static unsigned int __vfat_striptail_len(unsigned int len, const char *name)
static unsigned int vfat_striptail_len(const struct qstr *qstr)
static int vfat_hash(const struct dentry *dentry, const struct inode *inode,
struct qstr *qstr)
static int vfat_hashi(const struct dentry *dentry, const struct inode *inode,
struct qstr *qstr)
static int vfat_cmpi(const struct dentry *parent, const struct inode *pinode,
const struct dentry *dentry, const struct inode *inode,
unsigned int len, const char *str, const struct qstr *name)
static int vfat_cmp(const struct dentry *parent, const struct inode *pinode,
const struct dentry *dentry, const struct inode *inode,
unsigned int len, const char *str, const struct qstr *name)
static const struct dentry_operations vfat_ci_dentry_ops = ;
static const struct dentry_operations vfat_dentry_ops = ;
static inline wchar_t vfat_bad_char(wchar_t w)
static inline wchar_t vfat_replace_char(wchar_t w)
static wchar_t vfat_skip_char(wchar_t w)
static inline int vfat_is_used_badchars(const wchar_t *s, int len)
static int vfat_find_form(struct inode *dir, unsigned char *name)
struct shortname_info ;
#define INIT_SHORTNAME_INFO(x)	do  while (0)
static inline int to_shortname_char(struct nls_table *nls,
unsigned char *buf, int buf_size,
wchar_t *src, struct shortname_info *info)
static int vfat_create_shortname(struct inode *dir, struct nls_table *nls,
wchar_t *uname, int ulen,
unsigned char *name_res, unsigned char *lcase)
static int
xlate_to_uni(const unsigned char *name, int len, unsigned char *outname,
int *longlen, int *outlen, int escape, int utf8,
struct nls_table *nls)
static int vfat_build_slots(struct inode *dir, const unsigned char *name,
int len, int is_dir, int cluster,
struct timespec *ts,
struct msdos_dir_slot *slots, int *nr_slots)
static int vfat_add_entry(struct inode *dir, struct qstr *qname, int is_dir,
int cluster, struct timespec *ts,
struct fat_slot_info *sinfo)
static int vfat_find(struct inode *dir, struct qstr *qname,
struct fat_slot_info *sinfo)
static int vfat_d_anon_disconn(struct dentry *dentry)
static struct dentry *vfat_lookup(struct inode *dir, struct dentry *dentry,
struct nameidata *nd)
static int vfat_create(struct inode *dir, struct dentry *dentry, int mode,
struct nameidata *nd)
static int vfat_rmdir(struct inode *dir, struct dentry *dentry)
static int vfat_unlink(struct inode *dir, struct dentry *dentry)
static int vfat_mkdir(struct inode *dir, struct dentry *dentry, int mode)
static int vfat_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
static const struct inode_operations vfat_dir_inode_operations = ;
static void setup(struct super_block *sb)
static int vfat_fill_super(struct super_block *sb, void *data, int silent)
static struct dentry *vfat_mount(struct file_system_type *fs_type,
int flags, const char *dev_name,
void *data)
static struct file_system_type vfat_fs_type = ;
static int __init init_vfat_fs(void)
static void __exit exit_vfat_fs(void)
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("VFAT filesystem support");
MODULE_AUTHOR("Gordon Chaffee");
module_init(init_vfat_fs)
module_exit(exit_vfat_fs)
