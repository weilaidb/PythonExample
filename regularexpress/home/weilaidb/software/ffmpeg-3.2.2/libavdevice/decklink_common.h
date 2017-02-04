#define AVDEVICE_DECKLINK_COMMON_H
class decklink_output_callback;
class decklink_input_callback;
typedef struct AVPacketQueue  AVPacketQueue;
struct decklink_ctx ;
typedef enum  decklink_direction_t;
#if BLACKMAGIC_DECKLINK_API_VERSION < 0x0a040000
typedef unsigned long buffercount_type;
typedef unsigned int buffercount_type;
*CreateDeckLinkIteratorInstance;
typedef uint32_t buffercount_type;
static const BMDAudioConnection decklink_audio_connection_map[] = ;
static const BMDVideoConnection decklink_video_connection_map[] = ;
ff_decklink_get_display_name;
ff_decklink_set_format;
ff_decklink_set_format;
ff_decklink_list_devices;
ff_decklink_list_formats;
ff_decklink_cleanup;
ff_decklink_init_device;
