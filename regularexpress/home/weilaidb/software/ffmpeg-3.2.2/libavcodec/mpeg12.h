#define AVCODEC_MPEG12_H
extern uint8_t ff_mpeg12_static_rl_table_store[2][2][2*MAX_RUN + MAX_LEVEL + 3];
ff_mpeg12_common_init;
decode_dc
ff_mpeg1_decode_block_intra;
ff_mpeg1_clean_buffers;
ff_mpeg1_find_frame_end;
ff_mpeg1_encode_picture_header;
ff_mpeg1_encode_mb;
ff_mpeg1_encode_init;
ff_mpeg1_encode_slice_header;
