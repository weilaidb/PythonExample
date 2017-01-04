#define AVCODEC_AMR_H
typedef uint16_t R_TABLE_TYPE;
typedef uint8_t R_TABLE_TYPE;
static inline void ff_amr_bit_reorder(uint16_t *out, int size,
const uint8_t *data,
const R_TABLE_TYPE *ord_table)
