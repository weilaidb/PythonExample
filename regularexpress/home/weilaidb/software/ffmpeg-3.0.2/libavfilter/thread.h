#define AVFILTER_THREAD_H
int ff_graph_thread_init(AVFilterGraph *graph);
void ff_graph_thread_free(AVFilterGraph *graph);
