#define GRAPH_H
struct git_graph;
void graph_set_column_colors(const char **colors, unsigned short colors_max);
struct git_graph *graph_init(struct rev_info *opt);
void graph_update(struct git_graph *graph, struct commit *commit);
int graph_is_commit_finished(struct git_graph const *graph);
int graph_next_line(struct git_graph *graph, struct strbuf *sb);
void graph_show_commit(struct git_graph *graph);
void graph_show_oneline(struct git_graph *graph);
void graph_show_padding(struct git_graph *graph);
int graph_show_remainder(struct git_graph *graph);
void graph_show_commit_msg(struct git_graph *graph, struct strbuf const *sb);
