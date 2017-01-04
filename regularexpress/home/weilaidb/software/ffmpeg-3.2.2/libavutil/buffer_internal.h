#define AVUTIL_BUFFER_INTERNAL_H
#define BUFFER_FLAG_READONLY      (1 << 0)
#define BUFFER_FLAG_REALLOCATABLE (1 << 1)
struct AVBuffer ;
typedef struct BufferPoolEntry  BufferPoolEntry;
struct AVBufferPool ;
