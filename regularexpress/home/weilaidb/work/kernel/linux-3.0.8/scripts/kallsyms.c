#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))
#define KSYM_NAME_LEN		128
struct sym_entry ;
struct text_range ;
static unsigned long long _text;
static struct text_range text_ranges[] = ;
#define text_range_text     (&text_ranges[0])
#define text_range_inittext (&text_ranges[1])
static struct sym_entry *table;
static unsigned int table_size, table_cnt;
static int all_symbols = 0;
static char symbol_prefix_char = '\0';
int token_profit[0x10000];
unsigned char best_table[256][2];
unsigned char best_table_len[256];
static void usage(void)
static inline int is_arm_mapping_symbol(const char *str)
static int read_symbol_tr(const char *sym, unsigned long long addr)
static int read_symbol(FILE *in, struct sym_entry *s)
static int symbol_valid_tr(struct sym_entry *s)
static int symbol_valid(struct sym_entry *s)
static void read_map(FILE *in)
static void output_label(char *label)
static int expand_symbol(unsigned char *data, int len, char *result)
static void write_src(void)
static void learn_symbol(unsigned char *symbol, int len)
static void forget_symbol(unsigned char *symbol, int len)
static void build_initial_tok_table(void)
static void *find_token(unsigned char *str, int len, unsigned char *token)
static void compress_symbols(unsigned char *str, int idx)
static int find_best_token(void)
static void optimize_result(void)
static void insert_real_symbols_in_table(void)
static void optimize_token_table(void)
static int may_be_linker_script_provide_symbol(const struct sym_entry *se)
static int prefix_underscores_count(const char *str)
static int compare_symbols(const void *a, const void *b)
static void sort_symbols(void)
int main(int argc, char **argv)
