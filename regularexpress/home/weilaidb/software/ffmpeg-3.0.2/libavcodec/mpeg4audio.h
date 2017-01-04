#define AVCODEC_MPEG4AUDIO_H
typedef struct MPEG4AudioConfig  MPEG4AudioConfig;
extern av_export const int avpriv_mpeg4audio_sample_rates[16];
extern const uint8_t ff_mpeg4audio_channels[8];
int avpriv_mpeg4audio_get_config(MPEG4AudioConfig *c, const uint8_t *buf,
int bit_size, int sync_extension);
enum AudioObjectType ;
#define MAX_PCE_SIZE 320
int avpriv_copy_pce_data(PutBitContext *pb, GetBitContext *gb);
