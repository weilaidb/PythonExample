#define _ASM_DEBUG_H
#define db_assert(x)  if (!(x))
#define db_warn(x)  if (!(x))
#define db_verify(x, y) db_assert(x y)
#define db_verify_warn(x, y) db_warn(x y)
#define db_run(x)  do  while (0)
#define db_assert(x)
#define db_warn(x)
#define db_verify(x, y) x
#define db_verify_warn(x, y) x
#define db_run(x)
