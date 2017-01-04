#if !defined(XUTILS_H)
#define XUTILS_H
long xdl_bogosqrt(long n);
int xdl_emit_diffrec(char const *rec, long size, char const *pre, long psize,
xdemitcb_t *ecb);
int xdl_cha_init(chastore_t *cha, long isize, long icount);
void xdl_cha_free(chastore_t *cha);
void *xdl_cha_alloc(chastore_t *cha);
long xdl_guess_lines(mmfile_t *mf, long sample);
int xdl_blankline(const char *line, long size, long flags);
int xdl_recmatch(const char *l1, long s1, const char *l2, long s2, long flags);
unsigned long xdl_hash_record(char const **data, char const *top, long flags);
unsigned int xdl_hashbits(unsigned int size);
int xdl_num_out(char *out, long val);
int xdl_emit_hunk_hdr(long s1, long c1, long s2, long c2,
const char *func, long funclen, xdemitcb_t *ecb);
int xdl_fall_back_diff(xdfenv_t *diff_env, xpparam_t const *xpp,
int line1, int count1, int line2, int count2);
