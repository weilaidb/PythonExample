struct uwb_ie_hdr *uwb_ie_next(void **ptr, size_t *len)
EXPORT_SYMBOL_GPL(uwb_ie_next);
int uwb_ie_dump_hex(const struct uwb_ie_hdr *ies, size_t len,
char *buf, size_t size)
static
ssize_t uwb_rc_get_ie(struct uwb_rc *uwb_rc, struct uwb_rc_evt_get_ie **pget_ie)
int uwb_rc_set_ie(struct uwb_rc *rc, struct uwb_rc_cmd_set_ie *cmd)
void uwb_rc_ie_init(struct uwb_rc *uwb_rc)
int uwb_rc_ie_setup(struct uwb_rc *uwb_rc)
void uwb_rc_ie_release(struct uwb_rc *uwb_rc)
static int uwb_rc_ie_add_one(struct uwb_rc *rc, const struct uwb_ie_hdr *new_ie)
int uwb_rc_ie_add(struct uwb_rc *uwb_rc,
const struct uwb_ie_hdr *ies, size_t size)
EXPORT_SYMBOL_GPL(uwb_rc_ie_add);
static
void uwb_rc_ie_cache_rm(struct uwb_rc *uwb_rc, enum uwb_ie to_remove)
int uwb_rc_ie_rm(struct uwb_rc *uwb_rc, enum uwb_ie element_id)
EXPORT_SYMBOL_GPL(uwb_rc_ie_rm);
