unsigned *hpfs_map_dnode_bitmap(struct super_block *s, struct quad_buffer_head *qbh)
unsigned int *hpfs_map_bitmap(struct super_block *s, unsigned bmp_block,
struct quad_buffer_head *qbh, char *id)
unsigned char *hpfs_load_code_page(struct super_block *s, secno cps)
secno *hpfs_load_bitmap_directory(struct super_block *s, secno bmp)
struct fnode *hpfs_map_fnode(struct super_block *s, ino_t ino, struct buffer_head **bhp)
struct anode *hpfs_map_anode(struct super_block *s, anode_secno ano, struct buffer_head **bhp)
struct dnode *hpfs_map_dnode(struct super_block *s, unsigned secno,
struct quad_buffer_head *qbh)
dnode_secno hpfs_fnode_dno(struct super_block *s, ino_t ino)
