#define AA_MAGIC 1469084982
#define MAX_CODEC_SECOND_SIZE 3982
#define MAX_TOC_ENTRIES 16
#define MAX_DICTIONARY_ENTRIES 128
#define TEA_BLOCK_SIZE 8
typedef struct AADemuxContext  AADemuxContext;
static int get_second_size(char *codec_name)
static int aa_read_header(AVFormatContext *s)
static int aa_read_packet(AVFormatContext *s, AVPacket *pkt)
static int aa_probe(AVProbeData *p)
static int aa_read_close(AVFormatContext *s)
#define OFFSET(x) offsetof(AADemuxContext, x)
static const AVOption aa_options[] = ;
static const AVClass aa_class = ;
AVInputFormat ff_aa_demuxer = ;
