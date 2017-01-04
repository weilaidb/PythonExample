#define __UBIFS_MISC_H__
static inline int ubifs_zn_dirty(const struct ubifs_znode *znode)
static inline void ubifs_wake_up_bgt(struct ubifs_info *c)
static inline struct ubifs_znode *
ubifs_tnc_find_child(struct ubifs_znode *znode, int start)
static inline struct ubifs_inode *ubifs_inode(const struct inode *inode)
static inline int ubifs_compr_present(int compr_type)
static inline const char *ubifs_compr_name(int compr_type)
static inline int ubifs_wbuf_sync(struct ubifs_wbuf *wbuf)
static inline int ubifs_leb_unmap(const struct ubifs_info *c, int lnum)
static inline int ubifs_leb_write(const struct ubifs_info *c, int lnum,
const void *buf, int offs, int len, int dtype)
static inline int ubifs_leb_change(const struct ubifs_info *c, int lnum,
const void *buf, int len, int dtype)
static inline int ubifs_encode_dev(union ubifs_dev_desc *dev, dev_t rdev)
static inline int ubifs_add_dirt(struct ubifs_info *c, int lnum, int dirty)
static inline int ubifs_return_leb(struct ubifs_info *c, int lnum)
static inline int ubifs_idx_node_sz(const struct ubifs_info *c, int child_cnt)
static inline
struct ubifs_branch *ubifs_idx_branch(const struct ubifs_info *c,
const struct ubifs_idx_node *idx,
int bnum)
static inline void *ubifs_idx_key(const struct ubifs_info *c,
const struct ubifs_idx_node *idx)
static inline struct timespec ubifs_current_time(struct inode *inode)
static inline int ubifs_tnc_lookup(struct ubifs_info *c,
const union ubifs_key *key, void *node)
static inline void ubifs_get_lprops(struct ubifs_info *c)
static inline void ubifs_release_lprops(struct ubifs_info *c)
static inline int ubifs_next_log_lnum(const struct ubifs_info *c, int lnum)
