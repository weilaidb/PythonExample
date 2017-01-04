typedef float FLOAT;
#define B0 1.0000000000000000000000
#define B1 1.3870398453221474618216
#define B2 1.3065629648763765278566
#define B3 1.1758756024193587169745
#define B4 1.0000000000000000000000
#define B5 0.7856949583871021812779
#define B6 0.5411961001461969843997
#define B7 0.2758993792829430123360
#define A4 0.70710678118654752438
#define A2 0.92387953251128675613
static const FLOAT prescale[64]=;
static inline void p8idct(int16_t data[64], FLOAT temp[64], uint8_t *dest, int stride, int x, int y, int type)
void ff_faanidct(int16_t block[64])
void ff_faanidct_add(uint8_t *dest, int line_size, int16_t block[64])
void ff_faanidct_put(uint8_t *dest, int line_size, int16_t block[64])
