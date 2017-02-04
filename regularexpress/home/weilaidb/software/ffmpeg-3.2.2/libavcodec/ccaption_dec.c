#define SCREEN_ROWS 15
#define SCREEN_COLUMNS 32
SET_FLAG   ( (var) |=   ( 1 << (val)) )
UNSET_FLAG ( (var) &=  ~( 1 << (val)) )
CHECK_FLAG ( (var) &    ( 1 << (val)) )
static const AVRational ms_tb = ;
enum cc_mode ;
enum cc_color_code ;
enum cc_font ;
enum cc_charset ;
static const char *charset_overrides[4][128] =
;
static const unsigned char pac2_attribs[32][3] =
;
struct Screen ;
typedef struct CCaptionSubContext  CCaptionSubContext;
init_decoder
close_decoder
flush_decoder
write_char
validate_cc_data_pair
*get_writing_screen
roll_up
capture_screen
reap_screen
handle_textattr
handle_pac
handle_edm
handle_eoc
handle_delete_end_of_row
handle_char
process_cc608
decode
OFFSET offsetof(CCaptionSubContext, x)
#define SD AV_OPT_FLAG_SUBTITLE_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass ccaption_dec_class = ;
AVCodec ff_ccaption_decoder = ;
