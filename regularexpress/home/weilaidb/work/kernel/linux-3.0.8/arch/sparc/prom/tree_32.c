extern void restore_current(void);
static char promlib_buf[128];
static phandle __prom_getchild(phandle node)
phandle prom_getchild(phandle node)
EXPORT_SYMBOL(prom_getchild);
static phandle __prom_getsibling(phandle node)
phandle prom_getsibling(phandle node)
EXPORT_SYMBOL(prom_getsibling);
int prom_getproplen(phandle node, const char *prop)
EXPORT_SYMBOL(prom_getproplen);
int prom_getproperty(phandle node, const char *prop, char *buffer, int bufsize)
EXPORT_SYMBOL(prom_getproperty);
int prom_getint(phandle node, char *prop)
EXPORT_SYMBOL(prom_getint);
int prom_getintdefault(phandle node, char *property, int deflt)
EXPORT_SYMBOL(prom_getintdefault);
int prom_getbool(phandle node, char *prop)
EXPORT_SYMBOL(prom_getbool);
void prom_getstring(phandle node, char *prop, char *user_buf, int ubuf_size)
EXPORT_SYMBOL(prom_getstring);
phandle prom_searchsiblings(phandle node_start, char *nodename)
EXPORT_SYMBOL(prom_searchsiblings);
static char *__prom_nextprop(phandle node, char * oprop)
char *prom_nextprop(phandle node, char *oprop, char *buffer)
EXPORT_SYMBOL(prom_nextprop);
phandle prom_finddevice(char *name)
EXPORT_SYMBOL(prom_finddevice);
int prom_setprop(phandle node, const char *pname, char *value, int size)
EXPORT_SYMBOL(prom_setprop);
phandle prom_inst2pkg(int inst)
