#define CEPH_FS_H
#define CEPH_OSD_PROTOCOL     8
#define CEPH_MDS_PROTOCOL    12
#define CEPH_MON_PROTOCOL     5
#define CEPH_OSDC_PROTOCOL   24
#define CEPH_MDSC_PROTOCOL   32
#define CEPH_MONC_PROTOCOL   15
#define CEPH_INO_ROOT  1
#define CEPH_INO_CEPH  2
#define CEPH_MAX_MON   31
#define CEPH_FEATURE_UID            (1<<0)
#define CEPH_FEATURE_NOSRCADDR      (1<<1)
#define CEPH_FEATURE_MONCLOCKCHECK  (1<<2)
#define CEPH_FEATURE_FLOCK          (1<<3)
#define CEPH_FEATURE_SUBSCRIBE2     (1<<4)
#define CEPH_FEATURE_MONNAMES       (1<<5)
#define CEPH_FEATURE_RECONNECT_SEQ  (1<<6)
#define CEPH_FEATURE_DIRLAYOUTHASH  (1<<7)
struct ceph_file_layout  __attribute__ ((packed));
#define CEPH_MIN_STRIPE_UNIT 65536
int ceph_file_layout_is_valid(const struct ceph_file_layout *layout);
struct ceph_dir_layout  __attribute__ ((packed));
#define CEPH_CRYPTO_NONE 0x0
#define CEPH_CRYPTO_AES  0x1
#define CEPH_AES_IV "cephsageyudagreg"
#define CEPH_AUTH_UNKNOWN	0x0
#define CEPH_AUTH_NONE	 	0x1
#define CEPH_AUTH_CEPHX	 	0x2
#define CEPH_AUTH_UID_DEFAULT ((__u64) -1)
#define CEPH_MSG_SHUTDOWN               1
#define CEPH_MSG_PING                   2
#define CEPH_MSG_MON_MAP                4
#define CEPH_MSG_MON_GET_MAP            5
#define CEPH_MSG_STATFS                 13
#define CEPH_MSG_STATFS_REPLY           14
#define CEPH_MSG_MON_SUBSCRIBE          15
#define CEPH_MSG_MON_SUBSCRIBE_ACK      16
#define CEPH_MSG_AUTH			17
#define CEPH_MSG_AUTH_REPLY		18
#define CEPH_MSG_MDS_MAP                21
#define CEPH_MSG_CLIENT_SESSION         22
#define CEPH_MSG_CLIENT_RECONNECT       23
#define CEPH_MSG_CLIENT_REQUEST         24
#define CEPH_MSG_CLIENT_REQUEST_FORWARD 25
#define CEPH_MSG_CLIENT_REPLY           26
#define CEPH_MSG_CLIENT_CAPS            0x310
#define CEPH_MSG_CLIENT_LEASE           0x311
#define CEPH_MSG_CLIENT_SNAP            0x312
#define CEPH_MSG_CLIENT_CAPRELEASE      0x313
#define CEPH_MSG_POOLOP_REPLY           48
#define CEPH_MSG_POOLOP                 49
#define CEPH_MSG_OSD_MAP                41
#define CEPH_MSG_OSD_OP                 42
#define CEPH_MSG_OSD_OPREPLY            43
#define CEPH_MSG_WATCH_NOTIFY           44
enum ;
enum ;
struct ceph_mon_request_header  __attribute__ ((packed));
struct ceph_mon_statfs  __attribute__ ((packed));
struct ceph_statfs  __attribute__ ((packed));
struct ceph_mon_statfs_reply  __attribute__ ((packed));
const char *ceph_pool_op_name(int op);
struct ceph_mon_poolop  __attribute__ ((packed));
struct ceph_mon_poolop_reply  __attribute__ ((packed));
struct ceph_mon_unmanaged_snap  __attribute__ ((packed));
struct ceph_osd_getmap  __attribute__ ((packed));
struct ceph_mds_getmap  __attribute__ ((packed));
struct ceph_client_mount  __attribute__ ((packed));
#define CEPH_SUBSCRIBE_ONETIME    1
struct ceph_mon_subscribe_item  __attribute__ ((packed));
struct ceph_mon_subscribe_ack  __attribute__ ((packed));
#define CEPH_MDS_STATE_DNE          0
#define CEPH_MDS_STATE_STOPPED     -1
#define CEPH_MDS_STATE_BOOT        -4
#define CEPH_MDS_STATE_STANDBY     -5
#define CEPH_MDS_STATE_CREATING    -6
#define CEPH_MDS_STATE_STARTING    -7
#define CEPH_MDS_STATE_STANDBY_REPLAY -8
#define CEPH_MDS_STATE_REPLAY       8
#define CEPH_MDS_STATE_RESOLVE      9
#define CEPH_MDS_STATE_RECONNECT    10
#define CEPH_MDS_STATE_REJOIN       11
#define CEPH_MDS_STATE_CLIENTREPLAY 12
#define CEPH_MDS_STATE_ACTIVE       13
#define CEPH_MDS_STATE_STOPPING     14
extern const char *ceph_mds_state_name(int s);
#define CEPH_LOCK_DVERSION    1
#define CEPH_LOCK_DN          2
#define CEPH_LOCK_ISNAP       16
#define CEPH_LOCK_IVERSION    32
#define CEPH_LOCK_IFILE       64
#define CEPH_LOCK_IAUTH       128
#define CEPH_LOCK_ILINK       256
#define CEPH_LOCK_IDFT        512
#define CEPH_LOCK_INEST       1024
#define CEPH_LOCK_IXATTR      2048
#define CEPH_LOCK_IFLOCK      4096
#define CEPH_LOCK_INO         8192
enum ;
extern const char *ceph_session_op_name(int op);
struct ceph_mds_session_head  __attribute__ ((packed));
#define CEPH_MDS_OP_WRITE        0x001000
enum ;
extern const char *ceph_mds_op_name(int op);
#define CEPH_SETATTR_MODE   1
#define CEPH_SETATTR_UID    2
#define CEPH_SETATTR_GID    4
#define CEPH_SETATTR_MTIME  8
#define CEPH_SETATTR_ATIME 16
#define CEPH_SETATTR_SIZE  32
#define CEPH_SETATTR_CTIME 64
union ceph_mds_request_args  __attribute__ ((packed));
#define CEPH_MDS_FLAG_REPLAY        1
#define CEPH_MDS_FLAG_WANT_DENTRY   2
struct ceph_mds_request_head  __attribute__ ((packed));
struct ceph_mds_request_release  __attribute__ ((packed));
struct ceph_mds_reply_head  __attribute__ ((packed));
struct ceph_frag_tree_split  __attribute__ ((packed));
struct ceph_frag_tree_head  __attribute__ ((packed));
struct ceph_mds_reply_cap  __attribute__ ((packed));
#define CEPH_CAP_FLAG_AUTH  1
struct ceph_mds_reply_inode  __attribute__ ((packed));
struct ceph_mds_reply_lease  __attribute__ ((packed));
struct ceph_mds_reply_dirfrag  __attribute__ ((packed));
#define CEPH_LOCK_FCNTL    1
#define CEPH_LOCK_FLOCK    2
#define CEPH_LOCK_SHARED   1
#define CEPH_LOCK_EXCL     2
#define CEPH_LOCK_UNLOCK   4
struct ceph_filelock  __attribute__ ((packed));
#define CEPH_FILE_MODE_PIN        0
#define CEPH_FILE_MODE_RD         1
#define CEPH_FILE_MODE_WR         2
#define CEPH_FILE_MODE_RDWR       3
#define CEPH_FILE_MODE_LAZY       4
#define CEPH_FILE_MODE_NUM        8
int ceph_flags_to_mode(int flags);
#define CEPH_CAP_PIN         1
#define CEPH_CAP_GSHARED     1
#define CEPH_CAP_GEXCL       2
#define CEPH_CAP_GCACHE      4
#define CEPH_CAP_GRD         8
#define CEPH_CAP_GWR        16
#define CEPH_CAP_GBUFFER    32
#define CEPH_CAP_GWREXTEND  64
#define CEPH_CAP_GLAZYIO   128
#define CEPH_CAP_SAUTH      2
#define CEPH_CAP_SLINK      4
#define CEPH_CAP_SXATTR     6
#define CEPH_CAP_SFILE      8
#define CEPH_CAP_SFLOCK    20
#define CEPH_CAP_BITS       22
#define CEPH_CAP_AUTH_SHARED  (CEPH_CAP_GSHARED  << CEPH_CAP_SAUTH)
#define CEPH_CAP_AUTH_EXCL     (CEPH_CAP_GEXCL     << CEPH_CAP_SAUTH)
#define CEPH_CAP_LINK_SHARED  (CEPH_CAP_GSHARED  << CEPH_CAP_SLINK)
#define CEPH_CAP_LINK_EXCL     (CEPH_CAP_GEXCL     << CEPH_CAP_SLINK)
#define CEPH_CAP_XATTR_SHARED (CEPH_CAP_GSHARED  << CEPH_CAP_SXATTR)
#define CEPH_CAP_XATTR_EXCL    (CEPH_CAP_GEXCL     << CEPH_CAP_SXATTR)
#define CEPH_CAP_FILE(x)    (x << CEPH_CAP_SFILE)
#define CEPH_CAP_FILE_SHARED   (CEPH_CAP_GSHARED   << CEPH_CAP_SFILE)
#define CEPH_CAP_FILE_EXCL     (CEPH_CAP_GEXCL     << CEPH_CAP_SFILE)
#define CEPH_CAP_FILE_CACHE    (CEPH_CAP_GCACHE    << CEPH_CAP_SFILE)
#define CEPH_CAP_FILE_RD       (CEPH_CAP_GRD       << CEPH_CAP_SFILE)
#define CEPH_CAP_FILE_WR       (CEPH_CAP_GWR       << CEPH_CAP_SFILE)
#define CEPH_CAP_FILE_BUFFER   (CEPH_CAP_GBUFFER   << CEPH_CAP_SFILE)
#define CEPH_CAP_FILE_WREXTEND (CEPH_CAP_GWREXTEND << CEPH_CAP_SFILE)
#define CEPH_CAP_FILE_LAZYIO   (CEPH_CAP_GLAZYIO   << CEPH_CAP_SFILE)
#define CEPH_CAP_FLOCK_SHARED  (CEPH_CAP_GSHARED   << CEPH_CAP_SFLOCK)
#define CEPH_CAP_FLOCK_EXCL    (CEPH_CAP_GEXCL     << CEPH_CAP_SFLOCK)
#define CEPH_STAT_CAP_INODE    CEPH_CAP_PIN
#define CEPH_STAT_CAP_TYPE     CEPH_CAP_PIN
#define CEPH_STAT_CAP_SYMLINK  CEPH_CAP_PIN
#define CEPH_STAT_CAP_UID      CEPH_CAP_AUTH_SHARED
#define CEPH_STAT_CAP_GID      CEPH_CAP_AUTH_SHARED
#define CEPH_STAT_CAP_MODE     CEPH_CAP_AUTH_SHARED
#define CEPH_STAT_CAP_NLINK    CEPH_CAP_LINK_SHARED
#define CEPH_STAT_CAP_LAYOUT   CEPH_CAP_FILE_SHARED
#define CEPH_STAT_CAP_MTIME    CEPH_CAP_FILE_SHARED
#define CEPH_STAT_CAP_SIZE     CEPH_CAP_FILE_SHARED
#define CEPH_STAT_CAP_ATIME    CEPH_CAP_FILE_SHARED
#define CEPH_STAT_CAP_XATTR    CEPH_CAP_XATTR_SHARED
#define CEPH_STAT_CAP_INODE_ALL (CEPH_CAP_PIN |			\
CEPH_CAP_AUTH_SHARED |	\
CEPH_CAP_LINK_SHARED |	\
CEPH_CAP_FILE_SHARED |	\
CEPH_CAP_XATTR_SHARED)
#define CEPH_CAP_ANY_SHARED (CEPH_CAP_AUTH_SHARED |			\
CEPH_CAP_LINK_SHARED |			\
CEPH_CAP_XATTR_SHARED |			\
CEPH_CAP_FILE_SHARED)
#define CEPH_CAP_ANY_RD   (CEPH_CAP_ANY_SHARED | CEPH_CAP_FILE_RD |	\
CEPH_CAP_FILE_CACHE)
#define CEPH_CAP_ANY_EXCL (CEPH_CAP_AUTH_EXCL |		\
CEPH_CAP_LINK_EXCL |		\
CEPH_CAP_XATTR_EXCL |	\
CEPH_CAP_FILE_EXCL)
#define CEPH_CAP_ANY_FILE_WR (CEPH_CAP_FILE_WR | CEPH_CAP_FILE_BUFFER |	\
CEPH_CAP_FILE_EXCL)
#define CEPH_CAP_ANY_WR   (CEPH_CAP_ANY_EXCL | CEPH_CAP_ANY_FILE_WR)
#define CEPH_CAP_ANY      (CEPH_CAP_ANY_RD | CEPH_CAP_ANY_EXCL | \
CEPH_CAP_ANY_FILE_WR | CEPH_CAP_FILE_LAZYIO | \
CEPH_CAP_PIN)
#define CEPH_CAP_LOCKS (CEPH_LOCK_IFILE | CEPH_LOCK_IAUTH | CEPH_LOCK_ILINK | \
CEPH_LOCK_IXATTR)
int ceph_caps_for_mode(int mode);
enum ;
extern const char *ceph_cap_op_name(int op);
struct ceph_mds_caps  __attribute__ ((packed));
struct ceph_mds_cap_release  __attribute__ ((packed));
struct ceph_mds_cap_item  __attribute__ ((packed));
#define CEPH_MDS_LEASE_REVOKE           1
#define CEPH_MDS_LEASE_RELEASE          2
#define CEPH_MDS_LEASE_RENEW            3
#define CEPH_MDS_LEASE_REVOKE_ACK       4
extern const char *ceph_lease_op_name(int o);
struct ceph_mds_lease  __attribute__ ((packed));
struct ceph_mds_cap_reconnect  __attribute__ ((packed));
struct ceph_mds_cap_reconnect_v1  __attribute__ ((packed));
struct ceph_mds_snaprealm_reconnect  __attribute__ ((packed));
enum ;
extern const char *ceph_snap_op_name(int o);
struct ceph_mds_snap_head  __attribute__ ((packed));
struct ceph_mds_snap_realm  __attribute__ ((packed));
