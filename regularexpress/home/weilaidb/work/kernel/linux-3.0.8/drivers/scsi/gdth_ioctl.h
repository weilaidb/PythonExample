#define _GDTH_IOCTL_H
#define GDTIOCTL_MASK       ('J'<<8)
#define GDTIOCTL_GENERAL    (GDTIOCTL_MASK | 0)
#define GDTIOCTL_DRVERS     (GDTIOCTL_MASK | 1)
#define GDTIOCTL_CTRTYPE    (GDTIOCTL_MASK | 2)
#define GDTIOCTL_OSVERS     (GDTIOCTL_MASK | 3)
#define GDTIOCTL_HDRLIST    (GDTIOCTL_MASK | 4)
#define GDTIOCTL_CTRCNT     (GDTIOCTL_MASK | 5)
#define GDTIOCTL_LOCKDRV    (GDTIOCTL_MASK | 6)
#define GDTIOCTL_LOCKCHN    (GDTIOCTL_MASK | 7)
#define GDTIOCTL_EVENT      (GDTIOCTL_MASK | 8)
#define GDTIOCTL_SCSI       (GDTIOCTL_MASK | 9)
#define GDTIOCTL_RESET_BUS  (GDTIOCTL_MASK |10)
#define GDTIOCTL_RESCAN     (GDTIOCTL_MASK |11)
#define GDTIOCTL_RESET_DRV  (GDTIOCTL_MASK |12)
#define GDTIOCTL_MAGIC  0xaffe0004
#define EVENT_SIZE      294
#define GDTH_MAXSG      32
#define MAX_LDRIVES     255
#define MAX_HDRIVES     100
#define MAX_HDRIVES     MAX_LDRIVES
typedef struct  __attribute__((packed)) gdth_sg_str;
typedef struct  __attribute__((packed)) gdth_sg64_str;
typedef struct  __attribute__((packed)) gdth_cmd_str;
#define ES_ASYNC    1
#define ES_DRIVER   2
#define ES_TEST     3
#define ES_SYNC     4
typedef struct  __attribute__((packed)) gdth_evt_data;
typedef struct  __attribute__((packed)) gdth_evt_str;
typedef struct  gdth_iowr_str;
typedef struct  gdth_iord_str;
typedef struct  gdth_ioctl_general;
typedef struct  gdth_ioctl_lockdrv;
typedef struct  gdth_ioctl_lockchn;
typedef struct  gdth_ioctl_osvers;
typedef struct  gdth_ioctl_ctrtype;
typedef struct  gdth_ioctl_event;
typedef struct  gdth_ioctl_rescan;
typedef struct  gdth_ioctl_reset;
