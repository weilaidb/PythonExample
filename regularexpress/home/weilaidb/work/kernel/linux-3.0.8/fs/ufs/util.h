#define in_range(b,first,len)	((b)>=(first)&&(b)<(first)+(len))
static inline struct ufs_buffer_head *UCPI_UBH(struct ufs_cg_private_info *cpi)
static inline struct ufs_buffer_head *USPI_UBH(struct ufs_sb_private_info *spi)
static inline s32
ufs_get_fs_state(struct super_block *sb, struct ufs_super_block_first *usb1,
struct ufs_super_block_third *usb3)
static inline void
ufs_set_fs_state(struct super_block *sb, struct ufs_super_block_first *usb1,
struct ufs_super_block_third *usb3, s32 value)
static inline u32
ufs_get_fs_npsect(struct super_block *sb, struct ufs_super_block_first *usb1,
struct ufs_super_block_third *usb3)
static inline u64
ufs_get_fs_qbmask(struct super_block *sb, struct ufs_super_block_third *usb3)
static inline u64
ufs_get_fs_qfmask(struct super_block *sb, struct ufs_super_block_third *usb3)
static inline u16
ufs_get_de_namlen(struct super_block *sb, struct ufs_dir_entry *de)
static inline void
ufs_set_de_namlen(struct super_block *sb, struct ufs_dir_entry *de, u16 value)
static inline void
ufs_set_de_type(struct super_block *sb, struct ufs_dir_entry *de, int mode)
static inline u32
ufs_get_inode_uid(struct super_block *sb, struct ufs_inode *inode)
static inline void
ufs_set_inode_uid(struct super_block *sb, struct ufs_inode *inode, u32 value)
static inline u32
ufs_get_inode_gid(struct super_block *sb, struct ufs_inode *inode)
static inline void
ufs_set_inode_gid(struct super_block *sb, struct ufs_inode *inode, u32 value)
extern dev_t ufs_get_inode_dev(struct super_block *, struct ufs_inode_info *);
extern void ufs_set_inode_dev(struct super_block *, struct ufs_inode_info *, dev_t);
extern int ufs_prepare_chunk(struct page *page, loff_t pos, unsigned len);
#define ubh_bread(sb,fragment,size) _ubh_bread_(uspi,sb,fragment,size)
extern struct ufs_buffer_head * _ubh_bread_(struct ufs_sb_private_info *, struct super_block *, u64 , u64);
extern struct ufs_buffer_head * ubh_bread_uspi(struct ufs_sb_private_info *, struct super_block *, u64, u64);
extern void ubh_brelse (struct ufs_buffer_head *);
extern void ubh_brelse_uspi (struct ufs_sb_private_info *);
extern void ubh_mark_buffer_dirty (struct ufs_buffer_head *);
extern void ubh_mark_buffer_uptodate (struct ufs_buffer_head *, int);
extern void ubh_sync_block(struct ufs_buffer_head *);
extern void ubh_bforget (struct ufs_buffer_head *);
extern int  ubh_buffer_dirty (struct ufs_buffer_head *);
#define ubh_ubhcpymem(mem,ubh,size) _ubh_ubhcpymem_(uspi,mem,ubh,size)
extern void _ubh_ubhcpymem_(struct ufs_sb_private_info *, unsigned char *, struct ufs_buffer_head *, unsigned);
#define ubh_memcpyubh(ubh,mem,size) _ubh_memcpyubh_(uspi,ubh,mem,size)
extern void _ubh_memcpyubh_(struct ufs_sb_private_info *, struct ufs_buffer_head *, unsigned char *, unsigned);
extern struct page *ufs_get_locked_page(struct address_space *mapping,
pgoff_t index);
static inline void ufs_put_locked_page(struct page *page)
static inline void *get_usb_offset(struct ufs_sb_private_info *uspi,
unsigned int offset)
#define ubh_get_usb_first(uspi) \
((struct ufs_super_block_first *)get_usb_offset((uspi), 0))
#define ubh_get_usb_second(uspi) \
((struct ufs_super_block_second *)get_usb_offset((uspi), UFS_SECTOR_SIZE))
#define ubh_get_usb_third(uspi)	\
((struct ufs_super_block_third *)get_usb_offset((uspi), 2*UFS_SECTOR_SIZE))
#define ubh_get_ucg(ubh) \
((struct ufs_cylinder_group *)((ubh)->bh[0]->b_data))
#define ubh_get_addr8(ubh,begin) \
((u8*)(ubh)->bh[(begin) >> uspi->s_fshift]->b_data + \
((begin) & ~uspi->s_fmask))
#define ubh_get_addr16(ubh,begin) \
(((__fs16*)((ubh)->bh[(begin) >> (uspi->s_fshift-1)]->b_data)) + \
((begin) & ((uspi->fsize>>1) - 1)))
#define ubh_get_addr32(ubh,begin) \
(((__fs32*)((ubh)->bh[(begin) >> (uspi->s_fshift-2)]->b_data)) + \
((begin) & ((uspi->s_fsize>>2) - 1)))
#define ubh_get_addr64(ubh,begin) \
(((__fs64*)((ubh)->bh[(begin) >> (uspi->s_fshift-3)]->b_data)) + \
((begin) & ((uspi->s_fsize>>3) - 1)))
#define ubh_get_addr ubh_get_addr8
static inline void *ubh_get_data_ptr(struct ufs_sb_private_info *uspi,
struct ufs_buffer_head *ubh,
u64 blk)
#define ubh_blkmap(ubh,begin,bit) \
((*ubh_get_addr(ubh, (begin) + ((bit) >> 3)) >> ((bit) & 7)) & (0xff >> (UFS_MAXFRAG - uspi->s_fpb)))
static inline u64
ufs_freespace(struct ufs_sb_private_info *uspi, int percentreserved)
#define ubh_cg_blktot(ucpi,cylno) \
(*((__fs32*)ubh_get_addr(UCPI_UBH(ucpi), (ucpi)->c_btotoff + ((cylno) << 2))))
#define ubh_cg_blks(ucpi,cylno,rpos) \
(*((__fs16*)ubh_get_addr(UCPI_UBH(ucpi), \
(ucpi)->c_boff + (((cylno) * uspi->s_nrpos + (rpos)) << 1 ))))
#define ubh_setbit(ubh,begin,bit) \
(*ubh_get_addr(ubh, (begin) + ((bit) >> 3)) |= (1 << ((bit) & 7)))
#define ubh_clrbit(ubh,begin,bit) \
(*ubh_get_addr (ubh, (begin) + ((bit) >> 3)) &= ~(1 << ((bit) & 7)))
#define ubh_isset(ubh,begin,bit) \
(*ubh_get_addr (ubh, (begin) + ((bit) >> 3)) & (1 << ((bit) & 7)))
#define ubh_isclr(ubh,begin,bit) (!ubh_isset(ubh,begin,bit))
#define ubh_find_first_zero_bit(ubh,begin,size) _ubh_find_next_zero_bit_(uspi,ubh,begin,size,0)
#define ubh_find_next_zero_bit(ubh,begin,size,offset) _ubh_find_next_zero_bit_(uspi,ubh,begin,size,offset)
static inline unsigned _ubh_find_next_zero_bit_(
struct ufs_sb_private_info * uspi, struct ufs_buffer_head * ubh,
unsigned begin, unsigned size, unsigned offset)
static inline unsigned find_last_zero_bit (unsigned char * bitmap,
unsigned size, unsigned offset)
#define ubh_find_last_zero_bit(ubh,begin,size,offset) _ubh_find_last_zero_bit_(uspi,ubh,begin,size,offset)
static inline unsigned _ubh_find_last_zero_bit_(
struct ufs_sb_private_info * uspi, struct ufs_buffer_head * ubh,
unsigned begin, unsigned start, unsigned end)
#define ubh_isblockclear(ubh,begin,block) (!_ubh_isblockset_(uspi,ubh,begin,block))
#define ubh_isblockset(ubh,begin,block) _ubh_isblockset_(uspi,ubh,begin,block)
static inline int _ubh_isblockset_(struct ufs_sb_private_info * uspi,
struct ufs_buffer_head * ubh, unsigned begin, unsigned block)
#define ubh_clrblock(ubh,begin,block) _ubh_clrblock_(uspi,ubh,begin,block)
static inline void _ubh_clrblock_(struct ufs_sb_private_info * uspi,
struct ufs_buffer_head * ubh, unsigned begin, unsigned block)
#define ubh_setblock(ubh,begin,block) _ubh_setblock_(uspi,ubh,begin,block)
static inline void _ubh_setblock_(struct ufs_sb_private_info * uspi,
struct ufs_buffer_head * ubh, unsigned begin, unsigned block)
static inline void ufs_fragacct (struct super_block * sb, unsigned blockmap,
__fs32 * fraglist, int cnt)
static inline void *ufs_get_direct_data_ptr(struct ufs_sb_private_info *uspi,
struct ufs_inode_info *ufsi,
unsigned blk)
static inline u64 ufs_data_ptr_to_cpu(struct super_block *sb, void *p)
static inline void ufs_cpu_to_data_ptr(struct super_block *sb, void *p, u64 val)
static inline void ufs_data_ptr_clear(struct ufs_sb_private_info *uspi,
void *p)
static inline int ufs_is_data_ptr_zero(struct ufs_sb_private_info *uspi,
void *p)
