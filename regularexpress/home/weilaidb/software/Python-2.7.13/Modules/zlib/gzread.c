local int gz_load OF((gz_statep, unsigned char *, unsigned, unsigned *));
local int gz_avail OF((gz_statep));
local int gz_look OF((gz_statep));
local int gz_decomp OF((gz_statep));
local int gz_fetch OF((gz_statep));
local int gz_skip OF((gz_statep, z_off64_t));
local int gz_load(state, buf, len, have)
gz_statep state;
unsigned char *buf;
unsigned len;
unsigned *have;
local int gz_avail(state)
gz_statep state;
local int gz_look(state)
gz_statep state;
local int gz_decomp(state)
gz_statep state;
local int gz_fetch(state)
gz_statep state;
local int gz_skip(state, len)
gz_statep state;
z_off64_t len;
int ZEXPORT gzread(file, buf, len)
gzFile file;
voidp buf;
unsigned len;
#  undef z_gzgetc
#  undef gzgetc
int ZEXPORT gzgetc(file)
gzFile file;
int ZEXPORT gzgetc_(file)
gzFile file;
int ZEXPORT gzungetc(c, file)
int c;
gzFile file;
char * ZEXPORT gzgets(file, buf, len)
gzFile file;
char *buf;
int len;
int ZEXPORT gzdirect(file)
gzFile file;
int ZEXPORT gzclose_r(file)
gzFile file;
