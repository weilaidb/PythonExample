#define AVCODEC_VAAPI_ENCODE_H26X_H
write_u put_bits(pbc, width, value)
write_ue       set_ue_golomb(pbc, value)
write_se       set_se_golomb(pbc, value)
u write_u(pbc, width, __VA_ARGS__)
ue       write_ue(pbc, __VA_ARGS__)
se       write_se(pbc, __VA_ARGS__)
ff_vaapi_encode_h26x_nal_unit_to_byte_stream;
