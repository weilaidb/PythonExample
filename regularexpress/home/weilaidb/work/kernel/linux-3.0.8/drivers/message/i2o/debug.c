static void i2o_report_util_cmd(u8 cmd);
static void i2o_report_exec_cmd(u8 cmd);
static void i2o_report_fail_status(u8 req_status, u32 * msg);
static void i2o_report_common_status(u8 req_status);
static void i2o_report_common_dsc(u16 detailed_status);
void i2o_report_status(const char *severity, const char *str,
struct i2o_message *m)
void i2o_dump_message(struct i2o_message *m)
static void i2o_report_fail_status(u8 req_status, u32 * msg)
static void i2o_report_common_status(u8 req_status)
static void i2o_report_common_dsc(u16 detailed_status)
static void i2o_report_util_cmd(u8 cmd)
static void i2o_report_exec_cmd(u8 cmd)
void i2o_debug_state(struct i2o_controller *c)
;
void i2o_dump_hrt(struct i2o_controller *c)
EXPORT_SYMBOL(i2o_dump_message);
