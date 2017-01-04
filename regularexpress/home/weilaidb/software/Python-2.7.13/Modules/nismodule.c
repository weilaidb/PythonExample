extern int yp_get_default_domain(char **);
PyDoc_STRVAR(get_default_domain__doc__,
"get_default_domain() -> str\n\
Corresponds to the C library yp_get_default_domain() call, returning\n\
the default NIS domain.\n");
PyDoc_STRVAR(match__doc__,
"match(key, map, domain = defaultdomain)\n\
Corresponds to the C library yp_match() call, returning the value of\n\
key in the given map. Optionally domain can be specified but it\n\
defaults to the system default domain.\n");
PyDoc_STRVAR(cat__doc__,
"cat(map, domain = defaultdomain)\n\
Returns the entire map as a dictionary. Optionally domain can be\n\
specified but it defaults to the system default domain.\n");
PyDoc_STRVAR(maps__doc__,
"maps(domain = defaultdomain)\n\
Returns an array of all available NIS maps within a domain. If domain\n\
is not specified it defaults to the system default domain.\n");
static PyObject *NisError;
static PyObject *
nis_error (int err)
static struct nis_map  aliases [] = ;
static char *
nis_mapname (char *map, int *pfix)
#if defined(__APPLE__) || defined(__OpenBSD__) || defined(__FreeBSD__)
typedef int (*foreachfunc)(unsigned long, char *, int, char *, int, void *);
typedef int (*foreachfunc)(int, char *, int, char *, int, char *);
struct ypcallback_data ;
static int
nis_foreach (int instatus, char *inkey, int inkeylen, char *inval,
int invallen, struct ypcallback_data *indata)
static PyObject *
nis_get_default_domain (PyObject *self)
static PyObject *
nis_match (PyObject *self, PyObject *args, PyObject *kwdict)
static PyObject *
nis_cat (PyObject *self, PyObject *args, PyObject *kwdict)
#define YPPROC_MAPLIST  11
#define YPPROG          100004
#define YPVERS          2
typedef char *domainname;
typedef char *mapname;
enum nisstat ;
typedef enum nisstat nisstat;
struct nismaplist ;
typedef struct nismaplist nismaplist;
struct nisresp_maplist ;
typedef struct nisresp_maplist nisresp_maplist;
static struct timeval TIMEOUT = ;
static
bool_t
nis_xdr_domainname(XDR *xdrs, domainname *objp)
static
bool_t
nis_xdr_mapname(XDR *xdrs, mapname *objp)
static
bool_t
nis_xdr_ypmaplist(XDR *xdrs, nismaplist *objp)
static
bool_t
nis_xdr_ypstat(XDR *xdrs, nisstat *objp)
static
bool_t
nis_xdr_ypresp_maplist(XDR *xdrs, nisresp_maplist *objp)
static
nisresp_maplist *
nisproc_maplist_2(domainname *argp, CLIENT *clnt)
static
nismaplist *
nis_maplist (char *dom)
static PyObject *
nis_maps (PyObject *self, PyObject *args, PyObject *kwdict)
static PyMethodDef nis_methods[] = ;
PyDoc_STRVAR(nis__doc__,
"This module contains functions for accessing NIS maps.\n");
void
initnis (void)
