#define MODPLUG_STATIC
typedef struct ModPlugContext  ModPlugContext;
static const char * const var_names[] = ;
enum var_name ;
#define FF_MODPLUG_MAX_FILE_SIZE (100 * 1<<20)
#define FF_MODPLUG_DEF_FILE_SIZE (  5 * 1<<20)
#define OFFSET(x) offsetof(ModPlugContext, x)
#define D AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
#define SET_OPT_IF_REQUESTED(libopt, opt, flag) do  while (0)
#define ADD_META_MULTIPLE_ENTRIES(entry_name, fname) do  while (0)
static int modplug_load_metadata(AVFormatContext *s)
#define AUDIO_PKT_SIZE 512
static int modplug_read_header(AVFormatContext *s)
static void write_text(uint8_t *dst, const char *s, int linesize, int x, int y)
#define PRINT_INFO(line, name, idvalue) do  while (0)
static int modplug_read_packet(AVFormatContext *s, AVPacket *pkt)
static int modplug_read_close(AVFormatContext *s)
static int modplug_read_seek(AVFormatContext *s, int stream_idx, int64_t ts, int flags)
static const char modplug_extensions[] = "669,abc,amf,ams,dbm,dmf,dsm,far,it,mdl,med,mid,mod,mt2,mtm,okt,psm,ptm,s3m,stm,ult,umx,xm,itgz,itr,itz,mdgz,mdr,mdz,s3gz,s3r,s3z,xmgz,xmr,xmz";
static int modplug_probe(AVProbeData *p)
static const AVClass modplug_class = ;
AVInputFormat ff_libmodplug_demuxer = ;
