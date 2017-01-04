#define __DEBUG_H__
#define VIAFB_DEBUG 0
#if VIAFB_DEBUG
#define DEBUG_MSG(f, a...)   printk(f, ## a)
#define DEBUG_MSG(f, a...)
#define VIAFB_WARN 0
#if VIAFB_WARN
#define WARN_MSG(f, a...)   printk(f, ## a)
#define WARN_MSG(f, a...)
