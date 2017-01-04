#define MAXFUNCS 130
#define MAXKEYS 256
static const int num_key_names = MSG_KEYNAMES_END - MSG_KEYNAMES_START + 1;
static u_short key_offsets[MAXFUNCS], key_data[MAXKEYS];
static u_short masks[] = ;
static short letter_offsets[26] = ;
static u_char funcvals[] = ;
static u_char *state_tbl;
static int cur_item, nstates;
static void build_key_data(void)
static void say_key(int key)
static int help_init(void)
int handle_help(struct vc_data *vc, u_char type, u_char ch, u_short key)
