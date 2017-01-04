#define AVCODEC_VAAPI_ENCODE_H26X_H
#define write_u(pbc, width, value, name) put_bits(pbc, width, value)
#define write_ue(pbc, value, name)       set_ue_golomb(pbc, value)
#define write_se(pbc, value, name)       set_se_golomb(pbc, value)
#define u(width, ...) write_u(pbc, width, __VA_ARGS__)
#define ue(...)       write_ue(pbc, __VA_ARGS__)
#define se(...)       write_se(pbc, __VA_ARGS__)
int ff_vaapi_encode_h26x_nal_unit_to_byte_stream(uint8_t *dst, size_t *dst_len,
uint8_t *src, size_t src_len);
