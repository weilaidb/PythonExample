#define __OSD_DEBUG_H__
#define OSD_ERR(fmt, a...) printk(KERN_ERR "osd: " fmt, ##a)
#define OSD_INFO(fmt, a...) printk(KERN_NOTICE "osd: " fmt, ##a)
#define OSD_DEBUG(fmt, a...) \
printk(KERN_NOTICE "osd @%s:%d: " fmt, __func__, __LINE__, ##a)
#define OSD_DEBUG(fmt, a...) do  while (0)
#define _LLU(x) (unsigned long long)(x)
