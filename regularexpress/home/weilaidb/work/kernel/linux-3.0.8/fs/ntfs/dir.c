ntfschar I30[5] = ;
MFT_REF ntfs_lookup_inode_by_name(ntfs_inode *dir_ni, const ntfschar *uname,
const int uname_len, ntfs_name **res)
static inline int ntfs_filldir(ntfs_volume *vol, loff_t fpos,
ntfs_inode *ndir, struct page *ia_page, INDEX_ENTRY *ie,
u8 *name, void *dirent, filldir_t filldir)
static int ntfs_readdir(struct file *filp, void *dirent, filldir_t filldir)
static int ntfs_dir_open(struct inode *vi, struct file *filp)
static int ntfs_dir_fsync(struct file *filp, int datasync)
const struct file_operations ntfs_dir_ops = ;
