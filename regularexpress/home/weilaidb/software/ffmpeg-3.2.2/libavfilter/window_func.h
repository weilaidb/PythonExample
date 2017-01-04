#define AVFILTER_WINDOW_FUNC_H
enum WindowFunc     ;
void ff_generate_window_func(float *lut, int N, int win_func, float *overlap);
