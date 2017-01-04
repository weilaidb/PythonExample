#define NCP_SYMLINK_MAGIC0	cpu_to_le32(0x6c6d7973)
#define NCP_SYMLINK_MAGIC1	cpu_to_le32(0x3e2d6b6e)
static int ncp_symlink_readpage(struct file *file, struct page *page)
const struct address_space_operations ncp_symlink_aops = ;
int ncp_symlink(struct inode *dir, struct dentry *dentry, const char *symname)
