static const SchroVideoFormatInfo ff_schro_video_format_info[] = ;
static unsigned int get_video_format_idx(AVCodecContext *avctx)
av_cold void ff_schro_queue_init(FFSchroQueue *queue)
void ff_schro_queue_free(FFSchroQueue *queue, void (*free_func)(void *))
int ff_schro_queue_push_back(FFSchroQueue *queue, void *p_data)
void *ff_schro_queue_pop(FFSchroQueue *queue)
static const SchroVideoFormatEnum ff_schro_video_formats[]=;
SchroVideoFormatEnum ff_get_schro_video_format_preset(AVCodecContext *avctx)
int ff_get_schro_frame_format (SchroChromaFormat schro_pix_fmt,
SchroFrameFormat  *schro_frame_fmt)
static void free_schro_frame(SchroFrame *frame, void *priv)
SchroFrame *ff_create_schro_frame(AVCodecContext *avctx,
SchroFrameFormat schro_frame_fmt)
