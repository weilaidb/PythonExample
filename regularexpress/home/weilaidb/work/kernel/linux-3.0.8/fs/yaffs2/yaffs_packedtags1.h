#define __YAFFS_PACKEDTAGS1_H__
struct yaffs_packed_tags1 ;
void yaffs_pack_tags1(struct yaffs_packed_tags1 *pt,
const struct yaffs_ext_tags *t);
void yaffs_unpack_tags1(struct yaffs_ext_tags *t,
const struct yaffs_packed_tags1 *pt);
