const struct filedescr _PyImport_DynLoadFiletab[] = ;
#if defined(MAXPATHLEN) && !defined(_SYS_PARAM_H)
#undef MAXPATHLEN
static PyThread_type_lock beos_dyn_lock;
static PyObject *beos_dyn_images = NULL;
static void beos_nuke_dyn( PyObject *item )
static void beos_cleanup_dyn( void )
static void beos_init_dyn( void )
static void beos_add_dyn( char *name, image_id id )
dl_funcptr _PyImport_GetDynLoadFunc(const char *fqname, const char *shortname,
const char *pathname, FILE *fp)
