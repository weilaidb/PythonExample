static DEFINE_RWLOCK(adfs_map_lock);
#define GET_FRAG_ID(_map,_start,_idmask)				\
()
static int
lookup_zone(const struct adfs_discmap *dm, const unsigned int idlen,
const unsigned int frag_id, unsigned int *offset)
static unsigned int
scan_free_map(struct adfs_sb_info *asb, struct adfs_discmap *dm)
static int
scan_map(struct adfs_sb_info *asb, unsigned int zone,
const unsigned int frag_id, unsigned int mapoff)
unsigned int
adfs_map_free(struct super_block *sb)
int
adfs_map_lookup(struct super_block *sb, unsigned int frag_id,
unsigned int offset)
