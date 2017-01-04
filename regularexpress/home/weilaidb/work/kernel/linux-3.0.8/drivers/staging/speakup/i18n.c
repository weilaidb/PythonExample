static char *speakup_msgs[MSG_LAST_INDEX];
static char *speakup_default_msgs[MSG_LAST_INDEX] = ;
static struct msg_group_t all_groups[] = ;
static const  int num_groups = sizeof(all_groups) / sizeof(struct msg_group_t);
char *msg_get(enum msg_index_t index)
static char *next_specifier(char *input)
static char *skip_flags(char *input)
static char *skip_width(char *input)
static char *skip_conversion(char *input)
static char *find_specifier_end(char *input)
static int compare_specifiers(char **input1, char **input2)
static int fmt_validate(char *template, char *user)
ssize_t msg_set(enum msg_index_t index, char *text, size_t length)
struct msg_group_t *find_msg_group(const char *group_name)
void reset_msg_group(struct msg_group_t *group)
void initialize_msgs(void)
void free_user_msgs(void)
