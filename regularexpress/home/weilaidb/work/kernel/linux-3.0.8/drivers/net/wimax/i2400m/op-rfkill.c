#define D_SUBMODULE rfkill
static
int i2400m_radio_is(struct i2400m *i2400m, enum wimax_rf_state state)
int i2400m_op_rfkill_sw_toggle(struct wimax_dev *wimax_dev,
enum wimax_rf_state state)
void i2400m_report_tlv_rf_switches_status(
struct i2400m *i2400m,
const struct i2400m_tlv_rf_switches_status *rfss)
