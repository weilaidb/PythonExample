#define SCREEN_ROWS 15
#define SCREEN_COLUMNS 32
#define SET_FLAG(var, val)   ( (var) |=   ( 1 << (val)) )
#define UNSET_FLAG(var, val) ( (var) &=  ~( 1 << (val)) )
#define CHECK_FLAG(var, val) ( (var) &    ( 1 << (val)) )
static const AVRational ass_tb = ;
enum cc_mode ;
enum cc_color_code ;
enum cc_font ;
static const unsigned char pac2_attribs[32][3] =
;
struct Screen ;
typedef struct CCaptionSubContext  CCaptionSubContext;
static av_cold int init_decoder(AVCodecContext *avctx)
static av_cold int close_decoder(AVCodecContext *avctx)
static void flush_decoder(AVCodecContext *avctx)
static int write_char(CCaptionSubContext *ctx, struct Screen *screen, char ch)
static int validate_cc_data_pair(uint8_t *cc_data_pair)
static struct Screen *get_writing_screen(CCaptionSubContext *ctx)
static void roll_up(CCaptionSubContext *ctx)
static int capture_screen(CCaptionSubContext *ctx)
static int reap_screen(CCaptionSubContext *ctx, int64_t pts)
static void handle_textattr(CCaptionSubContext *ctx, uint8_t hi, uint8_t lo)
static void handle_pac(CCaptionSubContext *ctx, uint8_t hi, uint8_t lo)
static void handle_edm(CCaptionSubContext *ctx, int64_t pts)
static void handle_eoc(CCaptionSubContext *ctx, int64_t pts)
static void handle_delete_end_of_row(CCaptionSubContext *ctx, char hi, char lo)
static void handle_char(CCaptionSubContext *ctx, char hi, char lo, int64_t pts)
static void process_cc608(CCaptionSubContext *ctx, int64_t pts, uint8_t hi, uint8_t lo)
static int decode(AVCodecContext *avctx, void *data, int *got_sub, AVPacket *avpkt)
#define OFFSET(x) offsetof(CCaptionSubContext, x)
#define SD AV_OPT_FLAG_SUBTITLE_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass ccaption_dec_class = ;
AVCodec ff_ccaption_decoder = ;
