#if (LINUX_VERSION_CODE < KERNEL_VERSION(3, 14, 0))
#define IATTR_UID ia_uid
#define IATTR_GID ia_gid
#define IATTR_UID ia_uid.val
#define IATTR_GID ia_gid.val
void yaffs_load_attribs(struct yaffs_obj *obj, struct yaffs_obj_hdr *oh)
void yaffs_load_attribs_oh(struct yaffs_obj_hdr *oh, struct yaffs_obj *obj)
void yaffs_load_current_time(struct yaffs_obj *obj, int do_a, int do_c)
void yaffs_attribs_init(struct yaffs_obj *obj, u32 gid, u32 uid, u32 rdev)
static loff_t yaffs_get_file_size(struct yaffs_obj *obj)
int yaffs_set_attribs(struct yaffs_obj *obj, struct iattr *attr)
int yaffs_get_attribs(struct yaffs_obj *obj, struct iattr *attr)
