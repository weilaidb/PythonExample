#define Assert(err, str)
#define Trace(dummy)
#define Tracev(dummy)
#define Tracecv(err, dummy)
#define Tracevv(dummy)
#define LENGTH_CODES 29
#define LITERALS  256
#define L_CODES (LITERALS+1+LENGTH_CODES)
#define D_CODES   30
#define BL_CODES  19
#define HEAP_SIZE (2*L_CODES+1)
#define MAX_BITS 15
#define INIT_STATE    42
#define BUSY_STATE   113
#define FINISH_STATE 666
typedef struct ct_data_s  ct_data;
#define Freq fc.freq
#define Code fc.code
#define Dad  dl.dad
#define Len  dl.len
typedef struct static_tree_desc_s  static_tree_desc;
typedef struct tree_desc_s  tree_desc;
typedef ush Pos;
typedef unsigned IPos;
typedef struct deflate_state  deflate_state;
typedef struct deflate_workspace  deflate_workspace;
#define zlib_deflate_window_memsize(windowBits) \
(2 * (1 << (windowBits)) * sizeof(Byte))
#define zlib_deflate_prev_memsize(windowBits) \
((1 << (windowBits)) * sizeof(Pos))
#define zlib_deflate_head_memsize(memLevel) \
((1 << ((memLevel)+7)) * sizeof(Pos))
#define zlib_deflate_overlay_memsize(memLevel) \
((1 << ((memLevel)+6)) * (sizeof(ush)+2))
#define put_byte(s, c)
#define MIN_LOOKAHEAD (MAX_MATCH+MIN_MATCH+1)
#define MAX_DIST(s)  ((s)->w_size-MIN_LOOKAHEAD)
void zlib_tr_init         (deflate_state *s);
int  zlib_tr_tally        (deflate_state *s, unsigned dist, unsigned lc);
ulg  zlib_tr_flush_block  (deflate_state *s, char *buf, ulg stored_len,
int eof);
void zlib_tr_align        (deflate_state *s);
void zlib_tr_stored_block (deflate_state *s, char *buf, ulg stored_len,
int eof);
void zlib_tr_stored_type_only (deflate_state *);
#define put_short(s, w)
static inline unsigned bi_reverse(unsigned code,
int len)
static inline void bi_flush(deflate_state *s)
static inline void bi_windup(deflate_state *s)
