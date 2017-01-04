#define _LINUX_ACCT_H
typedef __u16	comp_t;
typedef __u32	comp2_t;
#define ACCT_COMM	16
struct acct
;
struct acct_v3
;
#define AFORK		0x01
#define ASU		0x02
#define ACOMPAT		0x04
#define ACORE		0x08
#define AXSIG		0x10
#define ACCT_BYTEORDER	0x80
#define ACCT_BYTEORDER	0x00
struct vfsmount;
struct super_block;
struct pacct_struct;
struct pid_namespace;
extern int acct_parm[];
extern void acct_auto_close_mnt(struct vfsmount *m);
extern void acct_auto_close(struct super_block *sb);
extern void acct_collect(long exitcode, int group_dead);
extern void acct_process(void);
extern void acct_exit_ns(struct pid_namespace *);
#define acct_auto_close_mnt(x)	do  while (0)
#define acct_auto_close(x)	do  while (0)
#define acct_collect(x,y)	do  while (0)
#define acct_process()		do  while (0)
#define acct_exit_ns(ns)	do  while (0)
#define ACCT_VERSION	3
#define AHZ		100
typedef struct acct_v3 acct_t;
#define ACCT_VERSION	1
#define ACCT_VERSION	2
#define AHZ		(USER_HZ)
typedef struct acct acct_t;
#define ACCT_VERSION	2
#define AHZ		(HZ)
static inline u32 jiffies_to_AHZ(unsigned long x)
static inline u64 nsec_to_AHZ(u64 x)
