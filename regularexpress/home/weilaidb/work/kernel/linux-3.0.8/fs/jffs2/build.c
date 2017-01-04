static void jffs2_build_remove_unlinked_inode(struct jffs2_sb_info *,
struct jffs2_inode_cache *, struct jffs2_full_dirent **);
static inline struct jffs2_inode_cache *
first_inode_chain(int *i, struct jffs2_sb_info *c)
static inline struct jffs2_inode_cache *
next_inode(int *i, struct jffs2_inode_cache *ic, struct jffs2_sb_info *c)
#define for_each_inode(i, c, ic)			\
for (i = 0, ic = first_inode_chain(&i, (c));	\
ic;					\
ic = next_inode(&i, ic, (c)))
static void jffs2_build_inode_pass1(struct jffs2_sb_info *c,
struct jffs2_inode_cache *ic)
static int jffs2_build_filesystem(struct jffs2_sb_info *c)
static void jffs2_build_remove_unlinked_inode(struct jffs2_sb_info *c,
struct jffs2_inode_cache *ic,
struct jffs2_full_dirent **dead_fds)
static void jffs2_calc_trigger_levels(struct jffs2_sb_info *c)
int jffs2_do_mount_fs(struct jffs2_sb_info *c)
