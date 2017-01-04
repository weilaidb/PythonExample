#define _ZD_DEF_H
typedef u16 __nocast zd_addr_t;
#define dev_printk_f(level, dev, fmt, args...) \
dev_printk(level, dev, "%s() " fmt, __func__, ##args)
#  define dev_dbg_f(dev, fmt, args...) \
dev_printk_f(KERN_DEBUG, dev, fmt, ## args)
#  define dev_dbg_f_limit(dev, fmt, args...) do  while (0)
#  define dev_dbg_f(dev, fmt, args...) do  while (0)
#  define dev_dbg_f_limit(dev, fmt, args...) do  while (0)
#  define ZD_ASSERT(x) \
do  while (0)
#  define ZD_ASSERT(x) do  while (0)
#  define ZD_MEMCLEAR(pointer, size) memset((pointer), 0xff, (size))
#  define ZD_MEMCLEAR(pointer, size) do  while (0)
