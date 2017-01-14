#  include <ctype.h>
#define MAX_BL_BITS 7
#define END_BLOCK 256
#define REP_3_6      16
#define REPZ_3_10    17
#define REPZ_11_138  18
local const int extra_lbits[LENGTH_CODES]
= ;
local const int extra_dbits[D_CODES]
= ;
local const int extra_blbits[BL_CODES]
= ;
local const uch bl_order[BL_CODES]
= ;
#define DIST_CODE_LEN  512
#if defined(GEN_TREES_H) || !defined(STDC)
local ct_data static_ltree[L_CODES+2];
local ct_data static_dtree[D_CODES];
uch _dist_code[DIST_CODE_LEN];
uch _length_code[MAX_MATCH-MIN_MATCH+1];
local int base_length[LENGTH_CODES];
local int base_dist[D_CODES];
#  include
struct static_tree_desc_s ;
local static_tree_desc  static_l_desc =
;
local static_tree_desc  static_d_desc =
;
local static_tree_desc  static_bl_desc =
;
local void tr_static_init OF((void));
local void init_block     OF((deflate_state *s));
local void pqdownheap     OF((deflate_state *s, ct_data *tree, int k));
local void gen_bitlen     OF((deflate_state *s, tree_desc *desc));
local void gen_codes      OF((ct_data *tree, int max_code, ushf *bl_count));
local void build_tree     OF((deflate_state *s, tree_desc *desc));
local void scan_tree      OF((deflate_state *s, ct_data *tree, int max_code));
local void send_tree      OF((deflate_state *s, ct_data *tree, int max_code));
local int  build_bl_tree  OF((deflate_state *s));
local void send_all_trees OF((deflate_state *s, int lcodes, int dcodes,
int blcodes));
local void compress_block OF((deflate_state *s, const ct_data *ltree,
const ct_data *dtree));
local int  detect_data_type OF((deflate_state *s));
local unsigned bi_reverse OF((unsigned value, int length));
local void bi_windup      OF((deflate_state *s));
local void bi_flush       OF((deflate_state *s));
local void copy_block     OF((deflate_state *s, charf *buf, unsigned len,
int header));
local void gen_trees_header OF((void));
#  define send_code(s, c, tree) send_bits(s, tree[c].Code, tree[c].Len)
#  define send_code(s, c, tree) \
#define put_short(s, w)
local void send_bits      OF((deflate_state *s, int value, int length));
local void send_bits(s, value, length)
deflate_state *s;
int value;
int length;
#define send_bits(s, value, length) \
local void tr_static_init()
#  ifndef DEBUG
#    include <stdio.h>
#  endif
#  define SEPARATOR(i, last, width) \
((i) == (last)?  :    \
((i) % (width) == (width)-1 ? ))
void gen_trees_header()
void ZLIB_INTERNAL _tr_init(s)
deflate_state *s;
local void init_block(s)
deflate_state *s;
#define SMALLEST 1
#define pqremove(s, tree, top) \
#define smaller(tree, n, m, depth) \
(tree[n].Freq < tree[m].Freq || \
(tree[n].Freq == tree[m].Freq && depth[n] <= depth[m]))
local void pqdownheap(s, tree, k)
deflate_state *s;
ct_data *tree;
int k;
local void gen_bitlen(s, desc)
deflate_state *s;
tree_desc *desc;
local void gen_codes (tree, max_code, bl_count)
ct_data *tree;
int max_code;
ushf *bl_count;
local void build_tree(s, desc)
deflate_state *s;
tree_desc *desc;
local void scan_tree (s, tree, max_code)
deflate_state *s;
ct_data *tree;
int max_code;
local void send_tree (s, tree, max_code)
deflate_state *s;
ct_data *tree;
int max_code;
local int build_bl_tree(s)
deflate_state *s;
local void send_all_trees(s, lcodes, dcodes, blcodes)
deflate_state *s;
int lcodes, dcodes, blcodes;
void ZLIB_INTERNAL _tr_stored_block(s, buf, stored_len, last)
deflate_state *s;
charf *buf;
ulg stored_len;
int last;
void ZLIB_INTERNAL _tr_flush_bits(s)
deflate_state *s;
void ZLIB_INTERNAL _tr_align(s)
deflate_state *s;
void ZLIB_INTERNAL _tr_flush_block(s, buf, stored_len, last)
deflate_state *s;
charf *buf;
ulg stored_len;
int last;
{
ulg opt_lenb, static_lenb;
int max_blindex = 0;
if (s->level > 0)  else
if (buf != (char*)0)
int ZLIB_INTERNAL _tr_tally (s, dist, lc)
deflate_state *s;
unsigned dist;
unsigned lc;
local void compress_block(s, ltree, dtree)
deflate_state *s;
const ct_data *ltree;
const ct_data *dtree;
local int detect_data_type(s)
deflate_state *s;
local unsigned bi_reverse(code, len)
unsigned code;
int len;
local void bi_flush(s)
deflate_state *s;
local void bi_windup(s)
deflate_state *s;
local void copy_block(s, buf, len, header)
deflate_state *s;
charf    *buf;
unsigned len;
int      header;
