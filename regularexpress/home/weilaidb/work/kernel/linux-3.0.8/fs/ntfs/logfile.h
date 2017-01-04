#define _LINUX_NTFS_LOGFILE_H
#define MaxLogFileSize		0x100000000ULL
#define DefaultLogPageSize	4096
#define MinLogRecordPages	48
typedef struct  __attribute__ ((__packed__)) RESTART_PAGE_HEADER;
#define LOGFILE_NO_CLIENT	cpu_to_le16(0xffff)
#define LOGFILE_NO_CLIENT_CPU	0xffff
enum  __attribute__ ((__packed__));
typedef le16 RESTART_AREA_FLAGS;
typedef struct  __attribute__ ((__packed__)) RESTART_AREA;
typedef struct  __attribute__ ((__packed__)) LOG_CLIENT_RECORD;
extern bool ntfs_check_logfile(struct inode *log_vi,
RESTART_PAGE_HEADER **rp);
extern bool ntfs_is_logfile_clean(struct inode *log_vi,
const RESTART_PAGE_HEADER *rp);
extern bool ntfs_empty_logfile(struct inode *log_vi);
