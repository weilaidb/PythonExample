#define X264_CHECK_OFFSET(s, m, o) struct check_##s##_##m \
X264_CHECK_OFFSET(x264_cabac_t, i_low,               CABAC_I_LOW);
X264_CHECK_OFFSET(x264_cabac_t, i_range,             CABAC_I_RANGE);
X264_CHECK_OFFSET(x264_cabac_t, i_queue,             CABAC_I_QUEUE);
X264_CHECK_OFFSET(x264_cabac_t, i_bytes_outstanding, CABAC_I_BYTES_OUTSTANDING);
X264_CHECK_OFFSET(x264_cabac_t, p_start,             CABAC_P_START);
X264_CHECK_OFFSET(x264_cabac_t, p,                   CABAC_P);
X264_CHECK_OFFSET(x264_cabac_t, p_end,               CABAC_P_END);
X264_CHECK_OFFSET(x264_cabac_t, f8_bits_encoded,     CABAC_F8_BITS_ENCODED);
X264_CHECK_OFFSET(x264_cabac_t, state,               CABAC_STATE);
