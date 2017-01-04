local void fixedtables OF((struct inflate_state FAR *state));
int ZEXPORT inflateBackInit_(strm, windowBits, window, version, stream_size)
z_streamp strm;
int windowBits;
unsigned char FAR *window;
const char *version;
int stream_size;
local void fixedtables(state)
struct inflate_state FAR *state;
#define LOAD() \
do  while (0)
#define RESTORE() \
do  while (0)
#define INITBITS() \
do  while (0)
#define PULL() \
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
#define ROOM() \
do  while (0)
int ZEXPORT inflateBack(strm, in, in_desc, out, out_desc)
z_streamp strm;
in_func in;
void FAR *in_desc;
out_func out;
void FAR *out_desc;
int ZEXPORT inflateBackEnd(strm)
z_streamp strm;
