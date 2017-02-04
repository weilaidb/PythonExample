#define MAX_LINESIZE 2048
typedef struct  MicroDVDContext;
microdvd_probe
get_pts
get_duration
static const char *bom = ;
microdvd_read_header
ff_subtitles_queue_finalize(s, &microdvd->q);
if (has_real_fps)  else if (microdvd->frame_rate.num)
avpriv_set_pts_info(st, 64, pts_info.den, pts_info.num);
st->codecpar->codec_type = AVMEDIA_TYPE_SUBTITLE;
st->codecpar->codec_id   = AV_CODEC_ID_MICRODVD;
return 0;
}
microdvd_read_packet
microdvd_read_seek
microdvd_read_close
OFFSET offsetof(MicroDVDContext, x)
#define SD AV_OPT_FLAG_SUBTITLE_PARAM|AV_OPT_FLAG_DECODING_PARAM
static const AVOption microdvd_options[] = ;
static const AVClass microdvd_class = ;
AVInputFormat ff_microdvd_demuxer = ;
