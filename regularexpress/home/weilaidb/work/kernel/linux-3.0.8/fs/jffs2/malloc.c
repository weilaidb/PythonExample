static struct kmem_cache *full_dnode_slab;
static struct kmem_cache *raw_dirent_slab;
static struct kmem_cache *raw_inode_slab;
static struct kmem_cache *tmp_dnode_info_slab;
static struct kmem_cache *raw_node_ref_slab;
static struct kmem_cache *node_frag_slab;
static struct kmem_cache *inode_cache_slab;
static struct kmem_cache *xattr_datum_cache;
static struct kmem_cache *xattr_ref_cache;
int __init jffs2_create_slab_caches(void)
void jffs2_destroy_slab_caches(void)
struct jffs2_full_dirent *jffs2_alloc_full_dirent(int namesize)
void jffs2_free_full_dirent(struct jffs2_full_dirent *x)
struct jffs2_full_dnode *jffs2_alloc_full_dnode(void)
void jffs2_free_full_dnode(struct jffs2_full_dnode *x)
struct jffs2_raw_dirent *jffs2_alloc_raw_dirent(void)
void jffs2_free_raw_dirent(struct jffs2_raw_dirent *x)
struct jffs2_raw_inode *jffs2_alloc_raw_inode(void)
void jffs2_free_raw_inode(struct jffs2_raw_inode *x)
struct jffs2_tmp_dnode_info *jffs2_alloc_tmp_dnode_info(void)
void jffs2_free_tmp_dnode_info(struct jffs2_tmp_dnode_info *x)
static struct jffs2_raw_node_ref *jffs2_alloc_refblock(void)
int jffs2_prealloc_raw_node_refs(struct jffs2_sb_info *c,
struct jffs2_eraseblock *jeb, int nr)
void jffs2_free_refblock(struct jffs2_raw_node_ref *x)
struct jffs2_node_frag *jffs2_alloc_node_frag(void)
void jffs2_free_node_frag(struct jffs2_node_frag *x)
struct jffs2_inode_cache *jffs2_alloc_inode_cache(void)
void jffs2_free_inode_cache(struct jffs2_inode_cache *x)
struct jffs2_xattr_datum *jffs2_alloc_xattr_datum(void)
void jffs2_free_xattr_datum(struct jffs2_xattr_datum *xd)
struct jffs2_xattr_ref *jffs2_alloc_xattr_ref(void)
void jffs2_free_xattr_ref(struct jffs2_xattr_ref *ref)
