#define __UBI_UBI_H__
#define UBI_MAX_DEVICES 32
#define UBI_NAME_STR "ubi"
#define ubi_msg(fmt, ...) printk(KERN_NOTICE "UBI: " fmt "\n", ##__VA_ARGS__)
#define ubi_warn(fmt, ...) printk(KERN_WARNING "UBI warning: %s: " fmt "\n", \
__func__, ##__VA_ARGS__)
#define ubi_err(fmt, ...) printk(KERN_ERR "UBI error: %s: " fmt "\n", \
__func__, ##__VA_ARGS__)
#define MIN_RESEVED_PEBS 2
#define UBI_BGT_NAME_PATTERN "ubi_bgt%dd"
#define UBI_LEB_UNMAPPED -1
#define UBI_IO_RETRIES 3
#define UBI_PROT_QUEUE_LEN 10
enum ;
enum ;
struct ubi_wl_entry ;
struct ubi_ltree_entry ;
struct ubi_rename_entry ;
struct ubi_volume_desc;
struct ubi_volume ;
struct ubi_volume_desc ;
struct ubi_wl_entry;
struct ubi_device ;
extern struct kmem_cache *ubi_wl_entry_slab;
extern const struct file_operations ubi_ctrl_cdev_operations;
extern const struct file_operations ubi_cdev_operations;
extern const struct file_operations ubi_vol_cdev_operations;
extern struct class *ubi_class;
extern struct mutex ubi_devices_mutex;
extern struct blocking_notifier_head ubi_notifiers;
int ubi_change_vtbl_record(struct ubi_device *ubi, int idx,
struct ubi_vtbl_record *vtbl_rec);
int ubi_vtbl_rename_volumes(struct ubi_device *ubi,
struct list_head *rename_list);
int ubi_read_volume_table(struct ubi_device *ubi, struct ubi_scan_info *si);
int ubi_create_volume(struct ubi_device *ubi, struct ubi_mkvol_req *req);
int ubi_remove_volume(struct ubi_volume_desc *desc, int no_vtbl);
int ubi_resize_volume(struct ubi_volume_desc *desc, int reserved_pebs);
int ubi_rename_volumes(struct ubi_device *ubi, struct list_head *rename_list);
int ubi_add_volume(struct ubi_device *ubi, struct ubi_volume *vol);
void ubi_free_volume(struct ubi_device *ubi, struct ubi_volume *vol);
int ubi_start_update(struct ubi_device *ubi, struct ubi_volume *vol,
long long bytes);
int ubi_more_update_data(struct ubi_device *ubi, struct ubi_volume *vol,
const void __user *buf, int count);
int ubi_start_leb_change(struct ubi_device *ubi, struct ubi_volume *vol,
const struct ubi_leb_change_req *req);
int ubi_more_leb_change_data(struct ubi_device *ubi, struct ubi_volume *vol,
const void __user *buf, int count);
int ubi_calc_data_len(const struct ubi_device *ubi, const void *buf,
int length);
int ubi_check_volume(struct ubi_device *ubi, int vol_id);
void ubi_calculate_reserved(struct ubi_device *ubi);
int ubi_check_pattern(const void *buf, uint8_t patt, int size);
int ubi_eba_unmap_leb(struct ubi_device *ubi, struct ubi_volume *vol,
int lnum);
int ubi_eba_read_leb(struct ubi_device *ubi, struct ubi_volume *vol, int lnum,
void *buf, int offset, int len, int check);
int ubi_eba_write_leb(struct ubi_device *ubi, struct ubi_volume *vol, int lnum,
const void *buf, int offset, int len, int dtype);
int ubi_eba_write_leb_st(struct ubi_device *ubi, struct ubi_volume *vol,
int lnum, const void *buf, int len, int dtype,
int used_ebs);
int ubi_eba_atomic_leb_change(struct ubi_device *ubi, struct ubi_volume *vol,
int lnum, const void *buf, int len, int dtype);
int ubi_eba_copy_leb(struct ubi_device *ubi, int from, int to,
struct ubi_vid_hdr *vid_hdr);
int ubi_eba_init_scan(struct ubi_device *ubi, struct ubi_scan_info *si);
int ubi_wl_get_peb(struct ubi_device *ubi, int dtype);
int ubi_wl_put_peb(struct ubi_device *ubi, int pnum, int torture);
int ubi_wl_flush(struct ubi_device *ubi);
int ubi_wl_scrub_peb(struct ubi_device *ubi, int pnum);
int ubi_wl_init_scan(struct ubi_device *ubi, struct ubi_scan_info *si);
void ubi_wl_close(struct ubi_device *ubi);
int ubi_thread(void *u);
int ubi_io_read(const struct ubi_device *ubi, void *buf, int pnum, int offset,
int len);
int ubi_io_write(struct ubi_device *ubi, const void *buf, int pnum, int offset,
int len);
int ubi_io_sync_erase(struct ubi_device *ubi, int pnum, int torture);
int ubi_io_is_bad(const struct ubi_device *ubi, int pnum);
int ubi_io_mark_bad(const struct ubi_device *ubi, int pnum);
int ubi_io_read_ec_hdr(struct ubi_device *ubi, int pnum,
struct ubi_ec_hdr *ec_hdr, int verbose);
int ubi_io_write_ec_hdr(struct ubi_device *ubi, int pnum,
struct ubi_ec_hdr *ec_hdr);
int ubi_io_read_vid_hdr(struct ubi_device *ubi, int pnum,
struct ubi_vid_hdr *vid_hdr, int verbose);
int ubi_io_write_vid_hdr(struct ubi_device *ubi, int pnum,
struct ubi_vid_hdr *vid_hdr);
int ubi_attach_mtd_dev(struct mtd_info *mtd, int ubi_num, int vid_hdr_offset);
int ubi_detach_mtd_dev(int ubi_num, int anyway);
struct ubi_device *ubi_get_device(int ubi_num);
void ubi_put_device(struct ubi_device *ubi);
struct ubi_device *ubi_get_by_major(int major);
int ubi_major2num(int major);
int ubi_volume_notify(struct ubi_device *ubi, struct ubi_volume *vol,
int ntype);
int ubi_notify_all(struct ubi_device *ubi, int ntype,
struct notifier_block *nb);
int ubi_enumerate_volumes(struct notifier_block *nb);
void ubi_do_get_device_info(struct ubi_device *ubi, struct ubi_device_info *di);
void ubi_do_get_volume_info(struct ubi_device *ubi, struct ubi_volume *vol,
struct ubi_volume_info *vi);
#define ubi_rb_for_each_entry(rb, pos, root, member)                         \
for (rb = rb_first(root),                                            \
pos = (rb ? container_of(rb, typeof(*pos), member) : NULL);     \
rb;                                                             \
rb = rb_next(rb),                                               \
pos = (rb ? container_of(rb, typeof(*pos), member) : NULL))
static inline struct ubi_vid_hdr *
ubi_zalloc_vid_hdr(const struct ubi_device *ubi, gfp_t gfp_flags)
static inline void ubi_free_vid_hdr(const struct ubi_device *ubi,
struct ubi_vid_hdr *vid_hdr)
static inline int ubi_io_read_data(const struct ubi_device *ubi, void *buf,
int pnum, int offset, int len)
static inline int ubi_io_write_data(struct ubi_device *ubi, const void *buf,
int pnum, int offset, int len)
static inline void ubi_ro_mode(struct ubi_device *ubi)
static inline int vol_id2idx(const struct ubi_device *ubi, int vol_id)
static inline int idx2vol_id(const struct ubi_device *ubi, int idx)
