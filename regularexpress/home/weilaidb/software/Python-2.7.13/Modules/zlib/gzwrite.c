local int gz_init OF((gz_statep));
local int gz_comp OF((gz_statep, int));
local int gz_zero OF((gz_statep, z_off64_t));
local int gz_init(state)
gz_statep state;
local int gz_comp(state, flush)
gz_statep state;
int flush;
local int gz_zero(state, len)
gz_statep state;
z_off64_t len;
int ZEXPORT gzwrite(file, buf, len)
gzFile file;
voidpc buf;
unsigned len;
int ZEXPORT gzputc(file, c)
gzFile file;
int c;
int ZEXPORT gzputs(file, str)
gzFile file;
const char *str;
#if defined(STDC) || defined(Z_HAVE_STDARG_H)
int ZEXPORTVA gzvprintf(gzFile file, const char *format, va_list va)
int ZEXPORTVA gzprintf(gzFile file, const char *format, ...)
int ZEXPORTVA gzprintf (file, format, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10,
a11, a12, a13, a14, a15, a16, a17, a18, a19, a20)
gzFile file;
const char *format;
int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10,
a11, a12, a13, a14, a15, a16, a17, a18, a19, a20;
int ZEXPORT gzflush(file, flush)
gzFile file;
int flush;
int ZEXPORT gzsetparams(file, level, strategy)
gzFile file;
int level;
int strategy;
int ZEXPORT gzclose_w(file)
gzFile file;
