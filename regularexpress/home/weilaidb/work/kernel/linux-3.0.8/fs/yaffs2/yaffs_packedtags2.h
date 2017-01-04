#define __YAFFS_PACKEDTAGS2_H__
struct yaffs_packed_tags2_tags_only ;
struct yaffs_packed_tags2 ;
void yaffs_pack_tags2(struct yaffs_dev *dev,
struct yaffs_packed_tags2 *pt,
const struct yaffs_ext_tags *t, int tags_ecc);
void yaffs_unpack_tags2(struct yaffs_dev *dev,
struct yaffs_ext_tags *t, struct yaffs_packed_tags2 *pt,
int tags_ecc);
void yaffs_pack_tags2_tags_only(struct yaffs_dev *dev,
struct yaffs_packed_tags2_tags_only *pt,
const struct yaffs_ext_tags *t);
void yaffs_unpack_tags2_tags_only(struct yaffs_dev *dev,
struct yaffs_ext_tags *t,
struct yaffs_packed_tags2_tags_only *pt);
