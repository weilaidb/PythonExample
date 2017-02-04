extern
*CreateDeckLinkIteratorInstance
*dup_wchar_to_utf8
#define DECKLINK_STR    OLECHAR *
#define DECKLINK_STRDUP dup_wchar_to_utf8
DECKLINK_FREE SysFreeString(s)
#define DECKLINK_BOOL BOOL
defined
*dup_cfstring_to_utf8
#define DECKLINK_STR    const __CFString *
#define DECKLINK_STRDUP dup_cfstring_to_utf8
DECKLINK_FREE free((void *) s)
#define DECKLINK_BOOL bool
#define DECKLINK_STR    const char *
#define DECKLINK_STRDUP av_strdup
DECKLINK_FREE free((void *) s)
#define DECKLINK_BOOL bool
ff_decklink_get_display_name
decklink_select_input
ff_decklink_set_format
ff_decklink_set_format
ff_decklink_list_devices
ff_decklink_list_formats
ff_decklink_cleanup
ff_decklink_init_device
