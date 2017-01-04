static const u8 MAX_PGPKT_SIZE = 9;
static const u8 PGPKT_DATA_SIZE = 8;
static const int EFUSE_MAX_SIZE = 512;
static const u8 EFUSE_OOB_PROTECT_BYTES = 15;
static const struct efuse_map RTL8712_SDIO_EFUSE_TABLE[] = ;
static void efuse_shadow_read_1byte(struct ieee80211_hw *hw, u16 offset,
u8 *value);
static void efuse_shadow_read_2byte(struct ieee80211_hw *hw, u16 offset,
u16 *value);
static void efuse_shadow_read_4byte(struct ieee80211_hw *hw, u16 offset,
u32 *value);
static void efuse_shadow_write_1byte(struct ieee80211_hw *hw, u16 offset,
u8 value);
static void efuse_shadow_write_2byte(struct ieee80211_hw *hw, u16 offset,
u16 value);
static void efuse_shadow_write_4byte(struct ieee80211_hw *hw, u16 offset,
u32 value);
static int efuse_one_byte_read(struct ieee80211_hw *hw, u16 addr,
u8 *data);
static int efuse_one_byte_write(struct ieee80211_hw *hw, u16 addr,
u8 data);
static void efuse_read_all_map(struct ieee80211_hw *hw, u8 *efuse);
static int efuse_pg_packet_read(struct ieee80211_hw *hw, u8 offset,
u8 *data);
static int efuse_pg_packet_write(struct ieee80211_hw *hw, u8 offset,
u8 word_en, u8 *data);
static void efuse_word_enable_data_read(u8 word_en, u8 *sourdata,
u8 *targetdata);
static u8 efuse_word_enable_data_write(struct ieee80211_hw *hw,
u16 efuse_addr, u8 word_en, u8 *data);
static void efuse_power_switch(struct ieee80211_hw *hw, u8 write,
u8 pwrstate);
static u16 efuse_get_current_size(struct ieee80211_hw *hw);
static u8 efuse_calculate_word_cnts(u8 word_en);
void efuse_initialize(struct ieee80211_hw *hw)
u8 efuse_read_1byte(struct ieee80211_hw *hw, u16 address)
EXPORT_SYMBOL(efuse_read_1byte);
void efuse_write_1byte(struct ieee80211_hw *hw, u16 address, u8 value)
void read_efuse_byte(struct ieee80211_hw *hw, u16 _offset, u8 *pbuf)
void read_efuse(struct ieee80211_hw *hw, u16 _offset, u16 _size_byte, u8 *pbuf)
bool efuse_shadow_update_chk(struct ieee80211_hw *hw)
void efuse_shadow_read(struct ieee80211_hw *hw, u8 type,
u16 offset, u32 *value)
void efuse_shadow_write(struct ieee80211_hw *hw, u8 type, u16 offset,
u32 value)
bool efuse_shadow_update(struct ieee80211_hw *hw)
void rtl_efuse_shadow_map_update(struct ieee80211_hw *hw)
EXPORT_SYMBOL(rtl_efuse_shadow_map_update);
void efuse_force_write_vendor_Id(struct ieee80211_hw *hw)
void efuse_re_pg_section(struct ieee80211_hw *hw, u8 section_idx)
static void efuse_shadow_read_1byte(struct ieee80211_hw *hw,
u16 offset, u8 *value)
static void efuse_shadow_read_2byte(struct ieee80211_hw *hw,
u16 offset, u16 *value)
static void efuse_shadow_read_4byte(struct ieee80211_hw *hw,
u16 offset, u32 *value)
static void efuse_shadow_write_1byte(struct ieee80211_hw *hw,
u16 offset, u8 value)
static void efuse_shadow_write_2byte(struct ieee80211_hw *hw,
u16 offset, u16 value)
static void efuse_shadow_write_4byte(struct ieee80211_hw *hw,
u16 offset, u32 value)
static int efuse_one_byte_read(struct ieee80211_hw *hw, u16 addr, u8 *data)
static int efuse_one_byte_write(struct ieee80211_hw *hw, u16 addr, u8 data)
static void efuse_read_all_map(struct ieee80211_hw *hw, u8 * efuse)
static void efuse_read_data_case1(struct ieee80211_hw *hw, u16 *efuse_addr,
u8 efuse_data, u8 offset, u8 *tmpdata,
u8 *readstate)
static int efuse_pg_packet_read(struct ieee80211_hw *hw, u8 offset, u8 *data)
static void efuse_write_data_case1(struct ieee80211_hw *hw, u16 *efuse_addr,
u8 efuse_data, u8 offset, int *continual,
u8 *write_state, struct pgpkt_struct *target_pkt,
int *repeat_times, int *result, u8 word_en)
static void efuse_write_data_case2(struct ieee80211_hw *hw, u16 *efuse_addr,
int *continual, u8 *write_state,
struct pgpkt_struct target_pkt,
int *repeat_times, int *result)
static int efuse_pg_packet_write(struct ieee80211_hw *hw,
u8 offset, u8 word_en, u8 *data)
static void efuse_word_enable_data_read(u8 word_en,
u8 *sourdata, u8 *targetdata)
static u8 efuse_word_enable_data_write(struct ieee80211_hw *hw,
u16 efuse_addr, u8 word_en, u8 *data)
static void efuse_power_switch(struct ieee80211_hw *hw, u8 write, u8 pwrstate)
static u16 efuse_get_current_size(struct ieee80211_hw *hw)
static u8 efuse_calculate_word_cnts(u8 word_en)
