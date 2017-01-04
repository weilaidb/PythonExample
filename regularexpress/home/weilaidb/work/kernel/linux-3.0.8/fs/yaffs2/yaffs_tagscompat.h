#define __YAFFS_TAGSCOMPAT_H__
void yaffs_tags_compat_install(struct yaffs_dev *dev);
void yaffs_calc_tags_ecc(struct yaffs_tags *tags);
int yaffs_check_tags_ecc(struct yaffs_tags *tags);
