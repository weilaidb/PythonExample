#define _H_JFS_METAPAGE
struct metapage ;
#define META_locked	0
#define META_free	1
#define META_dirty	2
#define META_sync	3
#define META_discard	4
#define META_forcewrite	5
#define META_io		6
#define mark_metapage_dirty(mp) set_bit(META_dirty, &(mp)->flag)
extern int metapage_init(void);
extern void metapage_exit(void);
extern struct metapage *__get_metapage(struct inode *inode,
unsigned long lblock, unsigned int size,
int absolute, unsigned long new);
#define read_metapage(inode, lblock, size, absolute)\
__get_metapage(inode, lblock, size, absolute, false)
#define get_metapage(inode, lblock, size, absolute)\
__get_metapage(inode, lblock, size, absolute, true)
extern void release_metapage(struct metapage *);
extern void grab_metapage(struct metapage *);
extern void force_metapage(struct metapage *);
extern void hold_metapage(struct metapage *);
extern void put_metapage(struct metapage *);
static inline void write_metapage(struct metapage *mp)
static inline void flush_metapage(struct metapage *mp)
static inline void discard_metapage(struct metapage *mp)
static inline void metapage_nohomeok(struct metapage *mp)
static inline void metapage_wait_for_io(struct metapage *mp)
static inline void _metapage_homeok(struct metapage *mp)
static inline void metapage_homeok(struct metapage *mp)
extern const struct address_space_operations jfs_metapage_aops;
extern void __invalidate_metapages(struct inode *, s64, int);
#define invalidate_pxd_metapages(ip, pxd) \
__invalidate_metapages((ip), addressPXD(&(pxd)), lengthPXD(&(pxd)))
#define invalidate_dxd_metapages(ip, dxd) \
__invalidate_metapages((ip), addressDXD(&(dxd)), lengthDXD(&(dxd)))
#define invalidate_xad_metapages(ip, xad) \
__invalidate_metapages((ip), addressXAD(&(xad)), lengthXAD(&(xad)))
