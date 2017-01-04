#define UNICODE_NAME_MAX ((4 * NAME_MAX) + 2)
static void dump_cifs_file_struct(struct file *file, char *label)
static inline void dump_cifs_file_struct(struct file *file, char *label)
static struct dentry *
cifs_readdir_lookup(struct dentry *parent, struct qstr *name,
struct cifs_fattr *fattr)
static void
cifs_fill_common_info(struct cifs_fattr *fattr, struct cifs_sb_info *cifs_sb)
static void
cifs_dir_info_to_fattr(struct cifs_fattr *fattr, FILE_DIRECTORY_INFO *info,
struct cifs_sb_info *cifs_sb)
static void
cifs_std_info_to_fattr(struct cifs_fattr *fattr, FIND_FILE_STANDARD_INFO *info,
struct cifs_sb_info *cifs_sb)
static int initiate_cifs_search(const int xid, struct file *file)
static int cifs_unicode_bytelen(char *str)
static char *nxt_dir_entry(char *old_entry, char *end_of_smb, int level)
#define UNICODE_DOT cpu_to_le16(0x2e)
static int cifs_entry_is_dot(char *current_entry, struct cifsFileInfo *cfile)
static int is_dir_changed(struct file *file)
static int cifs_save_resume_key(const char *current_entry,
struct cifsFileInfo *cifsFile)
static int find_cifs_entry(const int xid, struct cifs_tcon *pTcon,
struct file *file, char **ppCurrentEntry, int *num_to_ret)
static int cifs_get_name_from_search_buf(struct qstr *pqst,
char *current_entry, __u16 level, unsigned int unicode,
struct cifs_sb_info *cifs_sb, unsigned int max_len, __u64 *pinum)
static int cifs_filldir(char *pfindEntry, struct file *file, filldir_t filldir,
void *direntry, char *scratch_buf, unsigned int max_len)
int cifs_readdir(struct file *file, void *direntry, filldir_t filldir)
