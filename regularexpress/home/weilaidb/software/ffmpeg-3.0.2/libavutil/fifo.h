#define AVUTIL_FIFO_H
typedef struct AVFifoBuffer  AVFifoBuffer;
AVFifoBuffer *av_fifo_alloc(unsigned int size);
AVFifoBuffer *av_fifo_alloc_array(size_t nmemb, size_t size);
void av_fifo_free(AVFifoBuffer *f);
void av_fifo_freep(AVFifoBuffer **f);
void av_fifo_reset(AVFifoBuffer *f);
int av_fifo_size(const AVFifoBuffer *f);
int av_fifo_space(const AVFifoBuffer *f);
int av_fifo_generic_peek_at(AVFifoBuffer *f, void *dest, int offset, int buf_size, void (*func)(void*, void*, int));
int av_fifo_generic_peek(AVFifoBuffer *f, void *dest, int buf_size, void (*func)(void*, void*, int));
int av_fifo_generic_read(AVFifoBuffer *f, void *dest, int buf_size, void (*func)(void*, void*, int));
int av_fifo_generic_write(AVFifoBuffer *f, void *src, int size, int (*func)(void*, void*, int));
int av_fifo_realloc2(AVFifoBuffer *f, unsigned int size);
int av_fifo_grow(AVFifoBuffer *f, unsigned int additional_space);
void av_fifo_drain(AVFifoBuffer *f, int size);
static inline uint8_t *av_fifo_peek2(const AVFifoBuffer *f, int offs)
