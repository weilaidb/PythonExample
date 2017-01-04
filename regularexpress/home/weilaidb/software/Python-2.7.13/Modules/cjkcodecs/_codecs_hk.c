#define USING_IMPORTED_MAPS
static const encode_map *big5_encmap = NULL;
static const decode_map *big5_decmap = NULL;
CODEC_INIT(big5hkscs)
static const DBCHAR big5hkscs_pairenc_table[4] = ;
ENCODER(big5hkscs)
#define BH2S(c1, c2) (((c1) - 0x87) * (0xfe - 0x40 + 1) + ((c2) - 0x40))
DECODER(big5hkscs)
BEGIN_MAPPINGS_LIST
MAPPING_DECONLY(big5hkscs)
MAPPING_ENCONLY(big5hkscs_bmp)
MAPPING_ENCONLY(big5hkscs_nonbmp)
END_MAPPINGS_LIST
BEGIN_CODECS_LIST
CODEC_STATELESS_WINIT(big5hkscs)
END_CODECS_LIST
I_AM_A_MODULE_FOR(hk)
