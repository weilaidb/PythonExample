#define ____glue(name,fn)	name##fn
#define ____glue(name,fn)	namefn
#define __glue(name,fn)		____glue(name,fn)
