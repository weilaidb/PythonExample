#define _ASM_X86_DESC_DEFS_H
struct desc_struct  __attribute__((packed));
#define GDT_ENTRY_INIT(flags, base, limit)
enum ;
struct gate_struct64  __attribute__((packed));
#define PTR_LOW(x) ((unsigned long long)(x) & 0xFFFF)
#define PTR_MIDDLE(x) (((unsigned long long)(x) >> 16) & 0xFFFF)
#define PTR_HIGH(x) ((unsigned long long)(x) >> 32)
enum ;
struct ldttss_desc64  __attribute__((packed));
typedef struct gate_struct64 gate_desc;
typedef struct ldttss_desc64 ldt_desc;
typedef struct ldttss_desc64 tss_desc;
#define gate_offset(g) ((g).offset_low | ((unsigned long)(g).offset_middle << 16) | ((unsigned long)(g).offset_high << 32))
#define gate_segment(g) ((g).segment)
typedef struct desc_struct gate_desc;
typedef struct desc_struct ldt_desc;
typedef struct desc_struct tss_desc;
#define gate_offset(g)		(((g).b & 0xffff0000) | ((g).a & 0x0000ffff))
#define gate_segment(g)		((g).a >> 16)
struct desc_ptr  __attribute__((packed)) ;
