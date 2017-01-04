#  include <ctype.h>
#define MAX_BL_BITS 7
#define END_BLOCK 256
#define REP_3_6      16
#define REPZ_3_10    17
#define REPZ_11_138  18
static const int extra_lbits[LENGTH_CODES]
= ;
static const int extra_dbits[D_CODES]
= ;
static const int extra_blbits[BL_CODES]
= ;
static const uch bl_order[BL_CODES]
= ;
#define Buf_size (8 * 2*sizeof(char))
static ct_data static_ltree[L_CODES+2];
static ct_data static_dtree[D_CODES];
static uch dist_code[512];
static uch length_code[MAX_MATCH-MIN_MATCH+1];
static int base_length[LENGTH_CODES];
static int base_dist[D_CODES];
struct static_tree_desc_s ;
static static_tree_desc  static_l_desc =
;
static static_tree_desc  static_d_desc =
;
static static_tree_desc  static_bl_desc =
;
static void tr_static_init (void);
static void init_block     (deflate_state *s);
static void pqdownheap     (deflate_state *s, ct_data *tree, int k);
static void gen_bitlen     (deflate_state *s, tree_desc *desc);
static void gen_codes      (ct_data *tree, int max_code, ush *bl_count);
static void build_tree     (deflate_state *s, tree_desc *desc);
static void scan_tree      (deflate_state *s, ct_data *tree, int max_code);
static void send_tree      (deflate_state *s, ct_data *tree, int max_code);
static int  build_bl_tree  (deflate_state *s);
static void send_all_trees (deflate_state *s, int lcodes, int dcodes,
int blcodes);
static void compress_block (deflate_state *s, ct_data *ltree,
ct_data *dtree);
static void set_data_type  (deflate_state *s);
static unsigned bi_reverse (unsigned value, int length);
static void bi_windup      (deflate_state *s);
static void bi_flush       (deflate_state *s);
static void copy_block     (deflate_state *s, char *buf, unsigned len,
int header);
#  define send_code(s, c, tree) send_bits(s, tree[c].Code, tree[c].Len)
#  define send_code(s, c, tree) \
#define d_code(dist) \
((dist) < 256 ? dist_code[dist] : dist_code[256+((dist)>>7)])
static void send_bits      (deflate_state *s, int value, int length);
static void send_bits(
deflate_state *s,
int value,
int length
)
#define send_bits(s, value, length) \
static void tr_static_init(void)
void zlib_tr_init(
deflate_state *s
)
static void init_block(
deflate_state *s
)
#define SMALLEST 1
#define pqremove(s, tree, top) \
#define smaller(tree, n, m, depth) \
(tree[n].Freq < tree[m].Freq || \
(tree[n].Freq == tree[m].Freq && depth[n] <= depth[m]))
static void pqdownheap(
deflate_state *s,
ct_data *tree,
int k
)
static void gen_bitlen(
deflate_state *s,
tree_desc *desc
)
static void gen_codes(
ct_data *tree,
int max_code,
ush *bl_count
)
static void build_tree(
deflate_state *s,
tree_desc *desc
)
static void scan_tree(
deflate_state *s,
ct_data *tree,
int max_code
)
static void send_tree(
deflate_state *s,
ct_data *tree,
int max_code
)
static int build_bl_tree(
deflate_state *s
)
static void send_all_trees(
deflate_state *s,
int lcodes,
int dcodes,
int blcodes
)
void zlib_tr_stored_block(
deflate_state *s,
char *buf,
ulg stored_len,
int eof
)
void zlib_tr_stored_type_only(
deflate_state *s
)
void zlib_tr_align(
deflate_state *s
)
ulg zlib_tr_flush_block(
deflate_state *s,
char *buf,
ulg stored_len,
int eof
)
{
ulg opt_lenb, static_lenb;
int max_blindex = 0;
if (s->level > 0)  else
#  ifdef FORCE_STORED_FILE
if (eof && s->compressed_len == 0L) {
#  else
if (stored_len <= opt_lenb && eof && s->compressed_len==0L && seekable())  else
if (buf != (char*)0)
int zlib_tr_tally(
deflate_state *s,
unsigned dist,
unsigned lc
)
static void compress_block(
deflate_state *s,
ct_data *ltree,
ct_data *dtree
)
static void set_data_type(
deflate_state *s
)
static void copy_block(
deflate_state *s,
char    *buf,
unsigned len,
int      header
)
