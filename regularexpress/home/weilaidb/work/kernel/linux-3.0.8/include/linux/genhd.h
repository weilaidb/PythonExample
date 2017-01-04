#define _LINUX_GENHD_H
#define kobj_to_dev(k)		container_of((k), struct device, kobj)
#define dev_to_disk(device)	container_of((device), struct gendisk, part0.__dev)
#define dev_to_part(device)	container_of((device), struct hd_struct, __dev)
#define disk_to_dev(disk)	(&(disk)->part0.__dev)
#define part_to_dev(part)	(&((part)->__dev))
extern struct device_type part_type;
extern struct kobject *block_depr;
extern struct class block_class;
enum ;
#define DISK_MAX_PARTS			256
#define DISK_NAME_LEN			32
struct partition  __attribute__((packed));
struct disk_stats ;
#define PARTITION_META_INFO_VOLNAMELTH	64
#define PARTITION_META_INFO_UUIDLTH	16
struct partition_meta_info ;
struct hd_struct ;
#define GENHD_FL_REMOVABLE			1
#define GENHD_FL_MEDIA_CHANGE_NOTIFY		4
#define GENHD_FL_CD				8
#define GENHD_FL_UP				16
#define GENHD_FL_SUPPRESS_PARTITION_INFO	32
#define GENHD_FL_EXT_DEVT			64
#define GENHD_FL_NATIVE_CAPACITY		128
#define GENHD_FL_BLOCK_EVENTS_ON_EXCL_WRITE	256
enum ;
#define BLK_SCSI_MAX_CMDS	(256)
#define BLK_SCSI_CMD_PER_LONG	(BLK_SCSI_MAX_CMDS / (sizeof(long) * 8))
struct blk_scsi_cmd_filter ;
struct disk_part_tbl ;
struct disk_events;
struct gendisk ;
static inline struct gendisk *part_to_disk(struct hd_struct *part)
static inline void part_pack_uuid(const u8 *uuid_str, u8 *to)
static inline char *part_unpack_uuid(const u8 *uuid, char *out)
static inline int disk_max_parts(struct gendisk *disk)
static inline bool disk_partitionable(struct gendisk *disk)
static inline dev_t disk_devt(struct gendisk *disk)
static inline dev_t part_devt(struct hd_struct *part)
extern struct hd_struct *disk_get_part(struct gendisk *disk, int partno);
static inline void disk_put_part(struct hd_struct *part)
#define DISK_PITER_REVERSE	(1 << 0)
#define DISK_PITER_INCL_EMPTY	(1 << 1)
#define DISK_PITER_INCL_PART0	(1 << 2)
#define DISK_PITER_INCL_EMPTY_PART0 (1 << 3)
struct disk_part_iter ;
extern void disk_part_iter_init(struct disk_part_iter *piter,
struct gendisk *disk, unsigned int flags);
extern struct hd_struct *disk_part_iter_next(struct disk_part_iter *piter);
extern void disk_part_iter_exit(struct disk_part_iter *piter);
extern struct hd_struct *disk_map_sector_rcu(struct gendisk *disk,
sector_t sector);
#define part_stat_lock()	()
#define part_stat_unlock()	do  while (0)
#define __part_stat_add(cpu, part, field, addnd)			\
(per_cpu_ptr((part)->dkstats, (cpu))->field += (addnd))
#define part_stat_read(part, field)					\
()
static inline void part_stat_set_all(struct hd_struct *part, int value)
static inline int init_part_stats(struct hd_struct *part)
static inline void free_part_stats(struct hd_struct *part)
#define part_stat_lock()	()
#define part_stat_unlock()	rcu_read_unlock()
#define __part_stat_add(cpu, part, field, addnd)				\
((part)->dkstats.field += addnd)
#define part_stat_read(part, field)	((part)->dkstats.field)
static inline void part_stat_set_all(struct hd_struct *part, int value)
static inline int init_part_stats(struct hd_struct *part)
static inline void free_part_stats(struct hd_struct *part)
#define part_stat_add(cpu, part, field, addnd)	do  while (0)
#define part_stat_dec(cpu, gendiskp, field)				\
part_stat_add(cpu, gendiskp, field, -1)
#define part_stat_inc(cpu, gendiskp, field)				\
part_stat_add(cpu, gendiskp, field, 1)
#define part_stat_sub(cpu, gendiskp, field, subnd)			\
part_stat_add(cpu, gendiskp, field, -subnd)
static inline void part_inc_in_flight(struct hd_struct *part, int rw)
static inline void part_dec_in_flight(struct hd_struct *part, int rw)
static inline int part_in_flight(struct hd_struct *part)
static inline struct partition_meta_info *alloc_part_info(struct gendisk *disk)
static inline void free_part_info(struct hd_struct *part)
extern void part_round_stats(int cpu, struct hd_struct *part);
extern void add_disk(struct gendisk *disk);
extern void del_gendisk(struct gendisk *gp);
extern struct gendisk *get_gendisk(dev_t dev, int *partno);
extern struct block_device *bdget_disk(struct gendisk *disk, int partno);
extern void set_device_ro(struct block_device *bdev, int flag);
extern void set_disk_ro(struct gendisk *disk, int flag);
static inline int get_disk_ro(struct gendisk *disk)
extern void disk_block_events(struct gendisk *disk);
extern void disk_unblock_events(struct gendisk *disk);
extern void disk_check_events(struct gendisk *disk);
extern unsigned int disk_clear_events(struct gendisk *disk, unsigned int mask);
extern void add_disk_randomness(struct gendisk *disk);
extern void rand_initialize_disk(struct gendisk *disk);
static inline sector_t get_start_sect(struct block_device *bdev)
static inline sector_t get_capacity(struct gendisk *disk)
static inline void set_capacity(struct gendisk *disk, sector_t size)
#define SOLARIS_X86_NUMSLICE	16
#define SOLARIS_X86_VTOC_SANE	(0x600DDEEEUL)
struct solaris_x86_slice ;
struct solaris_x86_vtoc ;
#define BSD_DISKMAGIC	(0x82564557UL)
#define BSD_MAXPARTITIONS	16
#define OPENBSD_MAXPARTITIONS	16
#define BSD_FS_UNUSED		0
struct bsd_disklabel ;
#define UNIXWARE_DISKMAGIC     (0xCA5E600DUL)
#define UNIXWARE_DISKMAGIC2    (0x600DDEEEUL)
#define UNIXWARE_NUMSLICE      16
#define UNIXWARE_FS_UNUSED     0
struct unixware_slice ;
struct unixware_disklabel ;
#   define MINIX_NR_SUBPARTITIONS  4
#define ADDPART_FLAG_NONE	0
#define ADDPART_FLAG_RAID	1
#define ADDPART_FLAG_WHOLEDISK	2
extern int blk_alloc_devt(struct hd_struct *part, dev_t *devt);
extern void blk_free_devt(dev_t devt);
extern dev_t blk_lookup_devt(const char *name, int partno);
extern char *disk_name (struct gendisk *hd, int partno, char *buf);
extern int disk_expand_part_tbl(struct gendisk *disk, int target);
extern int rescan_partitions(struct gendisk *disk, struct block_device *bdev);
extern struct hd_struct * __must_check add_partition(struct gendisk *disk,
int partno, sector_t start,
sector_t len, int flags,
struct partition_meta_info
*info);
extern void __delete_partition(struct hd_struct *);
extern void delete_partition(struct gendisk *, int);
extern void printk_all_partitions(void);
extern struct gendisk *alloc_disk_node(int minors, int node_id);
extern struct gendisk *alloc_disk(int minors);
extern struct kobject *get_disk(struct gendisk *disk);
extern void put_disk(struct gendisk *disk);
extern void blk_register_region(dev_t devt, unsigned long range,
struct module *module,
struct kobject *(*probe)(dev_t, int *, void *),
int (*lock)(dev_t, void *),
void *data);
extern void blk_unregister_region(dev_t devt, unsigned long range);
extern ssize_t part_size_show(struct device *dev,
struct device_attribute *attr, char *buf);
extern ssize_t part_stat_show(struct device *dev,
struct device_attribute *attr, char *buf);
extern ssize_t part_inflight_show(struct device *dev,
struct device_attribute *attr, char *buf);
extern ssize_t part_fail_show(struct device *dev,
struct device_attribute *attr, char *buf);
extern ssize_t part_fail_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count);
static inline void hd_ref_init(struct hd_struct *part)
static inline void hd_struct_get(struct hd_struct *part)
static inline int hd_struct_try_get(struct hd_struct *part)
static inline void hd_struct_put(struct hd_struct *part)
static inline void printk_all_partitions(void)
static inline dev_t blk_lookup_devt(const char *name, int partno)
