#define _wl_mac80211_h_
struct wl_timer ;
struct wl_if ;
#define WL_MAX_FW		4
struct wl_firmware ;
struct wl_info ;
#define WL_LOCK(wl)	spin_lock_bh(&(wl)->lock)
#define WL_UNLOCK(wl)	spin_unlock_bh(&(wl)->lock)
#define WL_ISRLOCK(wl, flags) do  while (0)
#define WL_ISRUNLOCK(wl, flags) do  while (0)
#define INT_LOCK(wl, flags)	spin_lock_irqsave(&(wl)->isr_lock, flags)
#define INT_UNLOCK(wl, flags)	spin_unlock_irqrestore(&(wl)->isr_lock, flags)
