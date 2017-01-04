struct snd_card;
struct snd_cx18_card ;
extern int cx18_alsa_debug;
static inline void snd_cx18_lock(struct snd_cx18_card *cxsc)
static inline void snd_cx18_unlock(struct snd_cx18_card *cxsc)
#define CX18_ALSA_DBGFLG_WARN  (1 << 0)
#define CX18_ALSA_DBGFLG_WARN  (1 << 0)
#define CX18_ALSA_DBGFLG_INFO  (1 << 1)
#define CX18_ALSA_DEBUG(x, type, fmt, args...) \
do  while (0)
#define CX18_ALSA_DEBUG_WARN(fmt, args...) \
CX18_ALSA_DEBUG(CX18_ALSA_DBGFLG_WARN, "warning", fmt , ## args)
#define CX18_ALSA_DEBUG_INFO(fmt, args...) \
CX18_ALSA_DEBUG(CX18_ALSA_DBGFLG_INFO, "info", fmt , ## args)
#define CX18_ALSA_ERR(fmt, args...) \
printk(KERN_ERR "%s-alsa: " fmt, v4l2_dev->name , ## args)
#define CX18_ALSA_WARN(fmt, args...) \
printk(KERN_WARNING "%s-alsa: " fmt, v4l2_dev->name , ## args)
#define CX18_ALSA_INFO(fmt, args...) \
printk(KERN_INFO "%s-alsa: " fmt, v4l2_dev->name , ## args)
