extern "C"
IDeckLinkIterator *CreateDeckLinkIteratorInstance(void)
static char *dup_wchar_to_utf8(wchar_t *w)
#define DECKLINK_STR    OLECHAR *
#define DECKLINK_STRDUP dup_wchar_to_utf8
#define DECKLINK_FREE(s) SysFreeString(s)
#define DECKLINK_BOOL BOOL
#elif defined(__APPLE__)
static char *dup_cfstring_to_utf8(CFStringRef w)
#define DECKLINK_STR    const __CFString *
#define DECKLINK_STRDUP dup_cfstring_to_utf8
#define DECKLINK_FREE(s) free((void *) s)
#define DECKLINK_BOOL bool
#define DECKLINK_STR    const char *
#define DECKLINK_STRDUP av_strdup
#define DECKLINK_FREE(s) free((void *) s)
#define DECKLINK_BOOL bool
HRESULT ff_decklink_get_display_name(IDeckLink *This, const char **displayName)
static int decklink_select_input(AVFormatContext *avctx, BMDDeckLinkConfigurationID cfg_id)
int ff_decklink_set_format(AVFormatContext *avctx,
int width, int height,
int tb_num, int tb_den,
decklink_direction_t direction, int num)
int ff_decklink_set_format(AVFormatContext *avctx, decklink_direction_t direction, int num)
int ff_decklink_list_devices(AVFormatContext *avctx)
int ff_decklink_list_formats(AVFormatContext *avctx, decklink_direction_t direction)
void ff_decklink_cleanup(AVFormatContext *avctx)
int ff_decklink_init_device(AVFormatContext *avctx, const char* name)
