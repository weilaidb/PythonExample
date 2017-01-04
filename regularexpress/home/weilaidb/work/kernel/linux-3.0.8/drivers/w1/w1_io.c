static int w1_delay_parm = 1;
module_param_named(delay_coef, w1_delay_parm, int, 0);
static u8 w1_crc8_table[] = ;
static void w1_delay(unsigned long tm)
static void w1_write_bit(struct w1_master *dev, int bit);
static u8 w1_read_bit(struct w1_master *dev);
static u8 w1_touch_bit(struct w1_master *dev, int bit)
static void w1_write_bit(struct w1_master *dev, int bit)
static void w1_pre_write(struct w1_master *dev)
static void w1_post_write(struct w1_master *dev)
void w1_write_8(struct w1_master *dev, u8 byte)
EXPORT_SYMBOL_GPL(w1_write_8);
static u8 w1_read_bit(struct w1_master *dev)
u8 w1_triplet(struct w1_master *dev, int bdir)
u8 w1_read_8(struct w1_master *dev)
EXPORT_SYMBOL_GPL(w1_read_8);
void w1_write_block(struct w1_master *dev, const u8 *buf, int len)
EXPORT_SYMBOL_GPL(w1_write_block);
void w1_touch_block(struct w1_master *dev, u8 *buf, int len)
EXPORT_SYMBOL_GPL(w1_touch_block);
u8 w1_read_block(struct w1_master *dev, u8 *buf, int len)
EXPORT_SYMBOL_GPL(w1_read_block);
int w1_reset_bus(struct w1_master *dev)
EXPORT_SYMBOL_GPL(w1_reset_bus);
u8 w1_calc_crc8(u8 * data, int len)
EXPORT_SYMBOL_GPL(w1_calc_crc8);
void w1_search_devices(struct w1_master *dev, u8 search_type, w1_slave_found_callback cb)
int w1_reset_select_slave(struct w1_slave *sl)
EXPORT_SYMBOL_GPL(w1_reset_select_slave);
int w1_reset_resume_command(struct w1_master *dev)
EXPORT_SYMBOL_GPL(w1_reset_resume_command);
void w1_next_pullup(struct w1_master *dev, int delay)
EXPORT_SYMBOL_GPL(w1_next_pullup);
