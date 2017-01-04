#define JFFS2_SUMMARY_H
#define MAX_SUMMARY_SIZE 65536
#define BLK_STATE_ALLFF		0
#define BLK_STATE_CLEAN		1
#define BLK_STATE_PARTDIRTY	2
#define BLK_STATE_CLEANMARKER	3
#define BLK_STATE_ALLDIRTY	4
#define BLK_STATE_BADBLOCK	5
#define JFFS2_SUMMARY_NOSUM_SIZE 0xffffffff
#define JFFS2_SUMMARY_INODE_SIZE (sizeof(struct jffs2_sum_inode_flash))
#define JFFS2_SUMMARY_DIRENT_SIZE(x) (sizeof(struct jffs2_sum_dirent_flash) + (x))
#define JFFS2_SUMMARY_XATTR_SIZE (sizeof(struct jffs2_sum_xattr_flash))
#define JFFS2_SUMMARY_XREF_SIZE (sizeof(struct jffs2_sum_xref_flash))
struct jffs2_sum_unknown_flash
;
struct jffs2_sum_inode_flash
__attribute__((packed));
struct jffs2_sum_dirent_flash
__attribute__((packed));
struct jffs2_sum_xattr_flash
__attribute__((packed));
struct jffs2_sum_xref_flash
__attribute__((packed));
union jffs2_sum_flash
;
struct jffs2_sum_unknown_mem
;
struct jffs2_sum_inode_mem
__attribute__((packed));
struct jffs2_sum_dirent_mem
__attribute__((packed));
struct jffs2_sum_xattr_mem
__attribute__((packed));
struct jffs2_sum_xref_mem
__attribute__((packed));
union jffs2_sum_mem
;
struct jffs2_summary
;
struct jffs2_sum_marker
;
#define JFFS2_SUMMARY_FRAME_SIZE (sizeof(struct jffs2_raw_summary) + sizeof(struct jffs2_sum_marker))
#define jffs2_sum_active() (1)
int jffs2_sum_init(struct jffs2_sb_info *c);
void jffs2_sum_exit(struct jffs2_sb_info *c);
void jffs2_sum_disable_collecting(struct jffs2_summary *s);
int jffs2_sum_is_disabled(struct jffs2_summary *s);
void jffs2_sum_reset_collected(struct jffs2_summary *s);
void jffs2_sum_move_collected(struct jffs2_sb_info *c, struct jffs2_summary *s);
int jffs2_sum_add_kvec(struct jffs2_sb_info *c, const struct kvec *invecs,
unsigned long count,  uint32_t to);
int jffs2_sum_write_sumnode(struct jffs2_sb_info *c);
int jffs2_sum_add_padding_mem(struct jffs2_summary *s, uint32_t size);
int jffs2_sum_add_inode_mem(struct jffs2_summary *s, struct jffs2_raw_inode *ri, uint32_t ofs);
int jffs2_sum_add_dirent_mem(struct jffs2_summary *s, struct jffs2_raw_dirent *rd, uint32_t ofs);
int jffs2_sum_add_xattr_mem(struct jffs2_summary *s, struct jffs2_raw_xattr *rx, uint32_t ofs);
int jffs2_sum_add_xref_mem(struct jffs2_summary *s, struct jffs2_raw_xref *rr, uint32_t ofs);
int jffs2_sum_scan_sumnode(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb,
struct jffs2_raw_summary *summary, uint32_t sumlen,
uint32_t *pseudo_random);
#define jffs2_sum_active() (0)
#define jffs2_sum_init(a) (0)
#define jffs2_sum_exit(a)
#define jffs2_sum_disable_collecting(a)
#define jffs2_sum_is_disabled(a) (0)
#define jffs2_sum_reset_collected(a)
#define jffs2_sum_add_kvec(a,b,c,d) (0)
#define jffs2_sum_move_collected(a,b)
#define jffs2_sum_write_sumnode(a) (0)
#define jffs2_sum_add_padding_mem(a,b)
#define jffs2_sum_add_inode_mem(a,b,c)
#define jffs2_sum_add_dirent_mem(a,b,c)
#define jffs2_sum_add_xattr_mem(a,b,c)
#define jffs2_sum_add_xref_mem(a,b,c)
#define jffs2_sum_scan_sumnode(a,b,c,d,e) (0)
