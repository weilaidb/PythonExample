#define DEBUG_L1OIP_INIT	0x00010000
#define DEBUG_L1OIP_SOCKET	0x00020000
#define DEBUG_L1OIP_MGR		0x00040000
#define DEBUG_L1OIP_MSG		0x00080000
#define L1OIP_MAX_LEN		2048
#define L1OIP_MAX_PERFRAME	1400
#define L1OIP_KEEPALIVE		15
#define L1OIP_TIMEOUT		65
#define L1OIP_DEFAULTPORT	931
struct l1oip_chan ;
struct l1oip ;
extern int l1oip_law_to_4bit(u8 *data, int len, u8 *result, u32 *state);
extern int l1oip_4bit_to_law(u8 *data, int len, u8 *result);
extern int l1oip_alaw_to_ulaw(u8 *data, int len, u8 *result);
extern int l1oip_ulaw_to_alaw(u8 *data, int len, u8 *result);
extern void l1oip_4bit_free(void);
extern int l1oip_4bit_alloc(int ulaw);
