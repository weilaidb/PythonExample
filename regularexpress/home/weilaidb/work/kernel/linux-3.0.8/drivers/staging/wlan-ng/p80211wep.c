#define WEP_KEY(x)       (((x) & 0xC0) >> 6)
static const u32 wep_crc32_table[256] = ;
int wep_change_key(wlandevice_t *wlandev, int keynum, u8 *key, int keylen)
int wep_decrypt(wlandevice_t *wlandev, u8 *buf, u32 len, int key_override,
u8 *iv, u8 *icv)
int wep_encrypt(wlandevice_t *wlandev, u8 *buf, u8 *dst, u32 len, int keynum,
u8 *iv, u8 *icv)
