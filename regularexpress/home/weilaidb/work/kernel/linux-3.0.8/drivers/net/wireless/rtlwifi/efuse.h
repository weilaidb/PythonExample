#define __RTL_EFUSE_H_
#define EFUSE_IC_ID_OFFSET		506
#define EFUSE_REAL_CONTENT_LEN		512
#define EFUSE_MAP_LEN			128
#define EFUSE_MAX_WORD_UNIT		4
#define EFUSE_INIT_MAP			0
#define EFUSE_MODIFY_MAP		1
#define PG_STATE_HEADER			0x01
#define PG_STATE_WORD_0			0x02
#define PG_STATE_WORD_1			0x04
#define PG_STATE_WORD_2			0x08
#define PG_STATE_WORD_3			0x10
#define PG_STATE_DATA			0x20
#define PG_SWBYTE_H			0x01
#define PG_SWBYTE_L			0x02
#define _POWERON_DELAY_
#define _PRE_EXECUTE_READ_CMD_
#define EFUSE_REPEAT_THRESHOLD_		3
#define EFUSE_ERROE_HANDLE		1
struct efuse_map ;
struct pgpkt_struct ;
enum efuse_data_item ;
enum ;
struct efuse_priv ;
extern void read_efuse_byte(struct ieee80211_hw *hw, u16 _offset, u8 *pbuf);
extern void efuse_initialize(struct ieee80211_hw *hw);
extern u8 efuse_read_1byte(struct ieee80211_hw *hw, u16 address);
extern void efuse_write_1byte(struct ieee80211_hw *hw, u16 address, u8 value);
extern void read_efuse(struct ieee80211_hw *hw, u16 _offset,
u16 _size_byte, u8 *pbuf);
extern void efuse_shadow_read(struct ieee80211_hw *hw, u8 type,
u16 offset, u32 *value);
extern void efuse_shadow_write(struct ieee80211_hw *hw, u8 type,
u16 offset, u32 value);
extern bool efuse_shadow_update(struct ieee80211_hw *hw);
extern bool efuse_shadow_update_chk(struct ieee80211_hw *hw);
extern void rtl_efuse_shadow_map_update(struct ieee80211_hw *hw);
extern void efuse_force_write_vendor_Id(struct ieee80211_hw *hw);
extern void efuse_re_pg_section(struct ieee80211_hw *hw, u8 section_idx);
