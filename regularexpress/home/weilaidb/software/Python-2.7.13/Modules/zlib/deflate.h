#define DEFLATE_H
#  define GZIP
#define LENGTH_CODES 29
#define LITERALS  256
#define L_CODES (LITERALS+1+LENGTH_CODES)
#define D_CODES   30
#define BL_CODES  19
#define HEAP_SIZE (2*L_CODES+1)
#define MAX_BITS 15
#define Buf_size 16
#define INIT_STATE    42
#define EXTRA_STATE   69
#define NAME_STATE    73
#define COMMENT_STATE 91
#define HCRC_STATE   103
#define BUSY_STATE   113
#define FINISH_STATE 666
typedef struct ct_data_s  FAR ct_data;
#define Freq fc.freq
#define Code fc.code
#define Dad  dl.dad
#define Len  dl.len
typedef struct static_tree_desc_s  static_tree_desc;
typedef struct tree_desc_s  FAR tree_desc;
typedef ush Pos;
typedef Pos FAR Posf;
typedef unsigned IPos;
typedef struct internal_state  FAR deflate_state;
#define put_byte(s, c)
#define MIN_LOOKAHEAD (MAX_MATCH+MIN_MATCH+1)
#define MAX_DIST(s)  ((s)->w_size-MIN_LOOKAHEAD)
#define WIN_INIT MAX_MATCH
void ZLIB_INTERNAL _tr_init OF((deflate_state *s));
int ZLIB_INTERNAL _tr_tally OF((deflate_state *s, unsigned dist, unsigned lc));
void ZLIB_INTERNAL _tr_flush_block OF((deflate_state *s, charf *buf,
ulg stored_len, int last));
void ZLIB_INTERNAL _tr_flush_bits OF((deflate_state *s));
void ZLIB_INTERNAL _tr_align OF((deflate_state *s));
void ZLIB_INTERNAL _tr_stored_block OF((deflate_state *s, charf *buf,
ulg stored_len, int last));
#define d_code(dist) \
((dist) < 256 ? _dist_code[dist] : _dist_code[256+((dist)>>7)])
#if defined(GEN_TREES_H) || !defined(STDC)
extern uch ZLIB_INTERNAL _length_code[];
extern uch ZLIB_INTERNAL _dist_code[];
extern const uch ZLIB_INTERNAL _length_code[];
extern const uch ZLIB_INTERNAL _dist_code[];
# define _tr_tally_lit(s, c, flush) \
# define _tr_tally_dist(s, distance, length, flush) \
# define _tr_tally_lit(s, c, flush) flush = _tr_tally(s, 0, c)
# define _tr_tally_dist(s, distance, length, flush) \
flush = _tr_tally(s, distance, length)
