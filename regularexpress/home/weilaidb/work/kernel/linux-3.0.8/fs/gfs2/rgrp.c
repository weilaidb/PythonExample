#define BFITNOENT ((u32)~0)
#define NO_BLOCK ((u64)~0)
#if BITS_PER_LONG == 32
#define LBITMASK   (0x55555555UL)
#define LBITSKIP55 (0x55555555UL)
#define LBITSKIP00 (0x00000000UL)
#define LBITMASK   (0x5555555555555555UL)
#define LBITSKIP55 (0x5555555555555555UL)
#define LBITSKIP00 (0x0000000000000000UL)
static const char valid_change[16] = ;
static u32 rgblk_search(struct gfs2_rgrpd *rgd, u32 goal,
unsigned char old_state, unsigned char new_state,
unsigned int *n);
static inline void gfs2_setbit(struct gfs2_rgrpd *rgd, unsigned char *buf1,
unsigned char *buf2, unsigned int offset,
struct gfs2_bitmap *bi, u32 block,
unsigned char new_state)
static inline unsigned char gfs2_testbit(struct gfs2_rgrpd *rgd,
const unsigned char *buffer,
unsigned int buflen, u32 block)
static inline u64 gfs2_bit_search(const __le64 *ptr, u64 mask, u8 state)
static u32 gfs2_bitfit(const u8 *buf, const unsigned int len,
u32 goal, u8 state)
static u32 gfs2_bitcount(struct gfs2_rgrpd *rgd, const u8 *buffer,
unsigned int buflen, u8 state)
void gfs2_rgrp_verify(struct gfs2_rgrpd *rgd)
static inline int rgrp_contains_block(struct gfs2_rgrpd *rgd, u64 block)
struct gfs2_rgrpd *gfs2_blk2rgrpd(struct gfs2_sbd *sdp, u64 blk)
struct gfs2_rgrpd *gfs2_rgrpd_get_first(struct gfs2_sbd *sdp)
struct gfs2_rgrpd *gfs2_rgrpd_get_next(struct gfs2_rgrpd *rgd)
static void clear_rgrpdi(struct gfs2_sbd *sdp)
void gfs2_clear_rgrpd(struct gfs2_sbd *sdp)
static void gfs2_rindex_print(const struct gfs2_rgrpd *rgd)
static int compute_bitstructs(struct gfs2_rgrpd *rgd)
u64 gfs2_ri_total(struct gfs2_sbd *sdp)
static void gfs2_rindex_in(struct gfs2_rgrpd *rgd, const void *buf)
static int read_rindex_entry(struct gfs2_inode *ip,
struct file_ra_state *ra_state)
int gfs2_ri_update(struct gfs2_inode *ip)
int gfs2_rindex_hold(struct gfs2_sbd *sdp, struct gfs2_holder *ri_gh)
static void gfs2_rgrp_in(struct gfs2_rgrpd *rgd, const void *buf)
static void gfs2_rgrp_out(struct gfs2_rgrpd *rgd, void *buf)
int gfs2_rgrp_bh_get(struct gfs2_rgrpd *rgd)
void gfs2_rgrp_bh_hold(struct gfs2_rgrpd *rgd)
void gfs2_rgrp_bh_put(struct gfs2_rgrpd *rgd)
static void gfs2_rgrp_send_discards(struct gfs2_sbd *sdp, u64 offset,
const struct gfs2_bitmap *bi)
void gfs2_rgrp_repolish_clones(struct gfs2_rgrpd *rgd)
struct gfs2_alloc *gfs2_alloc_get(struct gfs2_inode *ip)
static int try_rgrp_fit(struct gfs2_rgrpd *rgd, struct gfs2_alloc *al)
static void try_rgrp_unlink(struct gfs2_rgrpd *rgd, u64 *last_unlinked, u64 skip)
static struct gfs2_rgrpd *recent_rgrp_next(struct gfs2_rgrpd *cur_rgd)
static struct gfs2_rgrpd *forward_rgrp_get(struct gfs2_sbd *sdp)
static void forward_rgrp_set(struct gfs2_sbd *sdp, struct gfs2_rgrpd *rgd)
static int get_local_rgrp(struct gfs2_inode *ip, u64 *last_unlinked)
int gfs2_inplace_reserve_i(struct gfs2_inode *ip, int hold_rindex,
char *file, unsigned int line)
void gfs2_inplace_release(struct gfs2_inode *ip)
static unsigned char gfs2_get_block_type(struct gfs2_rgrpd *rgd, u64 block)
static u32 rgblk_search(struct gfs2_rgrpd *rgd, u32 goal,
unsigned char old_state, unsigned char new_state,
unsigned int *n)
static struct gfs2_rgrpd *rgblk_free(struct gfs2_sbd *sdp, u64 bstart,
u32 blen, unsigned char new_state)
int gfs2_rgrp_dump(struct seq_file *seq, const struct gfs2_glock *gl)
static void gfs2_rgrp_error(struct gfs2_rgrpd *rgd)
int gfs2_alloc_block(struct gfs2_inode *ip, u64 *bn, unsigned int *n)
int gfs2_alloc_di(struct gfs2_inode *dip, u64 *bn, u64 *generation)
void __gfs2_free_data(struct gfs2_inode *ip, u64 bstart, u32 blen)
void gfs2_free_data(struct gfs2_inode *ip, u64 bstart, u32 blen)
void __gfs2_free_meta(struct gfs2_inode *ip, u64 bstart, u32 blen)
void gfs2_free_meta(struct gfs2_inode *ip, u64 bstart, u32 blen)
void gfs2_unlink_di(struct inode *inode)
static void gfs2_free_uninit_di(struct gfs2_rgrpd *rgd, u64 blkno)
void gfs2_free_di(struct gfs2_rgrpd *rgd, struct gfs2_inode *ip)
int gfs2_check_blk_type(struct gfs2_sbd *sdp, u64 no_addr, unsigned int type)
void gfs2_rlist_add(struct gfs2_sbd *sdp, struct gfs2_rgrp_list *rlist,
u64 block)
void gfs2_rlist_alloc(struct gfs2_rgrp_list *rlist, unsigned int state)
void gfs2_rlist_free(struct gfs2_rgrp_list *rlist)
