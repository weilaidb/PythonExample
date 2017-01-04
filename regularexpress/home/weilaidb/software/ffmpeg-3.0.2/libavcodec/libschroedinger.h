#define AVCODEC_LIBSCHROEDINGER_H
typedef struct SchroVideoFormatInfo  SchroVideoFormatInfo;
typedef struct FFSchroEncodedFrame  FFSchroEncodedFrame;
typedef struct FFSchroQueueElement  FFSchroQueueElement;
typedef struct FFSchroQueue  FFSchroQueue;
void ff_schro_queue_init(FFSchroQueue *queue);
int ff_schro_queue_push_back(FFSchroQueue *queue, void *p_data);
void *ff_schro_queue_pop(FFSchroQueue *queue);
void ff_schro_queue_free(FFSchroQueue *queue, void (*free_func)(void *));
static const struct  schro_pixel_format_map[] = ;
SchroVideoFormatEnum ff_get_schro_video_format_preset (AVCodecContext *avctx);
int ff_get_schro_frame_format(SchroChromaFormat schro_chroma_fmt,
SchroFrameFormat  *schro_frame_fmt);
SchroFrame *ff_create_schro_frame(AVCodecContext *avctx,
SchroFrameFormat schro_frame_fmt);
