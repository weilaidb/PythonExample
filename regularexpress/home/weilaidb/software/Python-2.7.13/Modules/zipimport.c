#define IS_SOURCE   0x0
#define IS_BYTECODE 0x1
#define IS_PACKAGE  0x2
struct st_zip_searchorder ;
static struct st_zip_searchorder zip_searchorder[] = ;
typedef struct _zipimporter ZipImporter;
struct _zipimporter ;
static PyObject *ZipImportError;
static PyObject *zip_directory_cache = NULL;
static PyObject *read_directory(const char *archive);
static PyObject *get_data(const char *archive, PyObject *toc_entry);
static PyObject *get_module_code(ZipImporter *self, char *fullname,
int *p_ispackage, char **p_modpath);
#define ZipImporter_Check(op) PyObject_TypeCheck(op, &ZipImporter_Type)
static int
zipimporter_init(ZipImporter *self, PyObject *args, PyObject *kwds)
static int
zipimporter_traverse(PyObject *obj, visitproc visit, void *arg)
static void
zipimporter_dealloc(ZipImporter *self)
static PyObject *
zipimporter_repr(ZipImporter *self)
static char *
get_subname(char *fullname)
static int
make_filename(char *prefix, char *name, char *path)
enum zi_module_info ;
static enum zi_module_info
get_module_info(ZipImporter *self, char *fullname)
static PyObject *
zipimporter_find_module(PyObject *obj, PyObject *args)
static PyObject *
zipimporter_load_module(PyObject *obj, PyObject *args)
static PyObject *
zipimporter_get_filename(PyObject *obj, PyObject *args)
static PyObject *
zipimporter_is_package(PyObject *obj, PyObject *args)
static PyObject *
zipimporter_get_data(PyObject *obj, PyObject *args)
static PyObject *
zipimporter_get_code(PyObject *obj, PyObject *args)
static PyObject *
zipimporter_get_source(PyObject *obj, PyObject *args)
PyDoc_STRVAR(doc_find_module,
"find_module(fullname, path=None) -> self or None.\n\
\n\
Search for a module specified by 'fullname'. 'fullname' must be the\n\
fully qualified (dotted) module name. It returns the zipimporter\n\
instance itself if the module was found, or None if it wasn't.\n\
The optional 'path' argument is ignored -- it's there for compatibility\n\
with the importer protocol.");
PyDoc_STRVAR(doc_load_module,
"load_module(fullname) -> module.\n\
\n\
Load the module specified by 'fullname'. 'fullname' must be the\n\
fully qualified (dotted) module name. It returns the imported\n\
module, or raises ZipImportError if it wasn't found.");
PyDoc_STRVAR(doc_get_data,
"get_data(pathname) -> string with file data.\n\
\n\
Return the data associated with 'pathname'. Raise IOError if\n\
the file wasn't found.");
PyDoc_STRVAR(doc_is_package,
"is_package(fullname) -> bool.\n\
\n\
Return True if the module specified by fullname is a package.\n\
Raise ZipImportError if the module couldn't be found.");
PyDoc_STRVAR(doc_get_code,
"get_code(fullname) -> code object.\n\
\n\
Return the code object for the specified module. Raise ZipImportError\n\
if the module couldn't be found.");
PyDoc_STRVAR(doc_get_source,
"get_source(fullname) -> source string.\n\
\n\
Return the source code for the specified module. Raise ZipImportError\n\
if the module couldn't be found, return None if the archive does\n\
contain the module, but has no source for it.");
PyDoc_STRVAR(doc_get_filename,
"get_filename(fullname) -> filename string.\n\
\n\
Return the filename for the specified module.");
static PyMethodDef zipimporter_methods[] = ;
static PyMemberDef zipimporter_members[] = ;
PyDoc_STRVAR(zipimporter_doc,
"zipimporter(archivepath) -> zipimporter object\n\
\n\
Create a new zipimporter instance. 'archivepath' must be a path to\n\
a zipfile, or to a specific path inside a zipfile. For example, it can be\n\
'/tmp/myimport.zip', or '/tmp/myimport.zip/mydirectory', if mydirectory is a\n\
valid directory inside the archive.\n\
\n\
'ZipImportError is raised if 'archivepath' doesn't point to a valid Zip\n\
archive.\n\
\n\
The 'archive' attribute of zipimporter objects contains the name of the\n\
zipfile targeted.");
#define DEFERRED_ADDRESS(ADDR) 0
static PyTypeObject ZipImporter_Type = ;
static unsigned int
get_uint32(const unsigned char *buf)
static unsigned short
get_uint16(const unsigned char *buf)
static void
set_file_error(const char *archive, int eof)
static PyObject *
read_directory(const char *archive)
static PyObject *
get_decompress_func(void)
static PyObject *
get_data(const char *archive, PyObject *toc_entry)
static int
eq_mtime(time_t t1, time_t t2)
static PyObject *
unmarshal_code(const char *pathname, PyObject *data, time_t mtime)
static PyObject *
normalize_line_endings(PyObject *source)
static PyObject *
compile_source(char *pathname, PyObject *source)
static time_t
parse_dostime(int dostime, int dosdate)
static time_t
get_mtime_of_source(ZipImporter *self, char *path)
static PyObject *
get_code_from_data(ZipImporter *self, int ispackage, int isbytecode,
time_t mtime, PyObject *toc_entry)
static PyObject *
get_module_code(ZipImporter *self, char *fullname,
int *p_ispackage, char **p_modpath)
PyDoc_STRVAR(zipimport_doc,
"zipimport provides support for importing Python modules from Zip archives.\n\
\n\
This module exports three objects:\n\
- zipimporter: a class; its constructor takes a path to a Zip archive.\n\
- ZipImportError: exception raised by zipimporter objects. It's a\n\
subclass of ImportError, so it can be caught as ImportError, too.\n\
- _zip_directory_cache: a dict, mapping archive paths to zip directory\n\
info dicts, as used in zipimporter._files.\n\
\n\
It is usually not needed to use the zipimport module explicitly; it is\n\
used by the builtin import mechanism for sys.path items that are paths\n\
to Zip archives.");
PyMODINIT_FUNC
initzipimport(void)
