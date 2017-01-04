#define _LINUX_CONST_H
#define _AC(X,Y)	X
#define _AT(T,X)	X
#define __AC(X,Y)	(X##Y)
#define _AC(X,Y)	__AC(X,Y)
#define _AT(T,X)	((T)(X))
