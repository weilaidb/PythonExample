static uint32_t inverse(uint32_t v)
static void multiswap_init(const uint8_t keybuf[48], uint32_t keys[12])
static void multiswap_invert_keys(uint32_t keys[12])
static uint32_t multiswap_step(const uint32_t keys[12], uint32_t v)
static uint32_t multiswap_inv_step(const uint32_t keys[12], uint32_t v)
static uint64_t multiswap_enc(const uint32_t keys[12],
uint64_t key, uint64_t data)
static uint64_t multiswap_dec(const uint32_t keys[12],
uint64_t key, uint64_t data)
void ff_asfcrypt_dec(const uint8_t key[20], uint8_t *data, int len)
