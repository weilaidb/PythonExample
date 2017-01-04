int go7007_read_interrupt(struct go7007 *go, u16 *value, u16 *data)
EXPORT_SYMBOL(go7007_read_interrupt);
int go7007_read_addr(struct go7007 *go, u16 addr, u16 *data)
EXPORT_SYMBOL(go7007_read_addr);
static int go7007_load_encoder(struct go7007 *go)
MODULE_FIRMWARE("go7007fw.bin");
int go7007_boot_encoder(struct go7007 *go, int init_i2c)
EXPORT_SYMBOL(go7007_boot_encoder);
static int go7007_init_encoder(struct go7007 *go)
int go7007_reset_encoder(struct go7007 *go)
static int init_i2c_module(struct i2c_adapter *adapter, const char *type,
int addr)
int go7007_register_encoder(struct go7007 *go)
EXPORT_SYMBOL(go7007_register_encoder);
int go7007_start_encoder(struct go7007 *go)
static inline void store_byte(struct go7007_buffer *gobuf, u8 byte)
static void frame_boundary(struct go7007 *go)
static void write_bitmap_word(struct go7007 *go)
void go7007_parse_video_stream(struct go7007 *go, u8 *buf, int length)
EXPORT_SYMBOL(go7007_parse_video_stream);
struct go7007 *go7007_alloc(struct go7007_board_info *board, struct device *dev)
EXPORT_SYMBOL(go7007_alloc);
void go7007_remove(struct go7007 *go)
EXPORT_SYMBOL(go7007_remove);
MODULE_LICENSE("GPL v2");
