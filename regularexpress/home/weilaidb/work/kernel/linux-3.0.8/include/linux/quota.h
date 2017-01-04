#define _LINUX_QUOTA_
#define __DQUOT_VERSION__	"dquot_6.5.2"
#define MAXQUOTAS 2
#define USRQUOTA  0
#define GRPQUOTA  1
#define INITQFNAMES ;
#define SUBCMDMASK  0x00ff
#define SUBCMDSHIFT 8
#define QCMD(cmd, type)  (((cmd) << SUBCMDSHIFT) | ((type) & SUBCMDMASK))
#define Q_SYNC     0x800001
#define Q_QUOTAON  0x800002
#define Q_QUOTAOFF 0x800003
#define Q_GETFMT   0x800004
#define Q_GETINFO  0x800005
#define Q_SETINFO  0x800006
#define Q_GETQUOTA 0x800007
#define Q_SETQUOTA 0x800008
#define	QFMT_VFS_OLD 1
#define	QFMT_VFS_V0 2
#define QFMT_OCFS2 3
#define	QFMT_VFS_V1 4
#define QIF_DQBLKSIZE_BITS 10
#define QIF_DQBLKSIZE (1 << QIF_DQBLKSIZE_BITS)
enum ;
#define QIF_BLIMITS	(1 << QIF_BLIMITS_B)
#define QIF_SPACE	(1 << QIF_SPACE_B)
#define QIF_ILIMITS	(1 << QIF_ILIMITS_B)
#define QIF_INODES	(1 << QIF_INODES_B)
#define QIF_BTIME	(1 << QIF_BTIME_B)
#define QIF_ITIME	(1 << QIF_ITIME_B)
#define QIF_LIMITS	(QIF_BLIMITS | QIF_ILIMITS)
#define QIF_USAGE	(QIF_SPACE | QIF_INODES)
#define QIF_TIMES	(QIF_BTIME | QIF_ITIME)
#define QIF_ALL		(QIF_LIMITS | QIF_USAGE | QIF_TIMES)
struct if_dqblk ;
#define IIF_BGRACE	1
#define IIF_IGRACE	2
#define IIF_FLAGS	4
#define IIF_ALL		(IIF_BGRACE | IIF_IGRACE | IIF_FLAGS)
struct if_dqinfo ;
#define QUOTA_NL_NOWARN 0
#define QUOTA_NL_IHARDWARN 1
#define QUOTA_NL_ISOFTLONGWARN 2
#define QUOTA_NL_ISOFTWARN 3
#define QUOTA_NL_BHARDWARN 4
#define QUOTA_NL_BSOFTLONGWARN 5
#define QUOTA_NL_BSOFTWARN 6
#define QUOTA_NL_IHARDBELOW 7
#define QUOTA_NL_ISOFTBELOW 8
#define QUOTA_NL_BHARDBELOW 9
#define QUOTA_NL_BSOFTBELOW 10
enum ;
#define QUOTA_NL_C_MAX (__QUOTA_NL_C_MAX - 1)
enum ;
#define QUOTA_NL_A_MAX (__QUOTA_NL_A_MAX - 1)
typedef __kernel_uid32_t qid_t;
typedef long long qsize_t;
extern spinlock_t dq_data_lock;
#define DQUOT_INIT_ALLOC max(V1_INIT_ALLOC, V2_INIT_ALLOC)
#define DQUOT_INIT_REWRITE max(V1_INIT_REWRITE, V2_INIT_REWRITE)
#define DQUOT_DEL_ALLOC max(V1_DEL_ALLOC, V2_DEL_ALLOC)
#define DQUOT_DEL_REWRITE max(V1_DEL_REWRITE, V2_DEL_REWRITE)
struct mem_dqblk ;
struct quota_format_type;
struct mem_dqinfo ;
struct super_block;
#define DQF_MASK 0xffff
#define DQF_INFO_DIRTY_B 16
#define DQF_INFO_DIRTY (1 << DQF_INFO_DIRTY_B)
extern void mark_info_dirty(struct super_block *sb, int type);
static inline int info_dirty(struct mem_dqinfo *info)
enum ;
struct dqstats ;
extern struct dqstats *dqstats_pcpu;
extern struct dqstats dqstats;
static inline void dqstats_inc(unsigned int type)
static inline void dqstats_dec(unsigned int type)
#define DQ_MOD_B	0
#define DQ_BLKS_B	1
#define DQ_INODES_B	2
#define DQ_FAKE_B	3
#define DQ_READ_B	4
#define DQ_ACTIVE_B	5
#define DQ_LASTSET_B	6
struct dquot ;
struct quota_format_ops ;
struct dquot_operations ;
struct path;
struct quotactl_ops ;
struct quota_format_type ;
enum ;
#define DQUOT_USAGE_ENABLED	(1 << _DQUOT_USAGE_ENABLED)
#define DQUOT_LIMITS_ENABLED	(1 << _DQUOT_LIMITS_ENABLED)
#define DQUOT_SUSPENDED		(1 << _DQUOT_SUSPENDED)
#define DQUOT_STATE_FLAGS	(DQUOT_USAGE_ENABLED | DQUOT_LIMITS_ENABLED | \
DQUOT_SUSPENDED)
#define DQUOT_STATE_LAST	(_DQUOT_STATE_FLAGS * MAXQUOTAS)
#define DQUOT_QUOTA_SYS_FILE	(1 << DQUOT_STATE_LAST)
#define DQUOT_NEGATIVE_USAGE	(1 << (DQUOT_STATE_LAST + 1))
static inline unsigned int dquot_state_flag(unsigned int flags, int type)
static inline unsigned int dquot_generic_flag(unsigned int flags, int type)
extern void quota_send_warning(short type, unsigned int id, dev_t dev,
const char warntype);
static inline void quota_send_warning(short type, unsigned int id, dev_t dev,
const char warntype)
struct quota_info ;
int register_quota_format(struct quota_format_type *fmt);
void unregister_quota_format(struct quota_format_type *fmt);
struct quota_module_name ;
#define INIT_QUOTA_MODULE_NAMES
# include <sys/cdefs.h>
__BEGIN_DECLS
long quotactl __P ((unsigned int, const char *, int, caddr_t));
__END_DECLS
