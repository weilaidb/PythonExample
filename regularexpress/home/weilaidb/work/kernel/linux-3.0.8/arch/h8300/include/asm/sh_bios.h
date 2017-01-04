#define SH_BIOS_H
#define HAL_IF_VECTOR_TABLE 0xfffe20
#define CALL_IF_SET_CONSOLE_COMM  13
#define QUERY_CURRENT -1
#define MANGLER       -3
static int sh_bios_in_gdb_mode(void)
static void sh_bios_gdb_detach(void)
