#define _FCOE_LIBFCOE_H_
extern unsigned int libfcoe_debug_logging;
#define LIBFCOE_LOGGING	    0x01
#define LIBFCOE_FIP_LOGGING 0x02
#define LIBFCOE_TRANSPORT_LOGGING	0x04
#define LIBFCOE_CHECK_LOGGING(LEVEL, CMD)		\
do  while (0)
#define LIBFCOE_DBG(fmt, args...)					\
LIBFCOE_CHECK_LOGGING(LIBFCOE_LOGGING,				\
printk(KERN_INFO "libfcoe: " fmt, ##args);)
#define LIBFCOE_FIP_DBG(fip, fmt, args...)				\
LIBFCOE_CHECK_LOGGING(LIBFCOE_FIP_LOGGING,			\
printk(KERN_INFO "host%d: fip: " fmt,	\
(fip)->lp->host->host_no, ##args);)
#define LIBFCOE_TRANSPORT_DBG(fmt, args...)				\
LIBFCOE_CHECK_LOGGING(LIBFCOE_TRANSPORT_LOGGING,		\
printk(KERN_INFO "%s: " fmt,		\
__func__, ##args);)
