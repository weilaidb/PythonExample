#define _RTL8712_EFUSE_C_
static int efuse_available_max_size = EFUSE_MAX_SIZE - 3;
static void efuse_reg_ctrl(struct _adapter *padapter, u8 bPowerOn)
u8 r8712_efuse_reg_init(struct _adapter *padapter)
void r8712_efuse_reg_uninit(struct _adapter *padapter)
static u8 efuse_one_byte_read(struct _adapter *padapter, u16 addr, u8 *data)
static u8 efuse_one_byte_write(struct _adapter *padapter, u16 addr, u8 data)
static u8 efuse_one_byte_rw(struct _adapter *padapter, u8 bRead, u16 addr,
u8 *data)
static u8 efuse_is_empty(struct _adapter *padapter, u8 *empty)
void r8712_efuse_change_max_size(struct _adapter *padapter)
int r8712_efuse_get_max_size(struct _adapter *padapter)
static u8 calculate_word_cnts(const u8 word_en)
static void pgpacket_copy_data(const u8 word_en, const u8 *sourdata,
u8 *targetdata)
u16 r8712_efuse_get_current_size(struct _adapter *padapter)
u8 r8712_efuse_pg_packet_read(struct _adapter *padapter, u8 offset, u8 *data)
static u8 fix_header(struct _adapter *padapter, u8 header, u16 header_addr)
u8 r8712_efuse_pg_packet_write(struct _adapter *padapter, const u8 offset,
const u8 word_en, const u8 *data)
u8 r8712_efuse_access(struct _adapter *padapter, u8 bRead, u16 start_addr,
u16 cnts, u8 *data)
u8 r8712_efuse_map_read(struct _adapter *padapter, u16 addr, u16 cnts, u8 *data)
u8 r8712_efuse_map_write(struct _adapter *padapter, u16 addr, u16 cnts,
u8 *data)
