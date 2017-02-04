#define ON2AVC_SUBFRAME_SIZE   1024
enum WindowTypes ;
typedef struct On2AVCContext  On2AVCContext;
on2avc_read_ms_info
on2avc_decode_band_types
on2avc_decode_band_scales
on2avc_scale
on2avc_decode_quads
get_egolomb
on2avc_decode_pairs
on2avc_read_channel_data
on2avc_apply_ms
zero_head_and_tail
pretwiddle
twiddle
CMUL1_R \
s[is + 0] * t[it + 0] - s[is + 1] * t[it + 1]
CMUL1_I \
s[is + 0] * t[it + 1] + s[is + 1] * t[it + 0]
CMUL2_R \
s[is + 0] * t[it + 0] + s[is + 1] * t[it + 1]
CMUL2_I \
s[is + 0] * t[it + 1] - s[is + 1] * t[it + 0]
CMUL0         \
dst[id]     = s0[is] * t0[it]     + s1[is] * t1[it]                \
+ s2[is] * t2[it]     + s3[is] * t3[it];               \
dst[id + 1] = s0[is] * t0[it + 1] + s1[is] * t1[it + 1]            \
+ s2[is] * t2[it + 1] + s3[is] * t3[it + 1];
CMUL1             \
*dst++ = CMUL1_R(s0, t0, is, it)                                   \
+ CMUL1_R(s1, t1, is, it)                                   \
+ CMUL1_R(s2, t2, is, it)                                   \
+ CMUL1_R(s3, t3, is, it);                                  \
*dst++ = CMUL1_I(s0, t0, is, it)                                   \
+ CMUL1_I(s1, t1, is, it)                                   \
+ CMUL1_I(s2, t2, is, it)                                   \
+ CMUL1_I(s3, t3, is, it);
CMUL2             \
*dst++ = CMUL2_R(s0, t0, is, it)                                   \
+ CMUL2_R(s1, t1, is, it)                                   \
+ CMUL2_R(s2, t2, is, it)                                   \
+ CMUL2_R(s3, t3, is, it);                                  \
*dst++ = CMUL2_I(s0, t0, is, it)                                   \
+ CMUL2_I(s1, t1, is, it)                                   \
+ CMUL2_I(s2, t2, is, it)                                   \
+ CMUL2_I(s3, t3, is, it);
combine_fft
wtf_end_512
wtf_end_1024
wtf_40
wtf_44
on2avc_reconstruct_channel_ext
on2avc_reconstruct_channel
on2avc_decode_subframe
on2avc_decode_frame
on2avc_free_vlcs
on2avc_decode_init
on2avc_decode_close
AVCodec ff_on2avc_decoder = ;
