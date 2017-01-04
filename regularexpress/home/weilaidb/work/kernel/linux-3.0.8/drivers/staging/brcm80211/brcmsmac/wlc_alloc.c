static struct wlc_bsscfg *wlc_bsscfg_malloc(uint unit);
static void wlc_bsscfg_mfree(struct wlc_bsscfg *cfg);
static struct wlc_pub *wlc_pub_malloc(uint unit,
uint *err, uint devid);
static void wlc_pub_mfree(struct wlc_pub *pub);
static void wlc_tunables_init(wlc_tunables_t *tunables, uint devid);
static void wlc_tunables_init(wlc_tunables_t *tunables, uint devid)
static struct wlc_pub *wlc_pub_malloc(uint unit, uint *err, uint devid)
static void wlc_pub_mfree(struct wlc_pub *pub)
static struct wlc_bsscfg *wlc_bsscfg_malloc(uint unit)
static void wlc_bsscfg_mfree(struct wlc_bsscfg *cfg)
static void wlc_bsscfg_ID_assign(struct wlc_info *wlc,
struct wlc_bsscfg *bsscfg)
struct wlc_info *wlc_attach_malloc(uint unit, uint *err, uint devid)
void wlc_detach_mfree(struct wlc_info *wlc)
