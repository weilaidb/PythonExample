#define O2CLUSTER_MASKLOG_H
#define ML_TCP		0x0000000000000001ULL
#define ML_MSG		0x0000000000000002ULL
#define ML_SOCKET	0x0000000000000004ULL
#define ML_HEARTBEAT	0x0000000000000008ULL
#define ML_HB_BIO	0x0000000000000010ULL
#define ML_DLMFS	0x0000000000000020ULL
#define ML_DLM		0x0000000000000040ULL
#define ML_DLM_DOMAIN	0x0000000000000080ULL
#define ML_DLM_THREAD	0x0000000000000100ULL
#define ML_DLM_MASTER	0x0000000000000200ULL
#define ML_DLM_RECOVERY	0x0000000000000400ULL
#define ML_DLM_GLUE	0x0000000000000800ULL
#define ML_VOTE		0x0000000000001000ULL
#define ML_CONN		0x0000000000002000ULL
#define ML_QUORUM	0x0000000000004000ULL
#define ML_BASTS	0x0000000000008000ULL
#define ML_CLUSTER	0x0000000000010000ULL
#define ML_ERROR	0x1000000000000000ULL
#define ML_NOTICE	0x2000000000000000ULL
#define ML_KTHREAD	0x4000000000000000ULL
#define MLOG_INITIAL_AND_MASK (ML_ERROR|ML_NOTICE)
#define MLOG_MASK_PREFIX 0
#if defined(CONFIG_OCFS2_DEBUG_MASKLOG)
#define ML_ALLOWED_BITS ~0
#define ML_ALLOWED_BITS (ML_ERROR|ML_NOTICE)
#define MLOG_MAX_BITS 64
struct mlog_bits ;
extern struct mlog_bits mlog_and_bits, mlog_not_bits;
#if BITS_PER_LONG == 32
#define __mlog_test_u64(mask, bits)			\
( (u32)(mask & 0xffffffff) & bits.words[0] || 	\
((u64)(mask) >> 32) & bits.words[1] )
#define __mlog_set_u64(mask, bits) do  while (0)
#define __mlog_clear_u64(mask, bits) do  while (0)
#define MLOG_BITS_RHS(mask)
#define __mlog_test_u64(mask, bits)	((mask) & bits.words[0])
#define __mlog_set_u64(mask, bits) do  while (0)
#define __mlog_clear_u64(mask, bits) do  while (0)
#define MLOG_BITS_RHS(mask)
#define __mlog_cpu_guess ()
#define __mlog_printk(level, fmt, args...)				\
printk(level "(%s,%u,%lu):%s:%d " fmt, current->comm,		\
task_pid_nr(current), __mlog_cpu_guess,			\
__PRETTY_FUNCTION__, __LINE__ , ##args)
#define mlog(mask, fmt, args...) do  while (0)
#define mlog_errno(st) do  while (0)
#define mlog_bug_on_msg(cond, fmt, args...) do  while (0)
int mlog_sys_init(struct kset *o2cb_subsys);
void mlog_sys_shutdown(void);
