#define EXTRA_HEADER_INFO_FLAG	0x80000000
#define EXTRA_SHRINK_FLAG	0x40000000
#define EXTRA_SHADOWS_FLAG	0x20000000
#define EXTRA_SPARE_FLAGS	0x10000000
#define ALL_EXTRA_FLAGS		0xf0000000
#define EXTRA_OBJECT_TYPE_SHIFT (28)
#define EXTRA_OBJECT_TYPE_MASK  ((0x0f) << EXTRA_OBJECT_TYPE_SHIFT)
static void yaffs_dump_packed_tags2_tags_only(
const struct yaffs_packed_tags2_tags_only *ptt)
static void yaffs_dump_packed_tags2(const struct yaffs_packed_tags2 *pt)
static void yaffs_dump_tags2(const struct yaffs_ext_tags *t)
static int yaffs_check_tags_extra_packable(const struct yaffs_ext_tags *t)
void yaffs_pack_tags2_tags_only(struct yaffs_dev *dev,
struct yaffs_packed_tags2_tags_only *ptt,
const struct yaffs_ext_tags *t)
void yaffs_pack_tags2(struct yaffs_dev *dev,
struct yaffs_packed_tags2 *pt,
const struct yaffs_ext_tags *t, int tags_ecc)
void yaffs_unpack_tags2_tags_only(struct yaffs_dev *dev,
struct yaffs_ext_tags *t,
struct yaffs_packed_tags2_tags_only *ptt_ptr)
void yaffs_unpack_tags2(struct yaffs_dev *dev,
struct yaffs_ext_tags *t,
struct yaffs_packed_tags2 *pt,
int tags_ecc)
