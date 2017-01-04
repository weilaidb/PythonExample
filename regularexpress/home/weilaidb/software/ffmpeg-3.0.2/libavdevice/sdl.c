typedef struct  SDLContext;
static const struct sdl_overlay_pix_fmt_entry  sdl_overlay_pix_fmt_map[] = ;
static int sdl_write_trailer(AVFormatContext *s)
static void compute_overlay_rect(AVFormatContext *s)
#define SDL_BASE_FLAGS (SDL_SWSURFACE|SDL_RESIZABLE)
static int event_thread(void *arg)
static int sdl_write_header(AVFormatContext *s)
static int sdl_write_packet(AVFormatContext *s, AVPacket *pkt)
#define OFFSET(x) offsetof(SDLContext,x)
static const AVOption options[] = ;
static const AVClass sdl_class = ;
AVOutputFormat ff_sdl_muxer = ;
