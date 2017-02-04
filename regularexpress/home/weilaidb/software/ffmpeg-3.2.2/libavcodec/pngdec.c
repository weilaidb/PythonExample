typedef struct PNGDecContext  PNGDecContext;
static const uint8_t png_pass_mask[NB_PASSES] = ;
static const uint8_t png_pass_dsp_ymask[NB_PASSES] = ;
static const uint8_t png_pass_dsp_mask[NB_PASSES] = ;
png_put_interlaced_row
ff_add_png_paeth_prediction
UNROLL1                                                      \
UNROLL_FILTER                                                     \
if (bpp == 1)  else if (bpp == 2)  else if (bpp == 3)  else if (bpp == 4)                                                                          \
for (; i < size; i++)
png_filter_row
YUV2RGB \
static void deloco_ ## NAME(TYPE *dst, int size, int alpha) \
YUV2RGB(rgb8, uint8_t)
YUV2RGB(rgb16, uint16_t)
png_handle_row
png_decode_idat
decode_zbuf
*iso88591_to_utf8
decode_text_chunk
decode_ihdr_chunk
decode_phys_chunk
decode_idat_chunk
decode_plte_chunk
decode_trns_chunk
handle_small_bpp
decode_fctl_chunk
handle_p_frame_png
FAST_DIV255 ((((x) + 128) * 257) >> 16)
handle_p_frame_apng
decode_frame_common
#if CONFIG_PNG_DECODER
decode_frame_png
#if CONFIG_APNG_DECODER
decode_frame_apng
#if HAVE_THREADS
update_thread_context
png_dec_init
png_dec_end
#if CONFIG_APNG_DECODER
AVCodec ff_apng_decoder = ;
#if CONFIG_PNG_DECODER
AVCodec ff_png_decoder = ;
