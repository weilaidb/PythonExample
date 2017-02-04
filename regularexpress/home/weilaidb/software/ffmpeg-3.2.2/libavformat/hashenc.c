struct HashContext ;
OFFSET offsetof(struct HashContext, x)
#define ENC AV_OPT_FLAG_ENCODING_PARAM
#if CONFIG_HASH_MUXER || CONFIG_FRAMEHASH_MUXER
static const AVOption hash_options[] = ,
,
,
};
#if CONFIG_MD5_MUXER || CONFIG_FRAMEMD5_MUXER
static const AVOption md5_options[] = ,
,
,
};
#if CONFIG_HASH_MUXER || CONFIG_MD5_MUXER
hash_write_header
hash_write_packet
hash_write_trailer
#if CONFIG_HASH_MUXER
static const AVClass hashenc_class = ;
AVOutputFormat ff_hash_muxer = ;
#if CONFIG_MD5_MUXER
static const AVClass md5enc_class = ;
AVOutputFormat ff_md5_muxer = ;
#if CONFIG_FRAMEHASH_MUXER || CONFIG_FRAMEMD5_MUXER
framehash_print_extradata
framehash_write_header
framehash_write_packet
framehash_write_trailer
#if CONFIG_FRAMEHASH_MUXER
static const AVClass framehash_class = ;
AVOutputFormat ff_framehash_muxer = ;
#if CONFIG_FRAMEMD5_MUXER
static const AVClass framemd5_class = ;
AVOutputFormat ff_framemd5_muxer = ;
