static int parse_config_ALS(GetBitContext *gb, MPEG4AudioConfig *c)
const int avpriv_mpeg4audio_sample_rates[16] = ;
const uint8_t ff_mpeg4audio_channels[8] = ;
static inline int get_object_type(GetBitContext *gb)
static inline int get_sample_rate(GetBitContext *gb, int *index)
int avpriv_mpeg4audio_get_config(MPEG4AudioConfig *c, const uint8_t *buf,
int bit_size, int sync_extension)
static av_always_inline unsigned int copy_bits(PutBitContext *pb,
GetBitContext *gb,
int bits)
int avpriv_copy_pce_data(PutBitContext *pb, GetBitContext *gb)
