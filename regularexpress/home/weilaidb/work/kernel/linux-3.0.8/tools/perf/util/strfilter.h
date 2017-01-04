#define __PERF_STRFILTER_H
struct strfilter_node ;
struct strfilter ;
struct strfilter *strfilter__new(const char *rules, const char **err);
bool strfilter__compare(struct strfilter *self, const char *str);
void strfilter__delete(struct strfilter *self);
