#define NET_9P_H
enum p9_debug_flags ;
extern unsigned int p9_debug_level;
#define P9_DPRINTK(level, format, arg...) \
do  while (0)
#define P9_DPRINTK(level, format, arg...)  do  while (0)
#define P9_EPRINTK(level, format, arg...) \
do  while (0)
enum p9_msg_t ;
enum p9_open_mode_t ;
enum p9_perm_t ;
#define P9_DOTL_RDONLY        00000000
#define P9_DOTL_WRONLY        00000001
#define P9_DOTL_RDWR          00000002
#define P9_DOTL_NOACCESS      00000003
#define P9_DOTL_CREATE        00000100
#define P9_DOTL_EXCL          00000200
#define P9_DOTL_NOCTTY        00000400
#define P9_DOTL_TRUNC         00001000
#define P9_DOTL_APPEND        00002000
#define P9_DOTL_NONBLOCK      00004000
#define P9_DOTL_DSYNC         00010000
#define P9_DOTL_FASYNC        00020000
#define P9_DOTL_DIRECT        00040000
#define P9_DOTL_LARGEFILE     00100000
#define P9_DOTL_DIRECTORY     00200000
#define P9_DOTL_NOFOLLOW      00400000
#define P9_DOTL_NOATIME       01000000
#define P9_DOTL_CLOEXEC       02000000
#define P9_DOTL_SYNC          04000000
#define P9_DOTL_AT_REMOVEDIR		0x200
enum p9_qid_t ;
#define P9_NOTAG	(u16)(~0)
#define P9_NOFID	(u32)(~0)
#define P9_MAXWELEM	16
#define P9_IOHDRSZ	24
#define P9_READDIRHDRSZ	24
#define P9_LOCK_TYPE_RDLCK 0
#define P9_LOCK_TYPE_WRLCK 1
#define P9_LOCK_TYPE_UNLCK 2
struct p9_str ;
struct p9_qid ;
struct p9_wstat ;
struct p9_stat_dotl ;
#define P9_STATS_MODE		0x00000001ULL
#define P9_STATS_NLINK		0x00000002ULL
#define P9_STATS_UID		0x00000004ULL
#define P9_STATS_GID		0x00000008ULL
#define P9_STATS_RDEV		0x00000010ULL
#define P9_STATS_ATIME		0x00000020ULL
#define P9_STATS_MTIME		0x00000040ULL
#define P9_STATS_CTIME		0x00000080ULL
#define P9_STATS_INO		0x00000100ULL
#define P9_STATS_SIZE		0x00000200ULL
#define P9_STATS_BLOCKS		0x00000400ULL
#define P9_STATS_BTIME		0x00000800ULL
#define P9_STATS_GEN		0x00001000ULL
#define P9_STATS_DATA_VERSION	0x00002000ULL
#define P9_STATS_BASIC		0x000007ffULL
#define P9_STATS_ALL		0x00003fffULL
struct p9_iattr_dotl ;
#define P9_LOCK_SUCCESS 0
#define P9_LOCK_BLOCKED 1
#define P9_LOCK_ERROR 2
#define P9_LOCK_GRACE 3
#define P9_LOCK_FLAGS_BLOCK 1
#define P9_LOCK_FLAGS_RECLAIM 2
struct p9_flock ;
struct p9_getlock ;
struct p9_tstatfs ;
struct p9_rstatfs ;
struct p9_trename ;
struct p9_rrename ;
struct p9_tversion ;
struct p9_rversion ;
struct p9_tauth ;
struct p9_rauth ;
struct p9_rerror ;
struct p9_tflush ;
struct p9_rflush ;
struct p9_tattach ;
struct p9_rattach ;
struct p9_twalk ;
struct p9_rwalk ;
struct p9_topen ;
struct p9_ropen ;
struct p9_tcreate ;
struct p9_rcreate ;
struct p9_tread ;
struct p9_rread ;
struct p9_twrite ;
struct p9_rwrite ;
struct p9_treaddir ;
struct p9_rreaddir ;
struct p9_tclunk ;
struct p9_rclunk ;
struct p9_tremove ;
struct p9_rremove ;
struct p9_tstat ;
struct p9_rstat ;
struct p9_twstat ;
struct p9_rwstat ;
struct p9_fcall ;
struct p9_idpool;
int p9_errstr2errno(char *errstr, int len);
struct p9_idpool *p9_idpool_create(void);
void p9_idpool_destroy(struct p9_idpool *);
int p9_idpool_get(struct p9_idpool *p);
void p9_idpool_put(int id, struct p9_idpool *p);
int p9_idpool_check(int id, struct p9_idpool *p);
int p9_error_init(void);
int p9_trans_fd_init(void);
void p9_trans_fd_exit(void);
