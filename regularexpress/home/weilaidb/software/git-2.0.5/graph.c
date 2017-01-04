static void graph_padding_line(struct git_graph *graph, struct strbuf *sb);
static void graph_show_strbuf(struct git_graph *graph, struct strbuf const *sb);
struct column ;
enum graph_state ;
static const char **column_colors;
static unsigned short column_colors_max;
void graph_set_column_colors(const char **colors, unsigned short colors_max)
static const char *column_get_color_code(unsigned short color)
static void strbuf_write_column(struct strbuf *sb, const struct column *c,
char col_char)
struct git_graph ;
static struct strbuf *diff_output_prefix_callback(struct diff_options *opt, void *data)
struct git_graph *graph_init(struct rev_info *opt)
static void graph_update_state(struct git_graph *graph, enum graph_state s)
static void graph_ensure_capacity(struct git_graph *graph, int num_columns)
static int graph_is_interesting(struct git_graph *graph, struct commit *commit)
static struct commit_list *next_interesting_parent(struct git_graph *graph,
struct commit_list *orig)
static struct commit_list *first_interesting_parent(struct git_graph *graph)
static unsigned short graph_get_current_column_color(const struct git_graph *graph)
static void graph_increment_column_color(struct git_graph *graph)
static unsigned short graph_find_commit_color(const struct git_graph *graph,
const struct commit *commit)
static void graph_insert_into_new_columns(struct git_graph *graph,
struct commit *commit,
int *mapping_index)
static void graph_update_width(struct git_graph *graph,
int is_commit_in_existing_columns)
static void graph_update_columns(struct git_graph *graph)
void graph_update(struct git_graph *graph, struct commit *commit)
static int graph_is_mapping_correct(struct git_graph *graph)
static void graph_pad_horizontally(struct git_graph *graph, struct strbuf *sb,
int chars_written)
static void graph_output_padding_line(struct git_graph *graph,
struct strbuf *sb)
static void graph_output_skip_line(struct git_graph *graph, struct strbuf *sb)
static void graph_output_pre_commit_line(struct git_graph *graph,
struct strbuf *sb)
static void graph_output_commit_char(struct git_graph *graph, struct strbuf *sb)
static int graph_draw_octopus_merge(struct git_graph *graph,
struct strbuf *sb)
static void graph_output_commit_line(struct git_graph *graph, struct strbuf *sb)
static struct column *find_new_column_by_commit(struct git_graph *graph,
struct commit *commit)
static void graph_output_post_merge_line(struct git_graph *graph, struct strbuf *sb)
static void graph_output_collapsing_line(struct git_graph *graph, struct strbuf *sb)
int graph_next_line(struct git_graph *graph, struct strbuf *sb)
static void graph_padding_line(struct git_graph *graph, struct strbuf *sb)
int graph_is_commit_finished(struct git_graph const *graph)
void graph_show_commit(struct git_graph *graph)
void graph_show_oneline(struct git_graph *graph)
void graph_show_padding(struct git_graph *graph)
int graph_show_remainder(struct git_graph *graph)
static void graph_show_strbuf(struct git_graph *graph, struct strbuf const *sb)
void graph_show_commit_msg(struct git_graph *graph,
struct strbuf const *sb)
