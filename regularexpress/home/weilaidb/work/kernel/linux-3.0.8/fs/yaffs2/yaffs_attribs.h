#define __YAFFS_ATTRIBS_H__
void yaffs_load_attribs(struct yaffs_obj *obj, struct yaffs_obj_hdr *oh);
void yaffs_load_attribs_oh(struct yaffs_obj_hdr *oh, struct yaffs_obj *obj);
void yaffs_attribs_init(struct yaffs_obj *obj, u32 gid, u32 uid, u32 rdev);
void yaffs_load_current_time(struct yaffs_obj *obj, int do_a, int do_c);
int yaffs_set_attribs(struct yaffs_obj *obj, struct iattr *attr);
int yaffs_get_attribs(struct yaffs_obj *obj, struct iattr *attr);
