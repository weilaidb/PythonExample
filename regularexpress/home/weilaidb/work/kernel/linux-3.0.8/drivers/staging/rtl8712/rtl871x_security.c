#define  _RTL871X_SECURITY_C_
#define CRC32_POLY 0x04c11db7
struct arc4context ;
static void arcfour_init(struct arc4context *parc4ctx, u8 * key, u32 key_len)
static u32 arcfour_byte(struct arc4context *parc4ctx)
static void arcfour_encrypt(struct arc4context	*parc4ctx,
u8 *dest, u8 *src, u32 len)
static sint bcrc32initialized;
static u32 crc32_table[256];
static u8 crc32_reverseBit(u8 data)
static void crc32_init(void)
static u32 getcrc32(u8 *buf, u32 len)
void r8712_wep_encrypt(struct _adapter *padapter, u8 *pxmitframe)
void r8712_wep_decrypt(struct _adapter  *padapter, u8 *precvframe)
static u32 secmicgetuint32(u8 *p)
static void secmicputuint32(u8 *p, u32 val)
static void secmicclear(struct mic_data *pmicdata)
void r8712_secmicsetkey(struct mic_data *pmicdata, u8 * key)
static void secmicappendbyte(struct mic_data *pmicdata, u8 b)
void r8712_secmicappend(struct mic_data *pmicdata, u8 * src, u32 nbytes)
void r8712_secgetmic(struct mic_data *pmicdata, u8 *dst)
void seccalctkipmic(u8 *key, u8 *header, u8 *data, u32 data_len, u8 *mic_code,
u8 pri)
#define RotR1(v16)   ((((v16) >> 1) & 0x7FFF) ^ (((v16) & 1) << 15))
#define   Lo8(v16)   ((u8)((v16) & 0x00FF))
#define   Hi8(v16)   ((u8)(((v16) >> 8) & 0x00FF))
#define  Lo16(v32)   ((u16)((v32) & 0xFFFF))
#define  Hi16(v32)   ((u16)(((v32) >> 16) & 0xFFFF))
#define  Mk16(hi, lo) ((lo) ^ (((u16)(hi)) << 8))
#define  TK16(N)  Mk16(tk[2 * (N) + 1], tk[2 * (N)])
#define _S_(v16)  (Sbox1[0][Lo8(v16)] ^ Sbox1[1][Hi8(v16)])
#define PHASE1_LOOP_CNT   8
#define TA_SIZE           6
#define TK_SIZE          16
#define P1K_SIZE         10
#define RC4_KEY_SIZE     16
static const unsigned short Sbox1[2][256] = ;
static void phase1(u16 *p1k, const u8 *tk, const u8 *ta, u32 iv32)
static void phase2(u8 *rc4key, const u8 *tk, const u16 *p1k, u16 iv16)
u32 r8712_tkip_encrypt(struct _adapter *padapter, u8 *pxmitframe)
u32 r8712_tkip_decrypt(struct _adapter *padapter, u8 *precvframe)
#define MAX_MSG_SIZE	2048
static const u8 sbox_table[256] = ;
static void xor_128(u8 *a, u8 *b, u8 *out)
static void xor_32(u8 *a, u8 *b, u8 *out)
static u8 sbox(u8 a)
static void next_key(u8 *key, sint round)
static void byte_sub(u8 *in, u8 *out)
static void shift_row(u8 *in, u8 *out)
static void mix_column(u8 *in, u8 *out)
static void aes128k128d(u8 *key, u8 *data, u8 *ciphertext)
static void construct_mic_iv(u8 *mic_iv, sint qc_exists, sint a4_exists,
u8 *mpdu, uint payload_length, u8 *pn_vector)
static void construct_mic_header1(u8 *mic_header1, sint header_length, u8 *mpdu)
static void construct_mic_header2(u8 *mic_header2, u8 *mpdu, sint a4_exists,
sint qc_exists)
static void construct_ctr_preload(u8 *ctr_preload, sint a4_exists, sint qc_exists,
u8 *mpdu, u8 *pn_vector, sint c)
static void bitwise_xor(u8 *ina, u8 *inb, u8 *out)
static sint aes_cipher(u8 *key, uint	hdrlen,
u8 *pframe, uint plen)
u32 r8712_aes_encrypt(struct _adapter *padapter, u8 *pxmitframe)
static sint aes_decipher(u8 *key, uint	hdrlen,
u8 *pframe, uint plen)
u32 r8712_aes_decrypt(struct _adapter *padapter, u8 *precvframe)
void r8712_use_tkipkey_handler(void *FunctionContext)
