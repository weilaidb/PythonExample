#if ((defined(_MFC_VER) && defined(_M_IX86)) || \
defined(__WATCOMC__) || \
(defined(__GNUC__) && defined(__i386__))) && SDL_ASSEMBLY_ROUTINES
#define PAGE_ALIGNED __attribute__((__aligned__(4096)))
#define PAGE_ALIGNED
#if defined(_M_IX86) || defined(i386)
#define PREFIX16    0x66
#define STORE_BYTE  0xAA
#define STORE_WORD  0xAB
#define LOAD_BYTE   0xAC
#define LOAD_WORD   0xAD
#define RETURN      0xC3
#error Need assembly opcodes for this architecture
static unsigned char copy_row[4096] PAGE_ALIGNED;
static int
generate_rowbytes(int src_w, int dst_w, int bpp)
#define DEFINE_COPY_ROW(name, type)         \
static void name(type *src, int src_w, type *dst, int dst_w)    \
DEFINE_COPY_ROW(copy_row1, Uint8)
DEFINE_COPY_ROW(copy_row2, Uint16)
DEFINE_COPY_ROW(copy_row4, Uint32)
static void
copy_row3(Uint8 * src, int src_w, Uint8 * dst, int dst_w)
int
SDL_SoftStretch(SDL_Surface * src, const SDL_Rect * srcrect,
SDL_Surface * dst, const SDL_Rect * dstrect)
