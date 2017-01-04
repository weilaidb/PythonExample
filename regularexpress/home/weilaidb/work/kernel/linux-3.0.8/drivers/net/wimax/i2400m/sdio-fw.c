#define D_SUBMODULE fw
ssize_t i2400ms_bus_bm_cmd_send(struct i2400m *i2400m,
const struct i2400m_bootrom_header *_cmd,
size_t cmd_size, int flags)
ssize_t i2400ms_bus_bm_wait_for_ack(struct i2400m *i2400m,
struct i2400m_bootrom_header *ack,
size_t ack_size)
