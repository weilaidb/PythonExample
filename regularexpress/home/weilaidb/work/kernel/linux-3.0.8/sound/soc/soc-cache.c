static int do_spi_write(void *control, const char *data, int len)
static int do_hw_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int value, const void *data, int len)
static unsigned int do_hw_read(struct snd_soc_codec *codec, unsigned int reg)
static unsigned int snd_soc_4_12_read(struct snd_soc_codec *codec,
unsigned int reg)
static int snd_soc_4_12_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int value)
static unsigned int snd_soc_7_9_read(struct snd_soc_codec *codec,
unsigned int reg)
static int snd_soc_7_9_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int value)
static int snd_soc_8_8_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int value)
static unsigned int snd_soc_8_8_read(struct snd_soc_codec *codec,
unsigned int reg)
static int snd_soc_8_16_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int value)
static unsigned int snd_soc_8_16_read(struct snd_soc_codec *codec,
unsigned int reg)
#if defined(CONFIG_I2C) || (defined(CONFIG_I2C_MODULE) && defined(MODULE))
static unsigned int do_i2c_read(struct snd_soc_codec *codec,
void *reg, int reglen,
void *data, int datalen)
#if defined(CONFIG_I2C) || (defined(CONFIG_I2C_MODULE) && defined(MODULE))
static unsigned int snd_soc_8_8_read_i2c(struct snd_soc_codec *codec,
unsigned int r)
#define snd_soc_8_8_read_i2c NULL
#if defined(CONFIG_I2C) || (defined(CONFIG_I2C_MODULE) && defined(MODULE))
static unsigned int snd_soc_8_16_read_i2c(struct snd_soc_codec *codec,
unsigned int r)
#define snd_soc_8_16_read_i2c NULL
#if defined(CONFIG_I2C) || (defined(CONFIG_I2C_MODULE) && defined(MODULE))
static unsigned int snd_soc_16_8_read_i2c(struct snd_soc_codec *codec,
unsigned int r)
#define snd_soc_16_8_read_i2c NULL
static unsigned int snd_soc_16_8_read(struct snd_soc_codec *codec,
unsigned int reg)
static int snd_soc_16_8_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int value)
#if defined(CONFIG_I2C) || (defined(CONFIG_I2C_MODULE) && defined(MODULE))
static unsigned int snd_soc_16_16_read_i2c(struct snd_soc_codec *codec,
unsigned int r)
#define snd_soc_16_16_read_i2c NULL
static unsigned int snd_soc_16_16_read(struct snd_soc_codec *codec,
unsigned int reg)
static int snd_soc_16_16_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int value)
static int snd_soc_hw_bulk_write_raw(struct snd_soc_codec *codec, unsigned int reg,
const void *data, size_t len)
static struct  io_types[] = ;
int snd_soc_codec_set_cache_io(struct snd_soc_codec *codec,
int addr_bits, int data_bits,
enum snd_soc_control_type control)
EXPORT_SYMBOL_GPL(snd_soc_codec_set_cache_io);
static bool snd_soc_set_cache_val(void *base, unsigned int idx,
unsigned int val, unsigned int word_size)
static unsigned int snd_soc_get_cache_val(const void *base, unsigned int idx,
unsigned int word_size)
struct snd_soc_rbtree_node  __attribute__ ((packed));
struct snd_soc_rbtree_ctx ;
static struct snd_soc_rbtree_node *snd_soc_rbtree_lookup(
struct rb_root *root, unsigned int reg)
static int snd_soc_rbtree_insert(struct rb_root *root,
struct snd_soc_rbtree_node *rbnode)
static int snd_soc_rbtree_cache_sync(struct snd_soc_codec *codec)
static int snd_soc_rbtree_cache_write(struct snd_soc_codec *codec,
unsigned int reg, unsigned int value)
static int snd_soc_rbtree_cache_read(struct snd_soc_codec *codec,
unsigned int reg, unsigned int *value)
static int snd_soc_rbtree_cache_exit(struct snd_soc_codec *codec)
static int snd_soc_rbtree_cache_init(struct snd_soc_codec *codec)
struct snd_soc_lzo_ctx ;
#define LZO_BLOCK_NUM 8
static int snd_soc_lzo_block_count(void)
static int snd_soc_lzo_prepare(struct snd_soc_lzo_ctx *lzo_ctx)
static int snd_soc_lzo_compress(struct snd_soc_lzo_ctx *lzo_ctx)
static int snd_soc_lzo_decompress(struct snd_soc_lzo_ctx *lzo_ctx)
static int snd_soc_lzo_compress_cache_block(struct snd_soc_codec *codec,
struct snd_soc_lzo_ctx *lzo_ctx)
static int snd_soc_lzo_decompress_cache_block(struct snd_soc_codec *codec,
struct snd_soc_lzo_ctx *lzo_ctx)
static inline int snd_soc_lzo_get_blkindex(struct snd_soc_codec *codec,
unsigned int reg)
static inline int snd_soc_lzo_get_blkpos(struct snd_soc_codec *codec,
unsigned int reg)
static inline int snd_soc_lzo_get_blksize(struct snd_soc_codec *codec)
static int snd_soc_lzo_cache_sync(struct snd_soc_codec *codec)
static int snd_soc_lzo_cache_write(struct snd_soc_codec *codec,
unsigned int reg, unsigned int value)
static int snd_soc_lzo_cache_read(struct snd_soc_codec *codec,
unsigned int reg, unsigned int *value)
static int snd_soc_lzo_cache_exit(struct snd_soc_codec *codec)
static int snd_soc_lzo_cache_init(struct snd_soc_codec *codec)
static int snd_soc_flat_cache_sync(struct snd_soc_codec *codec)
static int snd_soc_flat_cache_write(struct snd_soc_codec *codec,
unsigned int reg, unsigned int value)
static int snd_soc_flat_cache_read(struct snd_soc_codec *codec,
unsigned int reg, unsigned int *value)
static int snd_soc_flat_cache_exit(struct snd_soc_codec *codec)
static int snd_soc_flat_cache_init(struct snd_soc_codec *codec)
static const struct snd_soc_cache_ops cache_types[] = ;
int snd_soc_cache_init(struct snd_soc_codec *codec)
int snd_soc_cache_exit(struct snd_soc_codec *codec)
int snd_soc_cache_read(struct snd_soc_codec *codec,
unsigned int reg, unsigned int *value)
EXPORT_SYMBOL_GPL(snd_soc_cache_read);
int snd_soc_cache_write(struct snd_soc_codec *codec,
unsigned int reg, unsigned int value)
EXPORT_SYMBOL_GPL(snd_soc_cache_write);
int snd_soc_cache_sync(struct snd_soc_codec *codec)
EXPORT_SYMBOL_GPL(snd_soc_cache_sync);
static int snd_soc_get_reg_access_index(struct snd_soc_codec *codec,
unsigned int reg)
int snd_soc_default_volatile_register(struct snd_soc_codec *codec,
unsigned int reg)
EXPORT_SYMBOL_GPL(snd_soc_default_volatile_register);
int snd_soc_default_readable_register(struct snd_soc_codec *codec,
unsigned int reg)
EXPORT_SYMBOL_GPL(snd_soc_default_readable_register);
int snd_soc_default_writable_register(struct snd_soc_codec *codec,
unsigned int reg)
EXPORT_SYMBOL_GPL(snd_soc_default_writable_register);
