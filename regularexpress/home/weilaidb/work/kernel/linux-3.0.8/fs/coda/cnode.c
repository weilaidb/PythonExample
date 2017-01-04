static inline int coda_fideq(struct CodaFid *fid1, struct CodaFid *fid2)
static const struct inode_operations coda_symlink_inode_operations = ;
static void coda_fill_inode(struct inode *inode, struct coda_vattr *attr)
static int coda_test_inode(struct inode *inode, void *data)
static int coda_set_inode(struct inode *inode, void *data)
struct inode * coda_iget(struct super_block * sb, struct CodaFid * fid,
struct coda_vattr * attr)
int coda_cnode_make(struct inode **inode, struct CodaFid *fid, struct super_block *sb)
void coda_replace_fid(struct inode *inode, struct CodaFid *oldfid,
struct CodaFid *newfid)
struct inode *coda_fid_to_inode(struct CodaFid *fid, struct super_block *sb)
int coda_cnode_makectl(struct inode **inode, struct super_block *sb)
