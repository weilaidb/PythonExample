#define AVCODEC_LIBSCHROEDINGER_H
typedef struct SchroVideoFormatInfo  SchroVideoFormatInfo;
typedef struct FFSchroEncodedFrame  FFSchroEncodedFrame;
typedef struct FFSchroQueueElement  FFSchroQueueElement;
typedef struct FFSchroQueue  FFSchroQueue;
ff_schro_queue_init;
ff_schro_queue_push_back;
*ff_schro_queue_pop;
ff_schro_queue_free(void *));
static const struct  schro_pixel_format_map[] = ;
SchroVideoFormatEnum ff_get_schro_video_format_preset (AVCodecContext *avctx);
ff_get_schro_frame_format;
*ff_create_schro_frame;
