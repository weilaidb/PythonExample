void hpfs_ea_ext_remove(struct super_block *s, secno a, int ano, unsigned len)
static char *get_indirect_ea(struct super_block *s, int ano, secno a, int size)
static void set_indirect_ea(struct super_block *s, int ano, secno a,
const char *data, int size)
int hpfs_read_ea(struct super_block *s, struct fnode *fnode, char *key,
char *buf, int size)
char *hpfs_get_ea(struct super_block *s, struct fnode *fnode, char *key, int *size)
void hpfs_set_ea(struct inode *inode, struct fnode *fnode, const char *key,
const char *data, int size)
