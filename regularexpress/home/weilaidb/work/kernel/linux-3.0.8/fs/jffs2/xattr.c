static uint32_t xattr_datum_hashkey(int xprefix, const char *xname, const char *xvalue, int xsize)
static int is_xattr_datum_unchecked(struct jffs2_sb_info *c, struct jffs2_xattr_datum *xd)
static void unload_xattr_datum(struct jffs2_sb_info *c, struct jffs2_xattr_datum *xd)
static void reclaim_xattr_datum(struct jffs2_sb_info *c)
static int do_verify_xattr_datum(struct jffs2_sb_info *c, struct jffs2_xattr_datum *xd)
static int do_load_xattr_datum(struct jffs2_sb_info *c, struct jffs2_xattr_datum *xd)
static int load_xattr_datum(struct jffs2_sb_info *c, struct jffs2_xattr_datum *xd)
static int save_xattr_datum(struct jffs2_sb_info *c, struct jffs2_xattr_datum *xd)
static struct jffs2_xattr_datum *create_xattr_datum(struct jffs2_sb_info *c,
int xprefix, const char *xname,
const char *xvalue, int xsize)
static void unrefer_xattr_datum(struct jffs2_sb_info *c, struct jffs2_xattr_datum *xd)
static int verify_xattr_ref(struct jffs2_sb_info *c, struct jffs2_xattr_ref *ref)
static int save_xattr_ref(struct jffs2_sb_info *c, struct jffs2_xattr_ref *ref)
static struct jffs2_xattr_ref *create_xattr_ref(struct jffs2_sb_info *c, struct jffs2_inode_cache *ic,
struct jffs2_xattr_datum *xd)
static void delete_xattr_ref(struct jffs2_sb_info *c, struct jffs2_xattr_ref *ref)
void jffs2_xattr_delete_inode(struct jffs2_sb_info *c, struct jffs2_inode_cache *ic)
void jffs2_xattr_free_inode(struct jffs2_sb_info *c, struct jffs2_inode_cache *ic)
static int check_xattr_ref_inode(struct jffs2_sb_info *c, struct jffs2_inode_cache *ic)
void jffs2_init_xattr_subsystem(struct jffs2_sb_info *c)
static struct jffs2_xattr_datum *jffs2_find_xattr_datum(struct jffs2_sb_info *c, uint32_t xid)
void jffs2_clear_xattr_subsystem(struct jffs2_sb_info *c)
#define XREF_TMPHASH_SIZE	(128)
void jffs2_build_xattr_subsystem(struct jffs2_sb_info *c)
struct jffs2_xattr_datum *jffs2_setup_xattr_datum(struct jffs2_sb_info *c,
uint32_t xid, uint32_t version)
const struct xattr_handler *jffs2_xattr_handlers[] = ;
static const struct xattr_handler *xprefix_to_handler(int xprefix)
ssize_t jffs2_listxattr(struct dentry *dentry, char *buffer, size_t size)
int do_jffs2_getxattr(struct inode *inode, int xprefix, const char *xname,
char *buffer, size_t size)
int do_jffs2_setxattr(struct inode *inode, int xprefix, const char *xname,
const char *buffer, size_t size, int flags)
int jffs2_garbage_collect_xattr_datum(struct jffs2_sb_info *c, struct jffs2_xattr_datum *xd,
struct jffs2_raw_node_ref *raw)
int jffs2_garbage_collect_xattr_ref(struct jffs2_sb_info *c, struct jffs2_xattr_ref *ref,
struct jffs2_raw_node_ref *raw)
int jffs2_verify_xattr(struct jffs2_sb_info *c)
void jffs2_release_xattr_datum(struct jffs2_sb_info *c, struct jffs2_xattr_datum *xd)
void jffs2_release_xattr_ref(struct jffs2_sb_info *c, struct jffs2_xattr_ref *ref)
