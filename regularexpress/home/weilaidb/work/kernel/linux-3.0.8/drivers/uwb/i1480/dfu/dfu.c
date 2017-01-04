int i1480_rceb_check(const struct i1480 *i1480, const struct uwb_rceb *rceb,
const char *cmd, u8 context, u8 expected_type,
unsigned expected_event)
EXPORT_SYMBOL_GPL(i1480_rceb_check);
ssize_t i1480_cmd(struct i1480 *i1480, const char *cmd_name, size_t cmd_size,
size_t reply_size)
EXPORT_SYMBOL_GPL(i1480_cmd);
static
int i1480_print_state(struct i1480 *i1480)
int i1480_fw_upload(struct i1480 *i1480)
EXPORT_SYMBOL_GPL(i1480_fw_upload);
