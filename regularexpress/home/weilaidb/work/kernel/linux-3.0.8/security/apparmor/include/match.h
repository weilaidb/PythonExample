#define __AA_MATCH_H
#define DFA_NOMATCH			0
#define DFA_START			1
#define DFA_VALID_PERM_MASK		0xffffffff
#define DFA_VALID_PERM2_MASK		0xffffffff
#define YYTH_MAGIC	0x1B5E783D
#define YYTH_DEF_RECURSE 0x1
struct table_set_header ;
#define	YYTD_ID_ACCEPT	0
#define YYTD_ID_BASE	1
#define YYTD_ID_CHK	2
#define YYTD_ID_DEF	3
#define YYTD_ID_EC	4
#define YYTD_ID_META	5
#define YYTD_ID_ACCEPT2 6
#define YYTD_ID_NXT	7
#define YYTD_ID_TSIZE	8
#define YYTD_DATA8	1
#define YYTD_DATA16	2
#define YYTD_DATA32	4
#define YYTD_DATA64	8
#define ACCEPT1_FLAGS(X) ((X) & 0x3f)
#define ACCEPT2_FLAGS(X) ACCEPT1_FLAGS((X) >> YYTD_ID_ACCEPT2)
#define TO_ACCEPT1_FLAG(X) ACCEPT1_FLAGS(X)
#define TO_ACCEPT2_FLAG(X) (ACCEPT1_FLAGS(X) << YYTD_ID_ACCEPT2)
#define DFA_FLAG_VERIFY_STATES 0x1000
struct table_header ;
#define DEFAULT_TABLE(DFA) ((u16 *)((DFA)->tables[YYTD_ID_DEF]->td_data))
#define BASE_TABLE(DFA) ((u32 *)((DFA)->tables[YYTD_ID_BASE]->td_data))
#define NEXT_TABLE(DFA) ((u16 *)((DFA)->tables[YYTD_ID_NXT]->td_data))
#define CHECK_TABLE(DFA) ((u16 *)((DFA)->tables[YYTD_ID_CHK]->td_data))
#define EQUIV_TABLE(DFA) ((u8 *)((DFA)->tables[YYTD_ID_EC]->td_data))
#define ACCEPT_TABLE(DFA) ((u32 *)((DFA)->tables[YYTD_ID_ACCEPT]->td_data))
#define ACCEPT_TABLE2(DFA) ((u32 *)((DFA)->tables[YYTD_ID_ACCEPT2]->td_data))
struct aa_dfa ;
#define byte_to_byte(X) (X)
#define UNPACK_ARRAY(TABLE, BLOB, LEN, TYPE, NTOHX) \
do  while (0)
static inline size_t table_size(size_t len, size_t el_size)
struct aa_dfa *aa_dfa_unpack(void *blob, size_t size, int flags);
unsigned int aa_dfa_match_len(struct aa_dfa *dfa, unsigned int start,
const char *str, int len);
unsigned int aa_dfa_match(struct aa_dfa *dfa, unsigned int start,
const char *str);
void aa_dfa_free_kref(struct kref *kref);
static inline void aa_put_dfa(struct aa_dfa *dfa)
