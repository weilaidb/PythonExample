typedef enum  spu_iformat;
typedef enum  spu_aformat;
enum spu_insns ;
struct spu_opcode
;
#define SIGNED_EXTRACT(insn,size,pos) (((int)((insn) << (32-size-pos))) >> (32-size))
#define UNSIGNED_EXTRACT(insn,size,pos) (((insn) >> pos) & ((1 << size)-1))
#define DECODE_INSN_RT(insn) (insn & 0x7f)
#define DECODE_INSN_RA(insn) ((insn >> 7) & 0x7f)
#define DECODE_INSN_RB(insn) ((insn >> 14) & 0x7f)
#define DECODE_INSN_RC(insn) ((insn >> 21) & 0x7f)
#define DECODE_INSN_I10(insn) SIGNED_EXTRACT(insn,10,14)
#define DECODE_INSN_U10(insn) UNSIGNED_EXTRACT(insn,10,14)
#define DECODE_INSN_I16(insn) SIGNED_EXTRACT(insn,16,7)
#define DECODE_INSN_U16(insn) UNSIGNED_EXTRACT(insn,16,7)
#define DECODE_INSN_U14(insn) UNSIGNED_EXTRACT(insn,14,0)
#define DECODE_INSN_I18(insn) SIGNED_EXTRACT(insn,18,7)
#define DECODE_INSN_U18(insn) UNSIGNED_EXTRACT(insn,18,7)
#define DECODE_INSN_I7(insn) SIGNED_EXTRACT(insn,7,14)
#define DECODE_INSN_U7(insn) UNSIGNED_EXTRACT(insn,7,14)
#define DECODE_INSN_I8(insn)  SIGNED_EXTRACT(insn,8,14)
#define DECODE_INSN_U8(insn) UNSIGNED_EXTRACT(insn,8,14)
#define DECODE_INSN_I9a(insn) ((SIGNED_EXTRACT(insn,2,23) << 7) | UNSIGNED_EXTRACT(insn,7,0))
#define DECODE_INSN_I9b(insn) ((SIGNED_EXTRACT(insn,2,14) << 7) | UNSIGNED_EXTRACT(insn,7,0))
#define DECODE_INSN_U9a(insn) ((UNSIGNED_EXTRACT(insn,2,23) << 7) | UNSIGNED_EXTRACT(insn,7,0))
#define DECODE_INSN_U9b(insn) ((UNSIGNED_EXTRACT(insn,2,14) << 7) | UNSIGNED_EXTRACT(insn,7,0))
