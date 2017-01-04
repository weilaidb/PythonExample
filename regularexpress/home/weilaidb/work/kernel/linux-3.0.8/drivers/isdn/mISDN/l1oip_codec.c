static u8 *table_com;
static u16 *table_dec;
static u8 alaw_to_ulaw[256] =
;
static u8 ulaw_to_alaw[256] =
;
static u8 alaw_to_4bit[256] = ;
static u8 _4bit_to_alaw[16] = ;
static u8 ulaw_to_4bit[256] = ;
static u8 _4bit_to_ulaw[16] = ;
int
l1oip_law_to_4bit(u8 *data, int len, u8 *result, u32 *state)
int
l1oip_4bit_to_law(u8 *data, int len, u8 *result)
int
l1oip_alaw_to_ulaw(u8 *data, int len, u8 *result)
int
l1oip_ulaw_to_alaw(u8 *data, int len, u8 *result)
void
l1oip_4bit_free(void)
int
l1oip_4bit_alloc(int ulaw)
