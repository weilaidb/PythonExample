secno hpfs_bplus_lookup(struct super_block *s, struct inode *inode,
struct bplus_header *btree, unsigned sec,
struct buffer_head *bh)
secno hpfs_add_sector_to_btree(struct super_block *s, secno node, int fnod, unsigned fsecno)
void hpfs_remove_btree(struct super_block *s, struct bplus_header *btree)
static secno anode_lookup(struct super_block *s, anode_secno a, unsigned sec)
int hpfs_ea_read(struct super_block *s, secno a, int ano, unsigned pos,
unsigned len, char *buf)
int hpfs_ea_write(struct super_block *s, secno a, int ano, unsigned pos,
unsigned len, const char *buf)
void hpfs_ea_remove(struct super_block *s, secno a, int ano, unsigned len)
void hpfs_truncate_btree(struct super_block *s, secno f, int fno, unsigned secs)
void hpfs_remove_fnode(struct super_block *s, fnode_secno fno)
