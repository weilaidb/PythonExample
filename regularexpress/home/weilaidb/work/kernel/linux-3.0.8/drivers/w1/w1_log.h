#define __W1_LOG_H
#define DEBUG
#  define assert(expr) do  while (0)
#  define assert(expr) \
if(unlikely(!(expr)))
