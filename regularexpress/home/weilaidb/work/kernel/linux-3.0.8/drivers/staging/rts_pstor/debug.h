#define __REALTEK_RTSX_DEBUG_H
#define RTSX_STOR "rts_pstor: "
#define RTSX_DEBUGP(x...) printk(KERN_DEBUG RTSX_STOR x)
#define RTSX_DEBUGPN(x...) printk(KERN_DEBUG x)
#define RTSX_DEBUGPX(x...) printk(x)
#define RTSX_DEBUG(x) x
#define RTSX_DEBUGP(x...)
#define RTSX_DEBUGPN(x...)
#define RTSX_DEBUGPX(x...)
#define RTSX_DEBUG(x)
