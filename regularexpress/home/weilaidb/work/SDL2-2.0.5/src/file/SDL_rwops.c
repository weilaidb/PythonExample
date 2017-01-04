#define _LARGEFILE64_SOURCE
#if defined(__WIN32__)
#if __NACL__
#define INVALID_SET_FILE_POINTER 0xFFFFFFFF
#define READAHEAD_BUFFER_SIZE   1024
static int SDLCALL
windows_file_open(SDL_RWops * context, const char *filename, const char *mode)
static Sint64 SDLCALL
windows_file_size(SDL_RWops * context)
static Sint64 SDLCALL
windows_file_seek(SDL_RWops * context, Sint64 offset, int whence)
static size_t SDLCALL
windows_file_read(SDL_RWops * context, void *ptr, size_t size, size_t maxnum)
static size_t SDLCALL
windows_file_write(SDL_RWops * context, const void *ptr, size_t size,
size_t num)
static int SDLCALL
windows_file_close(SDL_RWops * context)
static Sint64 SDLCALL
stdio_size(SDL_RWops * context)
static Sint64 SDLCALL
stdio_seek(SDL_RWops * context, Sint64 offset, int whence)
static size_t SDLCALL
stdio_read(SDL_RWops * context, void *ptr, size_t size, size_t maxnum)
static size_t SDLCALL
stdio_write(SDL_RWops * context, const void *ptr, size_t size, size_t num)
static int SDLCALL
stdio_close(SDL_RWops * context)
static Sint64 SDLCALL
mem_size(SDL_RWops * context)
static Sint64 SDLCALL
mem_seek(SDL_RWops * context, Sint64 offset, int whence)
static size_t SDLCALL
mem_read(SDL_RWops * context, void *ptr, size_t size, size_t maxnum)
static size_t SDLCALL
mem_write(SDL_RWops * context, const void *ptr, size_t size, size_t num)
static size_t SDLCALL
mem_writeconst(SDL_RWops * context, const void *ptr, size_t size, size_t num)
static int SDLCALL
mem_close(SDL_RWops * context)
SDL_RWops *
SDL_RWFromFile(const char *file, const char *mode)
SDL_RWops *
SDL_RWFromFP(FILE * fp, SDL_bool autoclose)
SDL_RWops *
SDL_RWFromFP(void * fp, SDL_bool autoclose)
SDL_RWops *
SDL_RWFromMem(void *mem, int size)
SDL_RWops *
SDL_RWFromConstMem(const void *mem, int size)
SDL_RWops *
SDL_AllocRW(void)
void
SDL_FreeRW(SDL_RWops * area)
Uint8
SDL_ReadU8(SDL_RWops * src)
Uint16
SDL_ReadLE16(SDL_RWops * src)
Uint16
SDL_ReadBE16(SDL_RWops * src)
Uint32
SDL_ReadLE32(SDL_RWops * src)
Uint32
SDL_ReadBE32(SDL_RWops * src)
Uint64
SDL_ReadLE64(SDL_RWops * src)
Uint64
SDL_ReadBE64(SDL_RWops * src)
size_t
SDL_WriteU8(SDL_RWops * dst, Uint8 value)
size_t
SDL_WriteLE16(SDL_RWops * dst, Uint16 value)
size_t
SDL_WriteBE16(SDL_RWops * dst, Uint16 value)
size_t
SDL_WriteLE32(SDL_RWops * dst, Uint32 value)
size_t
SDL_WriteBE32(SDL_RWops * dst, Uint32 value)
size_t
SDL_WriteLE64(SDL_RWops * dst, Uint64 value)
size_t
SDL_WriteBE64(SDL_RWops * dst, Uint64 value)
