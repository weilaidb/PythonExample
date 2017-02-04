typedef struct CACAContext  CACAContext;
caca_write_trailer
list_drivers
DEFINE_LIST_DITHER                                 \
static void list_dither_## thing(CACAContext *c)                             \
DEFINE_LIST_DITHER(color, );
DEFINE_LIST_DITHER(charset, );
DEFINE_LIST_DITHER(algorithm, );
DEFINE_LIST_DITHER(antialias, );
caca_write_header
caca_write_packet
OFFSET offsetof(CACAContext,x)
#define ENC AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ,
, 0, 0, ENC },
, 0, 0, ENC },
, 0, 0, ENC },
,
,
,
,
,
,
,
};
static const AVClass caca_class = ;
AVOutputFormat ff_caca_muxer = ;
