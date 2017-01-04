struct uwb_rc_neh ;
static void uwb_rc_neh_timer(unsigned long arg);
static void uwb_rc_neh_release(struct kref *kref)
static void uwb_rc_neh_get(struct uwb_rc_neh *neh)
void uwb_rc_neh_put(struct uwb_rc_neh *neh)
static
int __uwb_rc_ctx_get(struct uwb_rc *rc, struct uwb_rc_neh *neh)
static
void __uwb_rc_ctx_put(struct uwb_rc *rc, struct uwb_rc_neh *neh)
struct uwb_rc_neh *uwb_rc_neh_add(struct uwb_rc *rc, struct uwb_rccb *cmd,
u8 expected_type, u16 expected_event,
uwb_rc_cmd_cb_f cb, void *arg)
static void __uwb_rc_neh_rm(struct uwb_rc *rc, struct uwb_rc_neh *neh)
void uwb_rc_neh_rm(struct uwb_rc *rc, struct uwb_rc_neh *neh)
void uwb_rc_neh_arm(struct uwb_rc *rc, struct uwb_rc_neh *neh)
static void uwb_rc_neh_cb(struct uwb_rc_neh *neh, struct uwb_rceb *rceb, size_t size)
static bool uwb_rc_neh_match(struct uwb_rc_neh *neh, const struct uwb_rceb *rceb)
static
struct uwb_rc_neh *uwb_rc_neh_lookup(struct uwb_rc *rc,
const struct uwb_rceb *rceb)
static
void uwb_rc_notif(struct uwb_rc *rc, struct uwb_rceb *rceb, ssize_t size)
static void uwb_rc_neh_grok_event(struct uwb_rc *rc, struct uwb_rceb *rceb, size_t size)
void uwb_rc_neh_grok(struct uwb_rc *rc, void *buf, size_t buf_size)
EXPORT_SYMBOL_GPL(uwb_rc_neh_grok);
void uwb_rc_neh_error(struct uwb_rc *rc, int error)
EXPORT_SYMBOL_GPL(uwb_rc_neh_error);
static void uwb_rc_neh_timer(unsigned long arg)
void uwb_rc_neh_create(struct uwb_rc *rc)
void uwb_rc_neh_destroy(struct uwb_rc *rc)
