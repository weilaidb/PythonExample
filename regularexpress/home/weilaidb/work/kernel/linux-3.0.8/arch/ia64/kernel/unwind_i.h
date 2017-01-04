#define UNW_VER(x)		((x) >> 48)
#define UNW_FLAG_MASK		0x0000ffff00000000
#define UNW_FLAG_OSMASK		0x0000f00000000000
#define UNW_FLAG_EHANDLER(x)	((x) & 0x0000000100000000L)
#define UNW_FLAG_UHANDLER(x)	((x) & 0x0000000200000000L)
#define UNW_LENGTH(x)		((x) & 0x00000000ffffffffL)
enum unw_register_index ;
struct unw_info_block ;
struct unw_table ;
enum unw_where ;
#define UNW_WHEN_NEVER	0x7fffffff
struct unw_reg_info ;
struct unw_reg_state ;
struct unw_labeled_state ;
struct unw_state_record ;
enum unw_nat_type ;
enum unw_insn_opcode ;
struct unw_insn ;
#define UNW_MAX_SCRIPT_LEN	(UNW_NUM_REGS + 5)
struct unw_script ;
