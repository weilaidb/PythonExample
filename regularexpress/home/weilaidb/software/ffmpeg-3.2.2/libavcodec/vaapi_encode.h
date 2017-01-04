#define AVCODEC_VAAPI_ENCODE_H
struct VAAPIEncodeType;
struct VAAPIEncodePicture;
enum ;
enum ;
enum ;
typedef struct VAAPIEncodeSlice  VAAPIEncodeSlice;
typedef struct VAAPIEncodePicture  VAAPIEncodePicture;
typedef struct VAAPIEncodeContext  VAAPIEncodeContext;
typedef struct VAAPIEncodeType  VAAPIEncodeType;
int ff_vaapi_encode2(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *input_image, int *got_packet);
int ff_vaapi_encode_init(AVCodecContext *avctx,
const VAAPIEncodeType *type);
int ff_vaapi_encode_close(AVCodecContext *avctx);
