#define AVCODEC_TIFF_COMMON_H
enum TiffTypes ;
static const uint8_t type_sizes[14] = ;
static const uint16_t ifd_tags[] = ;
int ff_tis_ifd(unsigned tag);
unsigned ff_tget_short(GetByteContext *gb, int le);
unsigned ff_tget_long(GetByteContext *gb, int le);
double   ff_tget_double(GetByteContext *gb, int le);
unsigned ff_tget(GetByteContext *gb, int type, int le);
char *ff_trationals2str(int *rp, int count, const char *sep);
char *ff_tlongs2str(int32_t *lp, int count, const char *sep);
char *ff_tdoubles2str(double *dp, int count, const char *sep);
char *ff_tshorts2str(int16_t *sp, int count, const char *sep);
int ff_tadd_rational_metadata(int count, const char *name, const char *sep,
GetByteContext *gb, int le, AVDictionary **metadata);
int ff_tadd_long_metadata(int count, const char *name, const char *sep,
GetByteContext *gb, int le, AVDictionary **metadata);
int ff_tadd_doubles_metadata(int count, const char *name, const char *sep,
GetByteContext *gb, int le, AVDictionary **metadata);
int ff_tadd_shorts_metadata(int count, const char *name, const char *sep,
GetByteContext *gb, int le, int is_signed, AVDictionary **metadata);
int ff_tadd_bytes_metadata(int count, const char *name, const char *sep,
GetByteContext *gb, int le, int is_signed, AVDictionary **metadata);
int ff_tadd_string_metadata(int count, const char *name,
GetByteContext *gb, int le, AVDictionary **metadata);
int ff_tdecode_header(GetByteContext *gb, int *le, int *ifd_offset);
int ff_tread_tag(GetByteContext *gb, int le, unsigned *tag, unsigned *type,
unsigned *count, int *next);
