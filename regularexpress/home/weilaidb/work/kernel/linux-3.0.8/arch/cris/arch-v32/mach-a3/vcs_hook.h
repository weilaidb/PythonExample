#define __hook_h__
int hook_call(unsigned id, unsigned pcnt, ...);
int hook_call_str(unsigned id, unsigned size, const char *str);
enum hook_ids ;
