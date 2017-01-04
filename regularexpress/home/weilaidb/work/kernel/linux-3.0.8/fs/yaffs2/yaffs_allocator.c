struct yaffs_tnode_list ;
struct yaffs_obj_list ;
struct yaffs_allocator ;
static void yaffs_deinit_raw_tnodes(struct yaffs_dev *dev)
static void yaffs_init_raw_tnodes(struct yaffs_dev *dev)
static int yaffs_create_tnodes(struct yaffs_dev *dev, int n_tnodes)
struct yaffs_tnode *yaffs_alloc_raw_tnode(struct yaffs_dev *dev)
void yaffs_free_raw_tnode(struct yaffs_dev *dev, struct yaffs_tnode *tn)
static void yaffs_init_raw_objs(struct yaffs_dev *dev)
static void yaffs_deinit_raw_objs(struct yaffs_dev *dev)
static int yaffs_create_free_objs(struct yaffs_dev *dev, int n_obj)
struct yaffs_obj *yaffs_alloc_raw_obj(struct yaffs_dev *dev)
void yaffs_free_raw_obj(struct yaffs_dev *dev, struct yaffs_obj *obj)
void yaffs_deinit_raw_tnodes_and_objs(struct yaffs_dev *dev)
void yaffs_init_raw_tnodes_and_objs(struct yaffs_dev *dev)
