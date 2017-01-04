#define MAX_PTR	UINT_MAX
#define MAX_CNT	UINT_MAX
#define LINE_END(n) (line##n + count##n - 1)
#define LINE_END_PTR(n) (*line##n + *count##n - 1)
struct histindex ;
struct region ;
#define LINE_MAP(i, a) (i->line_map[(a) - i->ptr_shift])
#define NEXT_PTR(index, ptr) \
(index->next_ptrs[(ptr) - index->ptr_shift])
#define CNT(index, ptr) \
((LINE_MAP(index, ptr))->cnt)
#define REC(env, s, l) \
(env->xdf##s.recs[l - 1])
static int cmp_recs(xpparam_t const *xpp,
xrecord_t *r1, xrecord_t *r2)
#define CMP_ENV(xpp, env, s1, l1, s2, l2) \
(cmp_recs(xpp, REC(env, s1, l1), REC(env, s2, l2)))
#define CMP(i, s1, l1, s2, l2) \
(cmp_recs(i->xpp, REC(i->env, s1, l1), REC(i->env, s2, l2)))
#define TABLE_HASH(index, side, line) \
XDL_HASHLONG((REC(index->env, side, line))->ha, index->table_bits)
static int scanA(struct histindex *index, int line1, int count1)
static int try_lcs(struct histindex *index, struct region *lcs, int b_ptr,
int line1, int count1, int line2, int count2)
static int find_lcs(struct histindex *index, struct region *lcs,
int line1, int count1, int line2, int count2)
static int fall_back_to_classic_diff(struct histindex *index,
int line1, int count1, int line2, int count2)
static int histogram_diff(xpparam_t const *xpp, xdfenv_t *env,
int line1, int count1, int line2, int count2)
int xdl_do_histogram_diff(mmfile_t *file1, mmfile_t *file2,
xpparam_t const *xpp, xdfenv_t *env)
