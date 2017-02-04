#define BITSTREAM_WRITER_LE
UPDATE_WEIGHT \
if ((source) && (result))
APPLY_WEIGHT_F ((((((sample) & 0xffff) * (weight)) >> 9) + \
((((sample) & ~0xffff) >> 9) * (weight)) + 1) >> 1)
APPLY_WEIGHT_I (((weight) * (sample) + 512) >> 10)
APPLY_WEIGHT ((sample) != (short) (sample) ? \
APPLY_WEIGHT_F(weight, sample) : APPLY_WEIGHT_I (weight, sample))
CLEAR memset(&destin, 0, sizeof(destin));
#define SHIFT_LSB       13
#define SHIFT_MASK      (0x1FU << SHIFT_LSB)
#define MAG_LSB         18
#define MAG_MASK        (0x1FU << MAG_LSB)
#define SRATE_LSB       23
#define SRATE_MASK      (0xFU << SRATE_LSB)
#define EXTRA_TRY_DELTAS     1
#define EXTRA_ADJUST_DELTAS  2
#define EXTRA_SORT_FIRST     4
#define EXTRA_BRANCHES       8
#define EXTRA_SORT_LAST     16
typedef struct WavPackExtraInfo  WavPackExtraInfo;
typedef struct WavPackWords  WavPackWords;
typedef struct WavPackEncodeContext  WavPackEncodeContext;
wavpack_encode_init
shift_mono
shift_stereo
#define FLOAT_SHIFT_ONES 1
#define FLOAT_SHIFT_SAME 2
#define FLOAT_SHIFT_SENT 4
#define FLOAT_ZEROS_SENT 8
#define FLOAT_NEG_ZEROS  0x10
#define FLOAT_EXCEPTIONS 0x20
get_mantissa     ((f) & 0x7fffff)
get_exponent     (((f) >> 23) & 0xff)
get_sign         (((f) >> 31) & 0x1)
process_float
scan_float
scan_int23
scan_int32
store_weight
restore_weight
log2s
decorr_mono
reverse_mono_decorr
log2sample
log2mono
log2stereo
decorr_mono_buffer
recurse_mono
sort_mono
delta_mono
allocate_buffers2
allocate_buffers
analyze_mono
scan_word
wv_mono
decorr_stereo
reverse_decorr
decorr_stereo_quick
decorr_stereo_buffer
sort_stereo
delta_stereo
recurse_stereo
analyze_stereo
wv_stereo
count_bits ( \
(av) < (1 << 8) ? nbits_table[av] : \
( \
(av) < (1 << 16) ? nbits_table[(av) >> 8] + 8 : \
((av) < (1 << 24) ? nbits_table[(av) >> 16] + 16 : nbits_table[(av) >> 24] + 24) \
) \
)
encode_flush
wavpack_encode_sample
pack_int32
pack_float_sample
pack_float
decorr_stereo_pass2
update_weight_d2 \
if (source && result) \
weight -= (((source ^ result) >> 29) & 4) - 2;
update_weight_clip_d2 \
if (source && result)
decorr_stereo_pass_id2
put_metadata_block
wavpack_encode_block
fill_buffer
set_samplerate
wavpack_encode_frame
wavpack_encode_close
OFFSET offsetof(WavPackEncodeContext, x)
#define FLAGS AV_OPT_FLAG_ENCODING_PARAM | AV_OPT_FLAG_AUDIO_PARAM
static const AVOption options[] = ;
static const AVClass wavpack_encoder_class = ;
AVCodec ff_wavpack_encoder = ;
