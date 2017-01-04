#define LINUX_ATM_NICSTAR_H
#define NS_GETPSTAT	_IOWR('a',ATMIOC_SARPRV+1,struct atmif_sioc)
#define NS_SETBUFLEV	_IOW('a',ATMIOC_SARPRV+2,struct atmif_sioc)
#define NS_ADJBUFLEV	_IO('a',ATMIOC_SARPRV+3)
typedef struct buf_nr
buf_nr;
typedef struct pool_levels
pool_levels;
#define NS_BUFTYPE_SMALL 1
#define NS_BUFTYPE_LARGE 2
#define NS_BUFTYPE_HUGE 3
#define NS_BUFTYPE_IOVEC 4
