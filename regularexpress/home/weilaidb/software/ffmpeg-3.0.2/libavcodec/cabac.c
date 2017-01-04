const uint8_t ff_h264_cabac_tables[512 + 4*2*64 + 4*64 + 63] = ;
void ff_init_cabac_encoder(CABACContext *c, uint8_t *buf, int buf_size)
int ff_init_cabac_decoder(CABACContext *c, const uint8_t *buf, int buf_size)
#define SIZE 10240
static inline void put_cabac_bit(CABACContext *c, int b)
static inline void renorm_cabac_encoder(CABACContext *c)
static void put_cabac(CABACContext *c, uint8_t * const state, int bit)
static void put_cabac_bypass(CABACContext *c, int bit)
static int put_cabac_terminate(CABACContext *c, int bit)
int main(void)
