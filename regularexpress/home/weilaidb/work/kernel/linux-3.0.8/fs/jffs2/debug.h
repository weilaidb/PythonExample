#define _JFFS2_DEBUG_H_
#define CONFIG_JFFS2_FS_DEBUG 0
#if CONFIG_JFFS2_FS_DEBUG > 0
#define JFFS2_DBG_PARANOIA_CHECKS
#define JFFS2_DBG_DUMPS
#define JFFS2_DBG_READINODE_MESSAGES
#define JFFS2_DBG_FRAGTREE_MESSAGES
#define JFFS2_DBG_DENTLIST_MESSAGES
#define JFFS2_DBG_NODEREF_MESSAGES
#define JFFS2_DBG_INOCACHE_MESSAGES
#define JFFS2_DBG_SUMMARY_MESSAGES
#define JFFS2_DBG_FSBUILD_MESSAGES
#if CONFIG_JFFS2_FS_DEBUG > 1
#define JFFS2_DBG_FRAGTREE2_MESSAGES
#define JFFS2_DBG_READINODE2_MESSAGES
#define JFFS2_DBG_MEMALLOC_MESSAGES
#define JFFS2_DBG_SANITY_CHECKS
#if CONFIG_JFFS2_FS_DEBUG > 0
#define D1(x) x
#define D1(x)
#if CONFIG_JFFS2_FS_DEBUG > 1
#define D2(x) x
#define D2(x)
#define JFFS2_DBG_PREFIX	"[JFFS2 DBG]"
#define JFFS2_ERR_PREFIX	"JFFS2 error:"
#define JFFS2_WARN_PREFIX	"JFFS2 warning:"
#define JFFS2_NOTICE_PREFIX	"JFFS2 notice:"
#define JFFS2_ERR	KERN_ERR
#define JFFS2_WARN	KERN_WARNING
#define JFFS2_NOT	KERN_NOTICE
#define JFFS2_DBG	KERN_DEBUG
#define JFFS2_DBG_MSG_PREFIX	JFFS2_DBG JFFS2_DBG_PREFIX
#define JFFS2_ERR_MSG_PREFIX	JFFS2_ERR JFFS2_ERR_PREFIX
#define JFFS2_WARN_MSG_PREFIX	JFFS2_WARN JFFS2_WARN_PREFIX
#define JFFS2_NOTICE_MSG_PREFIX	JFFS2_NOT JFFS2_NOTICE_PREFIX
#define JFFS2_ERROR(fmt, ...)						\
do  while(0)
#define JFFS2_WARNING(fmt, ...)						\
do  while(0)
#define JFFS2_NOTICE(fmt, ...)						\
do  while(0)
#define JFFS2_DEBUG(fmt, ...)						\
do  while(0)
#define dbg_readinode(fmt, ...)	JFFS2_DEBUG(fmt, ##__VA_ARGS__)
#define dbg_readinode(fmt, ...)
#define dbg_readinode2(fmt, ...)	JFFS2_DEBUG(fmt, ##__VA_ARGS__)
#define dbg_readinode2(fmt, ...)
#define dbg_fragtree(fmt, ...)	JFFS2_DEBUG(fmt, ##__VA_ARGS__)
#define dbg_fragtree(fmt, ...)
#define dbg_fragtree2(fmt, ...)	JFFS2_DEBUG(fmt, ##__VA_ARGS__)
#define dbg_fragtree2(fmt, ...)
#define dbg_dentlist(fmt, ...)	JFFS2_DEBUG(fmt, ##__VA_ARGS__)
#define dbg_dentlist(fmt, ...)
#define dbg_noderef(fmt, ...)	JFFS2_DEBUG(fmt, ##__VA_ARGS__)
#define dbg_noderef(fmt, ...)
#define dbg_inocache(fmt, ...)	JFFS2_DEBUG(fmt, ##__VA_ARGS__)
#define dbg_inocache(fmt, ...)
#define dbg_summary(fmt, ...)	JFFS2_DEBUG(fmt, ##__VA_ARGS__)
#define dbg_summary(fmt, ...)
#define dbg_fsbuild(fmt, ...)	JFFS2_DEBUG(fmt, ##__VA_ARGS__)
#define dbg_fsbuild(fmt, ...)
#define dbg_memalloc(fmt, ...)	JFFS2_DEBUG(fmt, ##__VA_ARGS__)
#define dbg_memalloc(fmt, ...)
#define dbg_xattr(fmt, ...)  JFFS2_DEBUG(fmt, ##__VA_ARGS__)
#define dbg_xattr(fmt, ...)
void
__jffs2_dbg_acct_sanity_check_nolock(struct jffs2_sb_info *c,
struct jffs2_eraseblock *jeb);
void
__jffs2_dbg_acct_sanity_check(struct jffs2_sb_info *c,
struct jffs2_eraseblock *jeb);
void
__jffs2_dbg_fragtree_paranoia_check(struct jffs2_inode_info *f);
void
__jffs2_dbg_fragtree_paranoia_check_nolock(struct jffs2_inode_info *f);
void
__jffs2_dbg_acct_paranoia_check(struct jffs2_sb_info *c,
struct jffs2_eraseblock *jeb);
void
__jffs2_dbg_acct_paranoia_check_nolock(struct jffs2_sb_info *c,
struct jffs2_eraseblock *jeb);
void
__jffs2_dbg_prewrite_paranoia_check(struct jffs2_sb_info *c,
uint32_t ofs, int len);
void
__jffs2_dbg_dump_jeb(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb);
void
__jffs2_dbg_dump_jeb_nolock(struct jffs2_eraseblock *jeb);
void
__jffs2_dbg_dump_block_lists(struct jffs2_sb_info *c);
void
__jffs2_dbg_dump_block_lists_nolock(struct jffs2_sb_info *c);
void
__jffs2_dbg_dump_node_refs(struct jffs2_sb_info *c,
struct jffs2_eraseblock *jeb);
void
__jffs2_dbg_dump_node_refs_nolock(struct jffs2_sb_info *c,
struct jffs2_eraseblock *jeb);
void
__jffs2_dbg_dump_fragtree(struct jffs2_inode_info *f);
void
__jffs2_dbg_dump_fragtree_nolock(struct jffs2_inode_info *f);
void
__jffs2_dbg_dump_buffer(unsigned char *buf, int len, uint32_t offs);
void
__jffs2_dbg_dump_node(struct jffs2_sb_info *c, uint32_t ofs);
#define jffs2_dbg_fragtree_paranoia_check(f)			\
__jffs2_dbg_fragtree_paranoia_check(f)
#define jffs2_dbg_fragtree_paranoia_check_nolock(f)		\
__jffs2_dbg_fragtree_paranoia_check_nolock(f)
#define jffs2_dbg_acct_paranoia_check(c, jeb)			\
__jffs2_dbg_acct_paranoia_check(c,jeb)
#define jffs2_dbg_acct_paranoia_check_nolock(c, jeb)		\
__jffs2_dbg_acct_paranoia_check_nolock(c,jeb)
#define jffs2_dbg_prewrite_paranoia_check(c, ofs, len)		\
__jffs2_dbg_prewrite_paranoia_check(c, ofs, len)
#define jffs2_dbg_fragtree_paranoia_check(f)
#define jffs2_dbg_fragtree_paranoia_check_nolock(f)
#define jffs2_dbg_acct_paranoia_check(c, jeb)
#define jffs2_dbg_acct_paranoia_check_nolock(c, jeb)
#define jffs2_dbg_prewrite_paranoia_check(c, ofs, len)
#define jffs2_dbg_dump_jeb(c, jeb)				\
__jffs2_dbg_dump_jeb(c, jeb);
#define jffs2_dbg_dump_jeb_nolock(jeb)				\
__jffs2_dbg_dump_jeb_nolock(jeb);
#define jffs2_dbg_dump_block_lists(c)				\
__jffs2_dbg_dump_block_lists(c)
#define jffs2_dbg_dump_block_lists_nolock(c)			\
__jffs2_dbg_dump_block_lists_nolock(c)
#define jffs2_dbg_dump_fragtree(f)				\
__jffs2_dbg_dump_fragtree(f);
#define jffs2_dbg_dump_fragtree_nolock(f)			\
__jffs2_dbg_dump_fragtree_nolock(f);
#define jffs2_dbg_dump_buffer(buf, len, offs)			\
__jffs2_dbg_dump_buffer(*buf, len, offs);
#define jffs2_dbg_dump_node(c, ofs)				\
__jffs2_dbg_dump_node(c, ofs);
#define jffs2_dbg_dump_jeb(c, jeb)
#define jffs2_dbg_dump_jeb_nolock(jeb)
#define jffs2_dbg_dump_block_lists(c)
#define jffs2_dbg_dump_block_lists_nolock(c)
#define jffs2_dbg_dump_fragtree(f)
#define jffs2_dbg_dump_fragtree_nolock(f)
#define jffs2_dbg_dump_buffer(buf, len, offs)
#define jffs2_dbg_dump_node(c, ofs)
#define jffs2_dbg_acct_sanity_check(c, jeb)			\
__jffs2_dbg_acct_sanity_check(c, jeb)
#define jffs2_dbg_acct_sanity_check_nolock(c, jeb)		\
__jffs2_dbg_acct_sanity_check_nolock(c, jeb)
#define jffs2_dbg_acct_sanity_check(c, jeb)
#define jffs2_dbg_acct_sanity_check_nolock(c, jeb)
