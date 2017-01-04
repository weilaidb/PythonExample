#define D_SUBMODULE fw
static const __le32 i2400m_ACK_BARKER[4] = ;
void i2400m_bm_cmd_prepare(struct i2400m_bootrom_header *cmd)
EXPORT_SYMBOL_GPL(i2400m_bm_cmd_prepare);
static struct i2400m_barker_db  *i2400m_barker_db;
static size_t i2400m_barker_db_used, i2400m_barker_db_size;
static
int i2400m_zrealloc_2x(void **ptr, size_t *_count, size_t el_size,
gfp_t gfp_flags)
static
int i2400m_barker_db_add(u32 barker_id)
void i2400m_barker_db_exit(void)
static
int i2400m_barker_db_known_barkers(void)
int i2400m_barker_db_init(const char *_options)
int i2400m_is_boot_barker(struct i2400m *i2400m,
const void *buf, size_t buf_size)
EXPORT_SYMBOL_GPL(i2400m_is_boot_barker);
static
ssize_t __i2400m_bm_ack_verify(struct i2400m *i2400m, int opcode,
struct i2400m_bootrom_header *ack,
size_t ack_size, int flags)
static
ssize_t i2400m_bm_cmd(struct i2400m *i2400m,
const struct i2400m_bootrom_header *cmd, size_t cmd_size,
struct i2400m_bootrom_header *ack, size_t ack_size,
int flags)
static int i2400m_download_chunk(struct i2400m *i2400m, const void *chunk,
size_t __chunk_len, unsigned long addr,
unsigned int direct, unsigned int do_csum)
static
ssize_t i2400m_dnload_bcf(struct i2400m *i2400m,
const struct i2400m_bcf_hdr *bcf, size_t bcf_len)
static
unsigned i2400m_boot_is_signed(struct i2400m *i2400m)
static
int i2400m_dnload_finalize(struct i2400m *i2400m,
const struct i2400m_bcf_hdr *bcf_hdr,
const struct i2400m_bcf_hdr *bcf, size_t offset)
int i2400m_bootrom_init(struct i2400m *i2400m, enum i2400m_bri flags)
int i2400m_read_mac_addr(struct i2400m *i2400m)
static
int i2400m_dnload_init_nonsigned(struct i2400m *i2400m)
static
int i2400m_dnload_init_signed(struct i2400m *i2400m,
const struct i2400m_bcf_hdr *bcf_hdr)
static
int i2400m_dnload_init(struct i2400m *i2400m,
const struct i2400m_bcf_hdr *bcf_hdr)
static
int i2400m_fw_hdr_check(struct i2400m *i2400m,
const struct i2400m_bcf_hdr *bcf_hdr,
size_t index, size_t offset)
static
int i2400m_fw_check(struct i2400m *i2400m, const void *bcf, size_t bcf_size)
static
unsigned i2400m_bcf_hdr_match(struct i2400m *i2400m,
const struct i2400m_bcf_hdr *bcf_hdr)
static
const struct i2400m_bcf_hdr *i2400m_bcf_hdr_find(struct i2400m *i2400m)
static
int i2400m_fw_dnload(struct i2400m *i2400m, const struct i2400m_bcf_hdr *bcf,
size_t fw_size, enum i2400m_bri flags)
static
int i2400m_fw_bootstrap(struct i2400m *i2400m, const struct firmware *fw,
enum i2400m_bri flags)
struct i2400m_fw ;
static
void i2400m_fw_destroy(struct kref *kref)
static
struct i2400m_fw *i2400m_fw_get(struct i2400m_fw *i2400m_fw)
static
void i2400m_fw_put(struct i2400m_fw *i2400m_fw)
int i2400m_dev_bootstrap(struct i2400m *i2400m, enum i2400m_bri flags)
EXPORT_SYMBOL_GPL(i2400m_dev_bootstrap);
void i2400m_fw_cache(struct i2400m *i2400m)
void i2400m_fw_uncache(struct i2400m *i2400m)
