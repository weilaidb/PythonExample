RGBA (((unsigned)(a) << 24) | ((r) << 16) | ((g) << 8) | (b))
#define MAX_EPOCH_PALETTES 8
#define MAX_EPOCH_OBJECTS  64
#define MAX_OBJECT_REFS    2
enum SegmentType ;
typedef struct PGSSubObjectRef  PGSSubObjectRef;
typedef struct PGSSubPresentation  PGSSubPresentation;
typedef struct PGSSubObject  PGSSubObject;
typedef struct PGSSubObjects  PGSSubObjects;
typedef struct PGSSubPalette  PGSSubPalette;
typedef struct PGSSubPalettes  PGSSubPalettes;
typedef struct PGSSubContext  PGSSubContext;
flush_cache
find_object
find_palette
init_decoder
close_decoder
decode_rle
parse_object_segment
parse_palette_segment
parse_presentation_segment
display_end_segment
decode
OFFSET offsetof(PGSSubContext, x)
#define SD AV_OPT_FLAG_SUBTITLE_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass pgsdec_class = ;
AVCodec ff_pgssub_decoder = ;
