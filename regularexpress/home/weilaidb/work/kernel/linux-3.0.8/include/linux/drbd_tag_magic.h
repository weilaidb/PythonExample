#define DRBD_TAG_MAGIC_H
#define TT_END     0
#define TT_REMOVED 0xE000
enum packet_types ;
#define NL_PACKET(name, number, fields)	\
struct name ## _tag_len_struct ;
#define NL_INTEGER(pn, pr, member)		\
int member; int tag_and_len ## member;
#define NL_INT64(pn, pr, member)		\
__u64 member; int tag_and_len ## member;
#define NL_BIT(pn, pr, member)		\
unsigned char member:1; int tag_and_len ## member;
#define NL_STRING(pn, pr, member, len)	\
unsigned char member[len]; int member ## _len; \
int tag_and_len ## member;
static const int tag_list_sizes[] = ;
#define TT_MASK      0xC000
#define TT_INTEGER   0x0000
#define TT_INT64     0x4000
#define TT_BIT       0x8000
#define TT_STRING    0xC000
#define T_MANDATORY  0x2000
#define T_MAY_IGNORE 0x0000
#define TN_MASK      0x1fff
#define tag_type(T)   ((T) & TT_MASK)
#define tag_number(T) ((T) & TN_MASK)
#define NL_PACKET(name, number, fields) fields
enum drbd_tags ;
struct tag ;
#define NL_PACKET(name, number, fields) fields
static const struct tag tag_descriptions[] = ;
