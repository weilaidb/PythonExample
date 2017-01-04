#define AVFORMAT_OPTIONS_TABLE_H
#define OFFSET(x) offsetof(AVFormatContext,x)
#define DEFAULT 0
#define E AV_OPT_FLAG_ENCODING_PARAM
#define D AV_OPT_FLAG_DECODING_PARAM
static const AVOption avformat_options[] = ;
#undef E
#undef D
#undef DEFAULT
#undef OFFSET
