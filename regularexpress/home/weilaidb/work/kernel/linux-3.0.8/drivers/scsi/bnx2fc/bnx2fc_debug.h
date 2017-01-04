#define __BNX2FC_DEBUG__
#define LOG_IO		0x01
#define LOG_TGT		0x02
#define LOG_HBA		0x04
#define LOG_ELS		0x08
#define LOG_MISC	0x10
#define LOG_ALL		0xff
extern unsigned int bnx2fc_debug_level;
#define BNX2FC_CHK_LOGGING(LEVEL, CMD)					\
do  while (0)
#define BNX2FC_ELS_DBG(fmt, arg...)					\
BNX2FC_CHK_LOGGING(LOG_ELS,					\
printk(KERN_ALERT PFX fmt, ##arg))
#define BNX2FC_MISC_DBG(fmt, arg...)					\
BNX2FC_CHK_LOGGING(LOG_MISC,					\
printk(KERN_ALERT PFX fmt, ##arg))
#define BNX2FC_IO_DBG(io_req, fmt, arg...)				\
do  while (0)
#define BNX2FC_TGT_DBG(tgt, fmt, arg...)				\
do  while (0)
#define BNX2FC_HBA_DBG(lport, fmt, arg...)				\
do  while (0)
