#define AVDEVICE_DECKLINK_COMMON_H
class decklink_output_callback;
class decklink_input_callback;
typedef struct AVPacketQueue  AVPacketQueue;
struct decklink_ctx ;
typedef enum  decklink_direction_t;
#if BLACKMAGIC_DECKLINK_API_VERSION < 0x0a040000
typedef unsigned long buffercount_type;
typedef unsigned int buffercount_type;
IDeckLinkIterator *CreateDeckLinkIteratorInstance(void);
typedef uint32_t buffercount_type;
static const BMDAudioConnection decklink_audio_connection_map[] = ;
static const BMDVideoConnection decklink_video_connection_map[] = ;
HRESULT ff_decklink_get_display_name(IDeckLink *This, const char **displayName);
int ff_decklink_set_format(AVFormatContext *avctx, int width, int height, int tb_num, int tb_den, decklink_direction_t direction = DIRECTION_OUT, int num = 0);
int ff_decklink_set_format(AVFormatContext *avctx, decklink_direction_t direction, int num);
int ff_decklink_list_devices(AVFormatContext *avctx);
int ff_decklink_list_formats(AVFormatContext *avctx, decklink_direction_t direction = DIRECTION_OUT);
void ff_decklink_cleanup(AVFormatContext *avctx);
int ff_decklink_init_device(AVFormatContext *avctx, const char* name);
