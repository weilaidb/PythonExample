const AVCodecTag ff_mp4_obj_type[] = ;
const AVCodecTag ff_codec_movvideo_tags[] = ;
const AVCodecTag ff_codec_movaudio_tags[] = ;
const AVCodecTag ff_codec_movsubtitle_tags[] = ;
static const char mov_mdhd_language_map[][4] = ;
int ff_mov_iso639_to_lang(const char lang[4], int mp4)
int ff_mov_lang_to_iso639(unsigned code, char to[4])
int ff_mp4_read_descr_len(AVIOContext *pb)
int ff_mp4_read_descr(AVFormatContext *fc, AVIOContext *pb, int *tag)
void ff_mp4_parse_es_descr(AVIOContext *pb, int *es_id)
static const AVCodecTag mp4_audio_types[] = ;
int ff_mp4_read_dec_config_descr(AVFormatContext *fc, AVStream *st, AVIOContext *pb)
typedef struct MovChannelLayout  MovChannelLayout;
static const MovChannelLayout mov_channel_layout[] = ;
void ff_mov_write_chan(AVIOContext *pb, int64_t channel_layout)
const struct AVCodecTag *avformat_get_mov_video_tags(void)
const struct AVCodecTag *avformat_get_mov_audio_tags(void)
