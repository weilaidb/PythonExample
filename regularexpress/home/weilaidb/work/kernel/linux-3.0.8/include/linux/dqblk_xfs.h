#define _LINUX_DQBLK_XFS_H
#define XQM_CMD(x)	(('X'<<8)+(x))
#define XQM_COMMAND(x)	(((x) & (0xff<<8)) == ('X'<<8))
#define XQM_USRQUOTA	0
#define XQM_GRPQUOTA	1
#define XQM_PRJQUOTA	2
#define XQM_MAXQUOTAS	3
#define Q_XQUOTAON	XQM_CMD(1)
#define Q_XQUOTAOFF	XQM_CMD(2)
#define Q_XGETQUOTA	XQM_CMD(3)
#define Q_XSETQLIM	XQM_CMD(4)
#define Q_XGETQSTAT	XQM_CMD(5)
#define Q_XQUOTARM	XQM_CMD(6)
#define Q_XQUOTASYNC	XQM_CMD(7)
#define FS_DQUOT_VERSION	1
typedef struct fs_disk_quota  fs_disk_quota_t;
#define FS_DQ_ISOFT	(1<<0)
#define FS_DQ_IHARD	(1<<1)
#define FS_DQ_BSOFT	(1<<2)
#define FS_DQ_BHARD 	(1<<3)
#define FS_DQ_RTBSOFT	(1<<4)
#define FS_DQ_RTBHARD	(1<<5)
#define FS_DQ_LIMIT_MASK	(FS_DQ_ISOFT | FS_DQ_IHARD | FS_DQ_BSOFT | \
FS_DQ_BHARD | FS_DQ_RTBSOFT | FS_DQ_RTBHARD)
#define FS_DQ_BTIMER	(1<<6)
#define FS_DQ_ITIMER	(1<<7)
#define FS_DQ_RTBTIMER 	(1<<8)
#define FS_DQ_TIMER_MASK	(FS_DQ_BTIMER | FS_DQ_ITIMER | FS_DQ_RTBTIMER)
#define FS_DQ_BWARNS	(1<<9)
#define FS_DQ_IWARNS	(1<<10)
#define FS_DQ_RTBWARNS	(1<<11)
#define FS_DQ_WARNS_MASK	(FS_DQ_BWARNS | FS_DQ_IWARNS | FS_DQ_RTBWARNS)
#define FS_DQ_BCOUNT		(1<<12)
#define FS_DQ_ICOUNT		(1<<13)
#define FS_DQ_RTBCOUNT		(1<<14)
#define FS_DQ_ACCT_MASK		(FS_DQ_BCOUNT | FS_DQ_ICOUNT | FS_DQ_RTBCOUNT)
#define FS_QUOTA_UDQ_ACCT	(1<<0)
#define FS_QUOTA_UDQ_ENFD	(1<<1)
#define FS_QUOTA_GDQ_ACCT	(1<<2)
#define FS_QUOTA_GDQ_ENFD	(1<<3)
#define FS_QUOTA_PDQ_ACCT	(1<<4)
#define FS_QUOTA_PDQ_ENFD	(1<<5)
#define FS_USER_QUOTA		(1<<0)
#define FS_PROJ_QUOTA		(1<<1)
#define FS_GROUP_QUOTA		(1<<2)
#define FS_QSTAT_VERSION	1
typedef struct fs_qfilestat  fs_qfilestat_t;
typedef struct fs_quota_stat  fs_quota_stat_t;
