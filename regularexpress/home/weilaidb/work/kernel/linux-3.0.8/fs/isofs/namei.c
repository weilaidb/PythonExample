static int
isofs_cmp(struct dentry *dentry, const char *compare, int dlen)
static unsigned long
isofs_find_entry(struct inode *dir, struct dentry *dentry,
unsigned long *block_rv, unsigned long *offset_rv,
char *tmpname, struct iso_directory_record *tmpde)
struct dentry *isofs_lookup(struct inode *dir, struct dentry *dentry, struct nameidata *nd)
