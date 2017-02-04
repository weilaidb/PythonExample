#define AVFORMAT_OGGDEC_H
struct ogg_codec ;
struct ogg_stream ;
struct ogg_state ;
struct ogg ;
#define OGG_FLAG_CONT 1
#define OGG_FLAG_BOS  2
#define OGG_FLAG_EOS  4
#define OGG_NOGRANULE_VALUE (-1ull)
extern const struct ogg_codec ff_celt_codec;
extern const struct ogg_codec ff_daala_codec;
extern const struct ogg_codec ff_dirac_codec;
extern const struct ogg_codec ff_flac_codec;
extern const struct ogg_codec ff_ogm_audio_codec;
extern const struct ogg_codec ff_ogm_old_codec;
extern const struct ogg_codec ff_ogm_text_codec;
extern const struct ogg_codec ff_ogm_video_codec;
extern const struct ogg_codec ff_old_dirac_codec;
extern const struct ogg_codec ff_old_flac_codec;
extern const struct ogg_codec ff_opus_codec;
extern const struct ogg_codec ff_skeleton_codec;
extern const struct ogg_codec ff_speex_codec;
extern const struct ogg_codec ff_theora_codec;
extern const struct ogg_codec ff_vorbis_codec;
extern const struct ogg_codec ff_vp8_codec;
ff_vorbis_comment;
ff_vorbis_stream_comment;
static inline int
ogg_find_stream (struct ogg * ogg, int serial)
static inline uint64_t
ogg_gptopts (AVFormatContext * s, int i, uint64_t gp, int64_t *dts)
