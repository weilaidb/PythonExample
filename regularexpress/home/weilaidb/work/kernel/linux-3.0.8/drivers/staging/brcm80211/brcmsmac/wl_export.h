#define _wl_export_h_
struct wl_info;
struct wl_if;
struct wlc_if;
extern void wl_init(struct wl_info *wl);
extern uint wl_reset(struct wl_info *wl);
extern void wl_intrson(struct wl_info *wl);
extern u32 wl_intrsoff(struct wl_info *wl);
extern void wl_intrsrestore(struct wl_info *wl, u32 macintmask);
extern int wl_up(struct wl_info *wl);
extern void wl_down(struct wl_info *wl);
extern void wl_txflowcontrol(struct wl_info *wl, struct wl_if *wlif, bool state,
int prio);
extern bool wl_alloc_dma_resources(struct wl_info *wl, uint dmaddrwidth);
extern bool wl_rfkill_set_hw_state(struct wl_info *wl);
struct wl_timer;
extern struct wl_timer *wl_init_timer(struct wl_info *wl,
void (*fn) (void *arg), void *arg,
const char *name);
extern void wl_free_timer(struct wl_info *wl, struct wl_timer *timer);
extern void wl_add_timer(struct wl_info *wl, struct wl_timer *timer, uint ms,
int periodic);
extern bool wl_del_timer(struct wl_info *wl, struct wl_timer *timer);
extern void wl_msleep(struct wl_info *wl, uint ms);
