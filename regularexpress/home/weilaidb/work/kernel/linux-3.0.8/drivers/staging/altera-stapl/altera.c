static int debug = 1;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "enable debugging information");
MODULE_DESCRIPTION("altera FPGA kernel module");
MODULE_AUTHOR("Igor M. Liplianin  <liplianin@netup.ru>");
MODULE_LICENSE("GPL");
#define dprintk(args...) \
if (debug)
enum altera_fpga_opcode ;
struct altera_procinfo ;
static int altera_check_stack(int stack_ptr, int count, int *status)
static void altera_export_int(char *key, s32 value)
#define HEX_LINE_CHARS 72
#define HEX_LINE_BITS (HEX_LINE_CHARS * 4)
static void altera_export_bool_array(char *key, u8 *data, s32 count)
static int altera_execute(struct altera_state *astate,
u8 *p,
s32 program_size,
s32 *error_address,
int *exit_code,
int *format_version)
static int altera_get_note(u8 *p, s32 program_size,
s32 *offset, char *key, char *value, int length)
static int altera_check_crc(u8 *p, s32 program_size)
static int altera_get_file_info(u8 *p,
s32 program_size,
int *format_version,
int *action_count,
int *procedure_count)
static int altera_get_act_info(u8 *p,
s32 program_size,
int index,
char **name,
char **description,
struct altera_procinfo **proc_list)
int altera_init(struct altera_config *config, const struct firmware *fw)
EXPORT_SYMBOL(altera_init);
