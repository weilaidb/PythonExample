static
const char *__strerror[] = ;
const char *uwb_rc_strerror(unsigned code)
int uwb_rc_cmd_async(struct uwb_rc *rc, const char *cmd_name,
struct uwb_rccb *cmd, size_t cmd_size,
u8 expected_type, u16 expected_event,
uwb_rc_cmd_cb_f cb, void *arg)
EXPORT_SYMBOL_GPL(uwb_rc_cmd_async);
struct uwb_rc_cmd_done_params ;
static void uwb_rc_cmd_done(struct uwb_rc *rc, void *arg,
struct uwb_rceb *reply, ssize_t reply_size)
static
ssize_t __uwb_rc_cmd(struct uwb_rc *rc, const char *cmd_name,
struct uwb_rccb *cmd, size_t cmd_size,
struct uwb_rceb *reply, size_t reply_size,
u8 expected_type, u16 expected_event,
struct uwb_rceb **preply)
ssize_t uwb_rc_cmd(struct uwb_rc *rc, const char *cmd_name,
struct uwb_rccb *cmd, size_t cmd_size,
struct uwb_rceb *reply, size_t reply_size)
EXPORT_SYMBOL_GPL(uwb_rc_cmd);
ssize_t uwb_rc_vcmd(struct uwb_rc *rc, const char *cmd_name,
struct uwb_rccb *cmd, size_t cmd_size,
u8 expected_type, u16 expected_event,
struct uwb_rceb **preply)
EXPORT_SYMBOL_GPL(uwb_rc_vcmd);
int uwb_rc_reset(struct uwb_rc *rc)
int uwbd_msg_handle_reset(struct uwb_event *evt)
void uwb_rc_reset_all(struct uwb_rc *rc)
EXPORT_SYMBOL_GPL(uwb_rc_reset_all);
void uwb_rc_pre_reset(struct uwb_rc *rc)
EXPORT_SYMBOL_GPL(uwb_rc_pre_reset);
int uwb_rc_post_reset(struct uwb_rc *rc)
EXPORT_SYMBOL_GPL(uwb_rc_post_reset);
