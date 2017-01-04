static PyObject *
listmembers(struct memberlist *mlist)
PyObject *
PyMember_Get(const char *addr, struct memberlist *mlist, const char *name)
PyObject *
PyMember_GetOne(const char *addr, PyMemberDef *l)
int
PyMember_Set(char *addr, struct memberlist *mlist, const char *name, PyObject *v)
#define WARN(msg)                                       \
do  while (0)
int
PyMember_SetOne(char *addr, PyMemberDef *l, PyObject *v)
