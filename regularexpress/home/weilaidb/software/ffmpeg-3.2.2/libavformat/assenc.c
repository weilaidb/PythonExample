typedef struct DialogueLine  DialogueLine;
typedef struct ASSContext  ASSContext;
static int write_header(AVFormatContext *s)
static void purge_dialogues(AVFormatContext *s, int force)
static void insert_dialogue(ASSContext *ass, DialogueLine *dialogue)
static int write_packet(AVFormatContext *s, AVPacket *pkt)
static int write_trailer(AVFormatContext *s)
#define OFFSET(x) offsetof(ASSContext, x)
#define E AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass ass_class = ;
AVOutputFormat ff_ass_muxer = ;
