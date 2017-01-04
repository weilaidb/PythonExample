static unw_word
unw_decode_uleb128 (unsigned char **dpp)
static unsigned char *
unw_decode_x1 (unsigned char *dp, unsigned char code, void *arg)
static unsigned char *
unw_decode_x2 (unsigned char *dp, unsigned char code, void *arg)
static unsigned char *
unw_decode_x3 (unsigned char *dp, unsigned char code, void *arg)
static unsigned char *
unw_decode_x4 (unsigned char *dp, unsigned char code, void *arg)
static unsigned char *
unw_decode_r1 (unsigned char *dp, unsigned char code, void *arg)
static unsigned char *
unw_decode_r2 (unsigned char *dp, unsigned char code, void *arg)
static unsigned char *
unw_decode_r3 (unsigned char *dp, unsigned char code, void *arg)
static unsigned char *
unw_decode_p1 (unsigned char *dp, unsigned char code, void *arg)
static unsigned char *
unw_decode_p2_p5 (unsigned char *dp, unsigned char code, void *arg)
static unsigned char *
unw_decode_p6 (unsigned char *dp, unsigned char code, void *arg)
static unsigned char *
unw_decode_p7_p10 (unsigned char *dp, unsigned char code, void *arg)
static unsigned char *
unw_decode_b1 (unsigned char *dp, unsigned char code, void *arg)
static unsigned char *
unw_decode_b2 (unsigned char *dp, unsigned char code, void *arg)
static unsigned char *
unw_decode_b3_x4 (unsigned char *dp, unsigned char code, void *arg)
typedef unsigned char *(*unw_decoder) (unsigned char *, unsigned char, void *);
static unw_decoder unw_decode_table[2][8] =
;
static inline unsigned char *
unw_decode (unsigned char *dp, int inside_body, void *arg)
