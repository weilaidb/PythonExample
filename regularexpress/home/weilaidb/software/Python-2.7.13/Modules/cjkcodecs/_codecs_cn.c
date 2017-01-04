#undef hz
#define GBK_DECODE(dc1, dc2, assi) \
if ((dc1) == 0xa1 && (dc2) == 0xaa) (assi) = 0x2014; \
else if ((dc1) == 0xa8 && (dc2) == 0x44) (assi) = 0x2015; \
else if ((dc1) == 0xa1 && (dc2) == 0xa4) (assi) = 0x00b7; \
else TRYMAP_DEC(gb2312, assi, dc1 ^ 0x80, dc2 ^ 0x80); \
else TRYMAP_DEC(gbkext, assi, dc1, dc2);
#define GBK_ENCODE(code, assi) \
if ((code) == 0x2014) (assi) = 0xa1aa; \
else if ((code) == 0x2015) (assi) = 0xa844; \
else if ((code) == 0x00b7) (assi) = 0xa1a4; \
else if ((code) != 0x30fb && TRYMAP_ENC_COND(gbcommon, assi, code));
ENCODER(gb2312)
DECODER(gb2312)
ENCODER(gbk)
DECODER(gbk)
ENCODER(gb18030)
DECODER(gb18030)
ENCODER_INIT(hz)
ENCODER_RESET(hz)
return 0;
}
ENCODER(hz)
DECODER_INIT(hz)
DECODER_RESET(hz)
DECODER(hz)
BEGIN_MAPPINGS_LIST
MAPPING_DECONLY(gb2312)
MAPPING_DECONLY(gbkext)
MAPPING_ENCONLY(gbcommon)
MAPPING_ENCDEC(gb18030ext)
END_MAPPINGS_LIST
BEGIN_CODECS_LIST
CODEC_STATELESS(gb2312)
CODEC_STATELESS(gbk)
CODEC_STATELESS(gb18030)
CODEC_STATEFUL(hz)
END_CODECS_LIST
I_AM_A_MODULE_FOR(cn)
