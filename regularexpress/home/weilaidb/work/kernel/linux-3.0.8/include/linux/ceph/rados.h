#define CEPH_RADOS_H
#define CEPH_OSDMAP_INC_VERSION     5
#define CEPH_OSDMAP_INC_VERSION_EXT 6
#define CEPH_OSDMAP_VERSION         5
#define CEPH_OSDMAP_VERSION_EXT     6
struct ceph_fsid ;
static inline int ceph_fsid_compare(const struct ceph_fsid *a,
const struct ceph_fsid *b)
typedef __le64 ceph_snapid_t;
#define CEPH_SNAPDIR ((__u64)(-1))
#define CEPH_NOSNAP  ((__u64)(-2))
#define CEPH_MAXSNAP ((__u64)(-3))
struct ceph_timespec  __attribute__ ((packed));
#define CEPH_OBJECT_LAYOUT_HASH     1
#define CEPH_OBJECT_LAYOUT_LINEAR   2
#define CEPH_OBJECT_LAYOUT_HASHINO  3
#define CEPH_PG_LAYOUT_CRUSH  0
#define CEPH_PG_LAYOUT_HASH   1
#define CEPH_PG_LAYOUT_LINEAR 2
#define CEPH_PG_LAYOUT_HYBRID 3
#define CEPH_PG_MAX_SIZE      16
struct ceph_pg  __attribute__ ((packed));
#define CEPH_PG_TYPE_REP     1
#define CEPH_PG_TYPE_RAID4   2
#define CEPH_PG_POOL_VERSION 2
struct ceph_pg_pool  __attribute__ ((packed));
static inline int ceph_stable_mod(int x, int b, int bmask)
struct ceph_object_layout  __attribute__ ((packed));
struct ceph_eversion  __attribute__ ((packed));
#define CEPH_OSD_EXISTS 1
#define CEPH_OSD_UP     2
#define CEPH_OSD_IN  0x10000
#define CEPH_OSD_OUT 0
#define CEPH_OSDMAP_NEARFULL (1<<0)
#define CEPH_OSDMAP_FULL     (1<<1)
#define CEPH_OSDMAP_PAUSERD  (1<<2)
#define CEPH_OSDMAP_PAUSEWR  (1<<3)
#define CEPH_OSDMAP_PAUSEREC (1<<4)
#define CEPH_OSD_OP_MODE       0xf000
#define CEPH_OSD_OP_MODE_RD    0x1000
#define CEPH_OSD_OP_MODE_WR    0x2000
#define CEPH_OSD_OP_MODE_RMW   0x3000
#define CEPH_OSD_OP_MODE_SUB   0x4000
#define CEPH_OSD_OP_TYPE       0x0f00
#define CEPH_OSD_OP_TYPE_LOCK  0x0100
#define CEPH_OSD_OP_TYPE_DATA  0x0200
#define CEPH_OSD_OP_TYPE_ATTR  0x0300
#define CEPH_OSD_OP_TYPE_EXEC  0x0400
#define CEPH_OSD_OP_TYPE_PG    0x0500
enum ;
static inline int ceph_osd_op_type_lock(int op)
static inline int ceph_osd_op_type_data(int op)
static inline int ceph_osd_op_type_attr(int op)
static inline int ceph_osd_op_type_exec(int op)
static inline int ceph_osd_op_type_pg(int op)
static inline int ceph_osd_op_mode_subop(int op)
static inline int ceph_osd_op_mode_read(int op)
static inline int ceph_osd_op_mode_modify(int op)
#define CEPH_OSD_TMAP_HDR 'h'
#define CEPH_OSD_TMAP_SET 's'
#define CEPH_OSD_TMAP_RM  'r'
extern const char *ceph_osd_op_name(int op);
enum ;
enum ;
#define EOLDSNAPC    ERESTART
#define EBLACKLISTED ESHUTDOWN
enum ;
enum ;
#define RADOS_NOTIFY_VER	1
struct ceph_osd_op  __attribute__ ((packed));
struct ceph_osd_request_head  __attribute__ ((packed));
struct ceph_osd_reply_head  __attribute__ ((packed));
