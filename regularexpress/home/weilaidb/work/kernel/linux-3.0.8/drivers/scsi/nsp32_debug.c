static const char unknown[] = "UNKNOWN";
static const char * group_0_commands[] = ;
static const char *group_1_commands[] = ;
static const char *group_2_commands[] = ;
#define group(opcode) (((opcode) >> 5) & 7)
#define RESERVED_GROUP  0
#define VENDOR_GROUP    1
#define NOTEXT_GROUP    2
static const char **commands[] = ;
static const char reserved[] = "RESERVED";
static const char vendor[] = "VENDOR SPECIFIC";
static void print_opcodek(unsigned char opcode)
static void print_commandk (unsigned char *command)
static void show_command(Scsi_Cmnd *SCpnt)
static void show_busphase(unsigned char stat)
static void show_autophase(unsigned short i)
static void nsp32_print_register(int base)
