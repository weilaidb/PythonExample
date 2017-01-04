#define __YAFFS_ENDIAN_H__
static inline u32 swap_u32(u32 val)
#define swap_s32(val) \
(s32)(swap_u32((u32)(val)))
static inline Y_LOFF_T swap_loff_t(Y_LOFF_T lval)
void yaffs_do_endian_s32(struct yaffs_dev *dev, s32 *val);
void yaffs_do_endian_u32(struct yaffs_dev *dev, u32 *val);
void yaffs_do_endian_oh(struct yaffs_dev *dev, struct yaffs_obj_hdr *oh);
void yaffs_do_endian_packed_tags2(struct yaffs_dev *dev,
struct yaffs_packed_tags2_tags_only *ptt);
void yaffs_endian_config(struct yaffs_dev *dev);
