#define AVFORMAT_RMSIPR_H
extern const unsigned char ff_sipr_subpk_size[4];
void ff_rm_reorder_sipr_data(uint8_t *buf, int sub_packet_h, int framesize);
