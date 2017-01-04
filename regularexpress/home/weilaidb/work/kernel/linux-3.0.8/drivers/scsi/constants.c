#define MAINTENANCE_IN 0xa3
#define MAINTENANCE_OUT 0xa4
#define SERVICE_ACTION_IN_12 0xab
#define SERVICE_ACTION_OUT_12 0xa9
#define SERVICE_ACTION_IN_16 0x9e
#define SERVICE_ACTION_OUT_16 0x9f
static const char * cdb_byte0_names[] = ;
struct value_name_pair ;
static const struct value_name_pair maint_in_arr[] = ;
#define MAINT_IN_SZ ARRAY_SIZE(maint_in_arr)
static const struct value_name_pair maint_out_arr[] = ;
#define MAINT_OUT_SZ ARRAY_SIZE(maint_out_arr)
static const struct value_name_pair serv_in12_arr[] = ;
#define SERV_IN12_SZ ARRAY_SIZE(serv_in12_arr)
static const struct value_name_pair serv_out12_arr[] = ;
#define SERV_OUT12_SZ ARRAY_SIZE(serv_out12_arr)
static const struct value_name_pair serv_in16_arr[] = ;
#define SERV_IN16_SZ ARRAY_SIZE(serv_in16_arr)
static const struct value_name_pair serv_out16_arr[] = ;
#define SERV_OUT16_SZ ARRAY_SIZE(serv_out16_arr)
static const struct value_name_pair variable_length_arr[] = ;
#define VARIABLE_LENGTH_SZ ARRAY_SIZE(variable_length_arr)
static const char * get_sa_name(const struct value_name_pair * arr,
int arr_sz, int service_action)
static void print_opcode_name(unsigned char * cdbp, int cdb_len)
static void print_opcode_name(unsigned char * cdbp, int cdb_len)
void __scsi_print_command(unsigned char *cdb)
EXPORT_SYMBOL(__scsi_print_command);
void scsi_print_command(struct scsi_cmnd *cmd)
EXPORT_SYMBOL(scsi_print_command);
void
scsi_print_status(unsigned char scsi_status)
EXPORT_SYMBOL(scsi_print_status);
struct error_info ;
static const struct error_info additional[] =
;
struct error_info2 ;
static const struct error_info2 additional2[] =
;
static const char * const snstext[] = ;
const char *
scsi_sense_key_string(unsigned char key)
EXPORT_SYMBOL(scsi_sense_key_string);
const char *
scsi_extd_sense_format(unsigned char asc, unsigned char ascq)
EXPORT_SYMBOL(scsi_extd_sense_format);
void
scsi_show_extd_sense(unsigned char asc, unsigned char ascq)
EXPORT_SYMBOL(scsi_show_extd_sense);
void
scsi_show_sense_hdr(struct scsi_sense_hdr *sshdr)
EXPORT_SYMBOL(scsi_show_sense_hdr);
void
scsi_print_sense_hdr(const char *name, struct scsi_sense_hdr *sshdr)
EXPORT_SYMBOL(scsi_print_sense_hdr);
void
scsi_cmd_print_sense_hdr(struct scsi_cmnd *scmd, const char *desc,
struct scsi_sense_hdr *sshdr)
EXPORT_SYMBOL(scsi_cmd_print_sense_hdr);
static void
scsi_decode_sense_buffer(const unsigned char *sense_buffer, int sense_len,
struct scsi_sense_hdr *sshdr)
static void
scsi_decode_sense_extras(const unsigned char *sense_buffer, int sense_len,
struct scsi_sense_hdr *sshdr)
void __scsi_print_sense(const char *name, const unsigned char *sense_buffer,
int sense_len)
EXPORT_SYMBOL(__scsi_print_sense);
void scsi_print_sense(char *name, struct scsi_cmnd *cmd)
EXPORT_SYMBOL(scsi_print_sense);
static const char * const hostbyte_table[]=;
#define NUM_HOSTBYTE_STRS ARRAY_SIZE(hostbyte_table)
static const char * const driverbyte_table[]=;
#define NUM_DRIVERBYTE_STRS ARRAY_SIZE(driverbyte_table)
void scsi_show_result(int result)
void scsi_show_result(int result)
EXPORT_SYMBOL(scsi_show_result);
void scsi_print_result(struct scsi_cmnd *cmd)
EXPORT_SYMBOL(scsi_print_result);
