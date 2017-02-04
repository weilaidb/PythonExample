#define UNCHECKED_BITSTREAM_READER 1
#define BIT_PLANAR   0x00
#define CHUNKY       0x20
#define BYTE_PLANAR  0x40
#define BIT_LINE     0x80
#define BYTE_LINE    0xC0
typedef struct CDXLVideoContext  CDXLVideoContext;
cdxl_decode_init
import_palette
bitplanar2chunky
bitline2chunky
chunky2chunky
import_format
cdxl_decode_rgb
cdxl_decode_raw
cdxl_decode_ham6
cdxl_decode_ham8
cdxl_decode_frame
cdxl_decode_end
AVCodec ff_cdxl_decoder = ;
