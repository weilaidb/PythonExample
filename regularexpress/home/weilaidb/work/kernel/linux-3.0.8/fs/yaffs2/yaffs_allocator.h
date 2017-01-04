#define __YAFFS_ALLOCATOR_H__
void yaffs_init_raw_tnodes_and_objs(struct yaffs_dev *dev);
void yaffs_deinit_raw_tnodes_and_objs(struct yaffs_dev *dev);
struct yaffs_tnode *yaffs_alloc_raw_tnode(struct yaffs_dev *dev);
void yaffs_free_raw_tnode(struct yaffs_dev *dev, struct yaffs_tnode *tn);
struct yaffs_obj *yaffs_alloc_raw_obj(struct yaffs_dev *dev);
void yaffs_free_raw_obj(struct yaffs_dev *dev, struct yaffs_obj *obj);
