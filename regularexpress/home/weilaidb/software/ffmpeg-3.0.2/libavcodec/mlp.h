#define AVCODEC_MLP_H
#define MAX_MATRIX_CHANNEL_MLP      5
#define MAX_MATRIX_CHANNEL_TRUEHD   7
#define MAX_CHANNELS                8
#define MAX_MATRICES_MLP            6
#define MAX_MATRICES_TRUEHD         8
#define MAX_MATRICES                8
#define MAX_SUBSTREAMS      4
#define MAX_RATEFACTOR      4
#define MAX_SAMPLERATE      (MAX_RATEFACTOR * 48000)
#define MAX_BLOCKSIZE       (40 * MAX_RATEFACTOR)
#define MAX_BLOCKSIZE_POW2  (64 * MAX_RATEFACTOR)
#define NUM_FILTERS         2
#define MAX_FIR_ORDER       8
#define MAX_IIR_ORDER       4
#define END_OF_STREAM       0xd234d234
#define FIR 0
#define IIR 1
typedef struct FilterParams  FilterParams;
typedef struct ChannelParams  ChannelParams;
extern const uint8_t ff_mlp_huffman_tables[3][18][2];
uint8_t  ff_mlp_checksum8 (const uint8_t *buf, unsigned int buf_size);
uint16_t ff_mlp_checksum16(const uint8_t *buf, unsigned int buf_size);
uint8_t ff_mlp_restart_checksum(const uint8_t *buf, unsigned int bit_size);
uint8_t ff_mlp_calculate_parity(const uint8_t *buf, unsigned int buf_size);
void ff_mlp_init_crc(void);
static inline uint8_t xor_32_to_8(uint32_t value)
typedef enum THDChannelModifier  THDChannelModifier;
