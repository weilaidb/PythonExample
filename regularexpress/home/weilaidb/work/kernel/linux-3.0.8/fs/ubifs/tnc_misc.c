struct ubifs_znode *ubifs_tnc_levelorder_next(struct ubifs_znode *zr,
struct ubifs_znode *znode)
int ubifs_search_zbranch(const struct ubifs_info *c,
const struct ubifs_znode *znode,
const union ubifs_key *key, int *n)
struct ubifs_znode *ubifs_tnc_postorder_first(struct ubifs_znode *znode)
struct ubifs_znode *ubifs_tnc_postorder_next(struct ubifs_znode *znode)
long ubifs_destroy_tnc_subtree(struct ubifs_znode *znode)
static int read_znode(struct ubifs_info *c, int lnum, int offs, int len,
struct ubifs_znode *znode)
struct ubifs_znode *ubifs_load_znode(struct ubifs_info *c,
struct ubifs_zbranch *zbr,
struct ubifs_znode *parent, int iip)
int ubifs_tnc_read_node(struct ubifs_info *c, struct ubifs_zbranch *zbr,
void *node)
