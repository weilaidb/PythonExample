#define AVCODEC_H261_H
typedef struct H261Context  H261Context;
#define MB_TYPE_H261_FIL 0x800000
extern uint8_t ff_h261_rl_table_store[2][2 * MAX_RUN + MAX_LEVEL + 3];
extern const uint8_t ff_h261_mba_code[35];
extern const uint8_t ff_h261_mba_bits[35];
extern const uint8_t ff_h261_mtype_code[10];
extern const uint8_t ff_h261_mtype_bits[10];
extern const int     ff_h261_mtype_map[10];
extern const uint8_t ff_h261_mv_tab[17][2];
extern const uint8_t ff_h261_cbp_tab[63][2];
extern RLTable ff_h261_rl_tcoeff;
ff_h261_loop_filter;
ff_h261_common_init;
ff_h261_get_picture_format;
ff_h261_reorder_mb_index;
ff_h261_encode_mb;
ff_h261_encode_picture_header;
ff_h261_encode_init;
