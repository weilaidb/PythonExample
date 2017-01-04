#define NV_DEBUG_NOTRACE
#define NV_CIO_CRE_44_HEADA 0x0
#define NV_CIO_CRE_44_HEADB 0x3
#define FEATURE_MOBILE 0x10
#define LEGACY_I2C_CRT 0x80
#define LEGACY_I2C_PANEL 0x81
#define LEGACY_I2C_TV 0x82
#define EDID1_LEN 128
#define BIOSLOG(sip, fmt, arg...) NV_DEBUG(sip->dev, fmt, ##arg)
#define LOG_OLD_VALUE(x)
struct init_exec ;
static bool nv_cksum(const uint8_t *data, unsigned int length)
static int
score_vbios(struct drm_device *dev, const uint8_t *data, const bool writeable)
static void load_vbios_prom(struct drm_device *dev, uint8_t *data)
static void load_vbios_pramin(struct drm_device *dev, uint8_t *data)
static void load_vbios_pci(struct drm_device *dev, uint8_t *data)
static void load_vbios_acpi(struct drm_device *dev, uint8_t *data)
struct methods ;
static struct methods shadow_methods[] = ;
#define NUM_SHADOW_METHODS ARRAY_SIZE(shadow_methods)
static bool NVShadowVBIOS(struct drm_device *dev, uint8_t *data)
struct init_tbl_entry ;
static int parse_init_table(struct nvbios *, uint16_t, struct init_exec *);
#define MACRO_INDEX_SIZE	2
#define MACRO_SIZE		8
#define CONDITION_SIZE		12
#define IO_FLAG_CONDITION_SIZE	9
#define IO_CONDITION_SIZE	5
#define MEM_INIT_SIZE		66
static void still_alive(void)
static uint32_t
munge_reg(struct nvbios *bios, uint32_t reg)
static int
valid_reg(struct nvbios *bios, uint32_t reg)
static bool
valid_idx_port(struct nvbios *bios, uint16_t port)
static bool
valid_port(struct nvbios *bios, uint16_t port)
static uint32_t
bios_rd32(struct nvbios *bios, uint32_t reg)
static void
bios_wr32(struct nvbios *bios, uint32_t reg, uint32_t data)
static uint8_t
bios_idxprt_rd(struct nvbios *bios, uint16_t port, uint8_t index)
static void
bios_idxprt_wr(struct nvbios *bios, uint16_t port, uint8_t index, uint8_t data)
static uint8_t
bios_port_rd(struct nvbios *bios, uint16_t port)
static void
bios_port_wr(struct nvbios *bios, uint16_t port, uint8_t data)
static bool
io_flag_condition_met(struct nvbios *bios, uint16_t offset, uint8_t cond)
static bool
bios_condition_met(struct nvbios *bios, uint16_t offset, uint8_t cond)
static bool
io_condition_met(struct nvbios *bios, uint16_t offset, uint8_t cond)
static int
nv50_pll_set(struct drm_device *dev, uint32_t reg, uint32_t clk)
static int
setPLL(struct nvbios *bios, uint32_t reg, uint32_t clk)
static int dcb_entry_idx_from_crtchead(struct drm_device *dev)
static int
read_dcb_i2c_entry(struct drm_device *dev, int dcb_version, uint8_t *i2ctable, int index, struct dcb_i2c_entry *i2c)
static struct nouveau_i2c_chan *
init_i2c_device_find(struct drm_device *dev, int i2c_index)
static uint32_t
get_tmds_index_reg(struct drm_device *dev, uint8_t mlv)
static int
init_io_restrict_prog(struct nvbios *bios, uint16_t offset,
struct init_exec *iexec)
static int
init_repeat(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_io_restrict_pll(struct nvbios *bios, uint16_t offset,
struct init_exec *iexec)
static int
init_end_repeat(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_copy(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_not(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_io_flag_condition(struct nvbios *bios, uint16_t offset,
struct init_exec *iexec)
static int
init_dp_condition(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_op_3b(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_op_3c(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_idx_addr_latched(struct nvbios *bios, uint16_t offset,
struct init_exec *iexec)
static int
init_io_restrict_pll2(struct nvbios *bios, uint16_t offset,
struct init_exec *iexec)
static int
init_pll2(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_i2c_byte(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_zm_i2c_byte(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_zm_i2c(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_tmds(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_zm_tmds_group(struct nvbios *bios, uint16_t offset,
struct init_exec *iexec)
static int
init_cr_idx_adr_latch(struct nvbios *bios, uint16_t offset,
struct init_exec *iexec)
static int
init_cr(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_zm_cr(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_zm_cr_group(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_condition_time(struct nvbios *bios, uint16_t offset,
struct init_exec *iexec)
static int
init_ltime(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_zm_reg_sequence(struct nvbios *bios, uint16_t offset,
struct init_exec *iexec)
static int
init_sub_direct(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_jump(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_i2c_if(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_copy_nv_reg(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_zm_index_io(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static inline void
bios_md32(struct nvbios *bios, uint32_t reg,
uint32_t mask, uint32_t val)
static uint32_t
peek_fb(struct drm_device *dev, struct io_mapping *fb,
uint32_t off)
static void
poke_fb(struct drm_device *dev, struct io_mapping *fb,
uint32_t off, uint32_t val)
static inline bool
read_back_fb(struct drm_device *dev, struct io_mapping *fb,
uint32_t off, uint32_t val)
static int
nv04_init_compute_mem(struct nvbios *bios)
static const uint8_t *
nv05_memory_config(struct nvbios *bios)
static int
nv05_init_compute_mem(struct nvbios *bios)
static int
nv10_init_compute_mem(struct nvbios *bios)
static int
nv20_init_compute_mem(struct nvbios *bios)
static int
init_compute_mem(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_reset(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_configure_mem(struct nvbios *bios, uint16_t offset,
struct init_exec *iexec)
static int
init_configure_clk(struct nvbios *bios, uint16_t offset,
struct init_exec *iexec)
static int
init_configure_preinit(struct nvbios *bios, uint16_t offset,
struct init_exec *iexec)
static int
init_io(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_sub(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_ram_condition(struct nvbios *bios, uint16_t offset,
struct init_exec *iexec)
static int
init_nv_reg(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_macro(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_done(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_resume(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_time(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_condition(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_io_condition(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_index_io(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_pll(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_zm_reg(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_ram_restrict_pll(struct nvbios *bios, uint16_t offset,
struct init_exec *iexec)
static int
init_8c(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_8d(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_gpio(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_ram_restrict_zm_reg_group(struct nvbios *bios, uint16_t offset,
struct init_exec *iexec)
static int
init_copy_zm_reg(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_zm_reg_group_addr_latched(struct nvbios *bios, uint16_t offset,
struct init_exec *iexec)
static int
init_reserved(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_96(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_97(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_auxch(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_zm_auxch(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static int
init_i2c_long_if(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static struct init_tbl_entry itbl_entry[] = ;
#define MAX_TABLE_OPS 1000
static int
parse_init_table(struct nvbios *bios, uint16_t offset, struct init_exec *iexec)
static void
parse_init_tables(struct nvbios *bios)
static uint16_t clkcmptable(struct nvbios *bios, uint16_t clktable, int pxclk)
static void
run_digital_op_script(struct drm_device *dev, uint16_t scriptptr,
struct dcb_entry *dcbent, int head, bool dl)
static int call_lvds_manufacturer_script(struct drm_device *dev, struct dcb_entry *dcbent, int head, enum LVDS_script script)
static int run_lvds_table(struct drm_device *dev, struct dcb_entry *dcbent, int head, enum LVDS_script script, int pxclk)
int call_lvds_script(struct drm_device *dev, struct dcb_entry *dcbent, int head, enum LVDS_script script, int pxclk)
struct lvdstableheader ;
static int parse_lvds_manufacturer_table_header(struct drm_device *dev, struct nvbios *bios, struct lvdstableheader *lth)
static int
get_fp_strap(struct drm_device *dev, struct nvbios *bios)
static int parse_fp_mode_table(struct drm_device *dev, struct nvbios *bios)
bool nouveau_bios_fp_mode(struct drm_device *dev, struct drm_display_mode *mode)
int nouveau_bios_parse_lvds_table(struct drm_device *dev, int pxclk, bool *dl, bool *if_is_24bit)
static uint8_t *
bios_output_config_match(struct drm_device *dev, struct dcb_entry *dcbent,
uint16_t record, int record_len, int record_nr,
bool match_link)
void *
nouveau_bios_dp_table(struct drm_device *dev, struct dcb_entry *dcbent,
int *length)
int
nouveau_bios_run_display_table(struct drm_device *dev, struct dcb_entry *dcbent,
uint32_t sub, int pxclk)
int run_tmds_table(struct drm_device *dev, struct dcb_entry *dcbent, int head, int pxclk)
struct pll_mapping ;
static struct pll_mapping nv04_pll_mapping[] = ;
static struct pll_mapping nv40_pll_mapping[] = ;
static struct pll_mapping nv50_pll_mapping[] = ;
static struct pll_mapping nv84_pll_mapping[] = ;
u32
get_pll_register(struct drm_device *dev, enum pll_types type)
int get_pll_limits(struct drm_device *dev, uint32_t limit_match, struct pll_lims *pll_lim)
static void parse_bios_version(struct drm_device *dev, struct nvbios *bios, uint16_t offset)
static void parse_script_table_pointers(struct nvbios *bios, uint16_t offset)
static int parse_bit_A_tbl_entry(struct drm_device *dev, struct nvbios *bios, struct bit_entry *bitentry)
static int parse_bit_C_tbl_entry(struct drm_device *dev, struct nvbios *bios, struct bit_entry *bitentry)
static int parse_bit_display_tbl_entry(struct drm_device *dev, struct nvbios *bios, struct bit_entry *bitentry)
static int parse_bit_init_tbl_entry(struct drm_device *dev, struct nvbios *bios, struct bit_entry *bitentry)
static int parse_bit_i_tbl_entry(struct drm_device *dev, struct nvbios *bios, struct bit_entry *bitentry)
static int parse_bit_lvds_tbl_entry(struct drm_device *dev, struct nvbios *bios, struct bit_entry *bitentry)
static int
parse_bit_M_tbl_entry(struct drm_device *dev, struct nvbios *bios,
struct bit_entry *bitentry)
static int parse_bit_tmds_tbl_entry(struct drm_device *dev, struct nvbios *bios, struct bit_entry *bitentry)
static int
parse_bit_U_tbl_entry(struct drm_device *dev, struct nvbios *bios,
struct bit_entry *bitentry)
static int
parse_bit_displayport_tbl_entry(struct drm_device *dev, struct nvbios *bios,
struct bit_entry *bitentry)
struct bit_table ;
#define BIT_TABLE(id, funcid) ((struct bit_table))
int
bit_table(struct drm_device *dev, u8 id, struct bit_entry *bit)
static int
parse_bit_table(struct nvbios *bios, const uint16_t bitoffset,
struct bit_table *table)
static int
parse_bit_structure(struct nvbios *bios, const uint16_t bitoffset)
static int parse_bmp_structure(struct drm_device *dev, struct nvbios *bios, unsigned int offset)
static uint16_t findstr(uint8_t *data, int n, const uint8_t *str, int len)
static struct dcb_gpio_entry *
new_gpio_entry(struct nvbios *bios)
struct dcb_gpio_entry *
nouveau_bios_gpio_entry(struct drm_device *dev, enum dcb_gpio_tag tag)
static void
parse_dcb_gpio_table(struct nvbios *bios)
struct dcb_connector_table_entry *
nouveau_bios_connector_entry(struct drm_device *dev, int index)
static enum dcb_connector_type
divine_connector_type(struct nvbios *bios, int index)
static void
apply_dcb_connector_quirks(struct nvbios *bios, int idx)
static const u8 hpd_gpio[16] = ;
static void
parse_dcb_connector_table(struct nvbios *bios)
static struct dcb_entry *new_dcb_entry(struct dcb_table *dcb)
static void fabricate_dcb_output(struct dcb_table *dcb, int type, int i2c,
int heads, int or)
static bool
parse_dcb20_entry(struct drm_device *dev, struct dcb_table *dcb,
uint32_t conn, uint32_t conf, struct dcb_entry *entry)
static bool
parse_dcb15_entry(struct drm_device *dev, struct dcb_table *dcb,
uint32_t conn, uint32_t conf, struct dcb_entry *entry)
static bool parse_dcb_entry(struct drm_device *dev, struct dcb_table *dcb,
uint32_t conn, uint32_t conf)
static
void merge_like_dcb_entries(struct drm_device *dev, struct dcb_table *dcb)
static bool
apply_dcb_encoder_quirks(struct drm_device *dev, int idx, u32 *conn, u32 *conf)
static void
fabricate_dcb_encoder_table(struct drm_device *dev, struct nvbios *bios)
static int
parse_dcb_table(struct drm_device *dev, struct nvbios *bios)
static void
fixup_legacy_connector(struct nvbios *bios)
static void
fixup_legacy_i2c(struct nvbios *bios)
static int load_nv17_hwsq_ucode_entry(struct drm_device *dev, struct nvbios *bios, uint16_t hwsq_offset, int entry)
static int load_nv17_hw_sequencer_ucode(struct drm_device *dev,
struct nvbios *bios)
uint8_t *nouveau_bios_embedded_edid(struct drm_device *dev)
void
nouveau_bios_run_init_table(struct drm_device *dev, uint16_t table,
struct dcb_entry *dcbent)
static bool NVInitVBIOS(struct drm_device *dev)
static int nouveau_parse_vbios_struct(struct drm_device *dev)
int
nouveau_run_vbios_init(struct drm_device *dev)
static void
nouveau_bios_i2c_devices_takedown(struct drm_device *dev)
static bool
nouveau_bios_posted(struct drm_device *dev)
int
nouveau_bios_init(struct drm_device *dev)
void
nouveau_bios_takedown(struct drm_device *dev)
