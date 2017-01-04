static phandle prom_node_to_node(const char *type, phandle node)
inline phandle __prom_getchild(phandle node)
inline phandle prom_getchild(phandle node)
EXPORT_SYMBOL(prom_getchild);
inline phandle prom_getparent(phandle node)
inline phandle __prom_getsibling(phandle node)
inline phandle prom_getsibling(phandle node)
EXPORT_SYMBOL(prom_getsibling);
inline int prom_getproplen(phandle node, const char *prop)
EXPORT_SYMBOL(prom_getproplen);
inline int prom_getproperty(phandle node, const char *prop,
char *buffer, int bufsize)
EXPORT_SYMBOL(prom_getproperty);
inline int prom_getint(phandle node, const char *prop)
EXPORT_SYMBOL(prom_getint);
int prom_getintdefault(phandle node, const char *property, int deflt)
EXPORT_SYMBOL(prom_getintdefault);
int prom_getbool(phandle node, const char *prop)
EXPORT_SYMBOL(prom_getbool);
void prom_getstring(phandle node, const char *prop, char *user_buf,
int ubuf_size)
EXPORT_SYMBOL(prom_getstring);
int prom_nodematch(phandle node, const char *name)
phandle prom_searchsiblings(phandle node_start, const char *nodename)
EXPORT_SYMBOL(prom_searchsiblings);
static const char *prom_nextprop_name = "nextprop";
inline char *prom_firstprop(phandle node, char *buffer)
EXPORT_SYMBOL(prom_firstprop);
inline char *prom_nextprop(phandle node, const char *oprop, char *buffer)
EXPORT_SYMBOL(prom_nextprop);
phandle prom_finddevice(const char *name)
EXPORT_SYMBOL(prom_finddevice);
int prom_node_has_property(phandle node, const char *prop)
EXPORT_SYMBOL(prom_node_has_property);
int
prom_setprop(phandle node, const char *pname, char *value, int size)
EXPORT_SYMBOL(prom_setprop);
inline phandle prom_inst2pkg(int inst)
int prom_ihandle2path(int handle, char *buffer, int bufsize)
