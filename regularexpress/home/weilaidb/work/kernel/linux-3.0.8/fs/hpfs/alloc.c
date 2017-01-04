static int chk_if_allocated(struct super_block *s, secno sec, char *msg)
int hpfs_chk_sectors(struct super_block *s, secno start, int len, char *msg)
static secno alloc_in_bmp(struct super_block *s, secno near, unsigned n, unsigned forward)
secno hpfs_alloc_sector(struct super_block *s, secno near, unsigned n, int forward)
static secno alloc_in_dirband(struct super_block *s, secno near)
int hpfs_alloc_if_possible(struct super_block *s, secno sec)
void hpfs_free_sectors(struct super_block *s, secno sec, unsigned n)
int hpfs_check_free_dnodes(struct super_block *s, int n)
void hpfs_free_dnode(struct super_block *s, dnode_secno dno)
struct dnode *hpfs_alloc_dnode(struct super_block *s, secno near,
dnode_secno *dno, struct quad_buffer_head *qbh)
struct fnode *hpfs_alloc_fnode(struct super_block *s, secno near, fnode_secno *fno,
struct buffer_head **bh)
struct anode *hpfs_alloc_anode(struct super_block *s, secno near, anode_secno *ano,
struct buffer_head **bh)
