typedef struct ASTMuxContext  ASTMuxContext;
#define CHECK_LOOP(type) \
if (ast->loop ## type > 0)
static int ast_write_header(AVFormatContext *s)
static int ast_write_packet(AVFormatContext *s, AVPacket *pkt)
static int ast_write_trailer(AVFormatContext *s)
#define OFFSET(obj) offsetof(ASTMuxContext, obj)
static const AVOption options[] = ;
static const AVClass ast_muxer_class = ;
AVOutputFormat ff_ast_muxer = ;
