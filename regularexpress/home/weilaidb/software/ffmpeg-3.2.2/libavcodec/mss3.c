#define HEADER_SIZE 27
#define MODEL2_SCALE       13
#define MODEL_SCALE        15
#define MODEL256_SEC_SCALE  9
typedef struct Model2  Model2;
typedef struct Model  Model;
typedef struct Model256  Model256;
#define RAC_BOTTOM 0x01000000
typedef struct RangeCoder  RangeCoder;
enum BlockType ;
typedef struct BlockTypeContext  BlockTypeContext;
typedef struct FillBlockCoder  FillBlockCoder;
typedef struct ImageBlockCoder  ImageBlockCoder;
typedef struct DCTBlockCoder  DCTBlockCoder;
typedef struct HaarBlockCoder  HaarBlockCoder;
typedef struct MSS3Context  MSS3Context;
model2_reset
model2_update
model_update
model_reset
model_init
model256_update
model256_reset
model256_init
rac_init
rac_normalise
rac_get_bit
rac_get_bits
rac_get_model2_sym
rac_get_model_sym
rac_get_model256_sym
decode_block_type
decode_coeff
decode_fill_block
decode_image_block
decode_dct
decode_dct_block
decode_haar_block
reset_coders
init_coders
mss3_decode_frame
mss3_decode_end
mss3_decode_init
AVCodec ff_msa1_decoder = ;
