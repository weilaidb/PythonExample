#define __MUSB_LINUX_DEBUG_H__
#define yprintk(facility, format, args...) \
do  while (0)
#define WARNING(fmt, args...) yprintk(KERN_WARNING, fmt, ## args)
#define INFO(fmt, args...) yprintk(KERN_INFO, fmt, ## args)
#define ERR(fmt, args...) yprintk(KERN_ERR, fmt, ## args)
extern int musb_init_debugfs(struct musb *musb);
extern void musb_exit_debugfs(struct musb *musb);
static inline int musb_init_debugfs(struct musb *musb)
static inline void musb_exit_debugfs(struct musb *musb)
