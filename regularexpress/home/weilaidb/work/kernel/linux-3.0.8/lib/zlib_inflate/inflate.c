int zlib_inflate_workspacesize(void)
int zlib_inflateReset(z_streamp strm)
int zlib_inflateInit2(z_streamp strm, int windowBits)
static void zlib_fixedtables(struct inflate_state *state)
static void zlib_updatewindow(z_streamp strm, unsigned out)
static int zlib_inflateSyncPacket(z_streamp strm)
#define UPDATE(check, buf, len) zlib_adler32(check, buf, len)
#define LOAD() \
do  while (0)
#define RESTORE() \
do  while (0)
#define INITBITS() \
do  while (0)
#define PULLBYTE() \
do  while (0)
#define NEEDBITS(n) \
do  while (0)
#define BITS(n) \
((unsigned)hold & ((1U << (n)) - 1))
#define DROPBITS(n) \
do  while (0)
#define BYTEBITS() \
do  while (0)
#define REVERSE(q) \
((((q) >> 24) & 0xff) + (((q) >> 8) & 0xff00) + \
(((q) & 0xff00) << 8) + (((q) & 0xff) << 24))
int zlib_inflate(z_streamp strm, int flush)
int zlib_inflateEnd(z_streamp strm)
int zlib_inflateIncomp(z_stream *z)
