#define XML_COMBINED_VERSION (10000*XML_MAJOR_VERSION+100*XML_MINOR_VERSION+XML_MICRO_VERSION)
#define PyDoc_STR(str)         str
#define PyDoc_VAR(name)        static char name[]
#define PyDoc_STRVAR(name,str) PyDoc_VAR(name) = PyDoc_STR(str)
#if (PY_MAJOR_VERSION == 2 && PY_MINOR_VERSION < 2)
#define Py_USING_UNICODE
#define FIX_TRACE
enum HandlerTypes ;
static PyObject *ErrorObject;
typedef struct  xmlparseobject;
#define CHARACTER_DATA_BUFFER_SIZE 8192
static PyTypeObject Xmlparsetype;
typedef void (*xmlhandlersetter)(XML_Parser self, void *meth);
typedef void* xmlhandler;
struct HandlerInfo ;
static struct HandlerInfo handler_info[64];
static int
set_error_attr(PyObject *err, char *name, int value)
static PyObject *
set_error(xmlparseobject *self, enum XML_Error code)
static int
have_handler(xmlparseobject *self, int type)
static PyObject *
get_handler_name(struct HandlerInfo *hinfo)
static PyObject *
conv_string_to_unicode(const XML_Char *str)
static PyObject *
conv_string_len_to_unicode(const XML_Char *str, int len)
static PyObject *
conv_string_to_utf8(const XML_Char *str)
static PyObject *
conv_string_len_to_utf8(const XML_Char *str, int len)
static void clear_handlers(xmlparseobject *self, int initial);
static int
error_external_entity_ref_handler(XML_Parser parser,
const XML_Char *context,
const XML_Char *base,
const XML_Char *systemId,
const XML_Char *publicId)
static void
noop_character_data_handler(void *userData, const XML_Char *data, int len)
static void
flag_error(xmlparseobject *self)
static PyCodeObject*
getcode(enum HandlerTypes slot, char* func_name, int lineno)
static int
trace_frame(PyThreadState *tstate, PyFrameObject *f, int code, PyObject *val)
static int
trace_frame_exc(PyThreadState *tstate, PyFrameObject *f)
static PyObject*
call_with_frame(PyCodeObject *c, PyObject* func, PyObject* args,
xmlparseobject *self)
tstate->frame = f->f_back;
Py_DECREF(f);
return res;
}
#define STRING_CONV_FUNC conv_string_to_utf8
#define STRING_CONV_FUNC (self->returns_unicode \
? conv_string_to_unicode : conv_string_to_utf8)
static PyObject*
string_intern(xmlparseobject *self, const char* str)
static int
call_character_handler(xmlparseobject *self, const XML_Char *buffer, int len)
static int
flush_character_buffer(xmlparseobject *self)
static void
my_CharacterDataHandler(void *userData, const XML_Char *data, int len)
static void
my_StartElementHandler(void *userData,
const XML_Char *name, const XML_Char *atts[])
#define RC_HANDLER(RC, NAME, PARAMS, INIT, PARAM_FORMAT, CONVERSION, \
RETURN, GETUSERDATA) \
static RC \
my_##NAME##Handler PARAMS
#define VOID_HANDLER(NAME, PARAMS, PARAM_FORMAT) \
RC_HANDLER(void, NAME, PARAMS, ;, PARAM_FORMAT, ;, ;,\
(xmlparseobject *)userData)
#define INT_HANDLER(NAME, PARAMS, PARAM_FORMAT)\
RC_HANDLER(int, NAME, PARAMS, int rc=0;, PARAM_FORMAT, \
rc = PyInt_AsLong(rv);, rc, \
(xmlparseobject *)userData)
VOID_HANDLER(EndElement,
(void *userData, const XML_Char *name),
(, string_intern(self, name)))
VOID_HANDLER(ProcessingInstruction,
(void *userData,
const XML_Char *target,
const XML_Char *data),
(, string_intern(self, target), STRING_CONV_FUNC,data))
VOID_HANDLER(UnparsedEntityDecl,
(void *userData,
const XML_Char *entityName,
const XML_Char *base,
const XML_Char *systemId,
const XML_Char *publicId,
const XML_Char *notationName),
(,
string_intern(self, entityName), string_intern(self, base),
string_intern(self, systemId), string_intern(self, publicId),
string_intern(self, notationName)))
VOID_HANDLER(EntityDecl,
(void *userData,
const XML_Char *entityName,
int is_parameter_entity,
const XML_Char *value,
int value_length,
const XML_Char *base,
const XML_Char *systemId,
const XML_Char *publicId,
const XML_Char *notationName),
(,
string_intern(self, entityName), is_parameter_entity,
conv_string_len_to_utf8(value, value_length),
string_intern(self, base), string_intern(self, systemId),
string_intern(self, publicId),
string_intern(self, notationName)))
VOID_HANDLER(EntityDecl,
(void *userData,
const XML_Char *entityName,
int is_parameter_entity,
const XML_Char *value,
int value_length,
const XML_Char *base,
const XML_Char *systemId,
const XML_Char *publicId,
const XML_Char *notationName),
(,
string_intern(self, entityName), is_parameter_entity,
(self->returns_unicode
? conv_string_len_to_unicode(value, value_length)
: conv_string_len_to_utf8(value, value_length)),
string_intern(self, base), string_intern(self, systemId),
string_intern(self, publicId),
string_intern(self, notationName)))
VOID_HANDLER(XmlDecl,
(void *userData,
const XML_Char *version,
const XML_Char *encoding,
int standalone),
(,
STRING_CONV_FUNC,version, STRING_CONV_FUNC,encoding,
standalone))
static PyObject *
conv_content_model(XML_Content * const model,
PyObject *(*conv_string)(const XML_Char *))
static void
my_ElementDeclHandler(void *userData,
const XML_Char *name,
XML_Content *model)
VOID_HANDLER(AttlistDecl,
(void *userData,
const XML_Char *elname,
const XML_Char *attname,
const XML_Char *att_type,
const XML_Char *dflt,
int isrequired),
(,
string_intern(self, elname), string_intern(self, attname),
STRING_CONV_FUNC,att_type, STRING_CONV_FUNC,dflt,
isrequired))
#if XML_COMBINED_VERSION >= 19504
VOID_HANDLER(SkippedEntity,
(void *userData,
const XML_Char *entityName,
int is_parameter_entity),
(,
string_intern(self, entityName), is_parameter_entity))
VOID_HANDLER(NotationDecl,
(void *userData,
const XML_Char *notationName,
const XML_Char *base,
const XML_Char *systemId,
const XML_Char *publicId),
(,
string_intern(self, notationName), string_intern(self, base),
string_intern(self, systemId), string_intern(self, publicId)))
VOID_HANDLER(StartNamespaceDecl,
(void *userData,
const XML_Char *prefix,
const XML_Char *uri),
(,
string_intern(self, prefix), string_intern(self, uri)))
VOID_HANDLER(EndNamespaceDecl,
(void *userData,
const XML_Char *prefix),
(, string_intern(self, prefix)))
VOID_HANDLER(Comment,
(void *userData, const XML_Char *data),
(, STRING_CONV_FUNC,data))
VOID_HANDLER(StartCdataSection,
(void *userData),
())
VOID_HANDLER(EndCdataSection,
(void *userData),
())
VOID_HANDLER(Default,
(void *userData, const XML_Char *s, int len),
(, conv_string_len_to_utf8(s,len)))
VOID_HANDLER(DefaultHandlerExpand,
(void *userData, const XML_Char *s, int len),
(, conv_string_len_to_utf8(s,len)))
VOID_HANDLER(Default,
(void *userData, const XML_Char *s, int len),
(, (self->returns_unicode
? conv_string_len_to_unicode(s,len)
: conv_string_len_to_utf8(s,len))))
VOID_HANDLER(DefaultHandlerExpand,
(void *userData, const XML_Char *s, int len),
(, (self->returns_unicode
? conv_string_len_to_unicode(s,len)
: conv_string_len_to_utf8(s,len))))
INT_HANDLER(NotStandalone,
(void *userData),
())
RC_HANDLER(int, ExternalEntityRef,
(XML_Parser parser,
const XML_Char *context,
const XML_Char *base,
const XML_Char *systemId,
const XML_Char *publicId),
int rc=0;,
(,
STRING_CONV_FUNC,context, string_intern(self, base),
string_intern(self, systemId), string_intern(self, publicId)),
rc = PyInt_AsLong(rv);, rc,
XML_GetUserData(parser))
VOID_HANDLER(StartDoctypeDecl,
(void *userData, const XML_Char *doctypeName,
const XML_Char *sysid, const XML_Char *pubid,
int has_internal_subset),
(, string_intern(self, doctypeName),
string_intern(self, sysid), string_intern(self, pubid),
has_internal_subset))
VOID_HANDLER(EndDoctypeDecl, (void *userData), ())
static PyObject *
get_parse_result(xmlparseobject *self, int rv)
PyDoc_STRVAR(xmlparse_Parse__doc__,
"Parse(data[, isfinal])\n\
Parse XML data.  `isfinal' should be true at end of input.");
static PyObject *
xmlparse_Parse(xmlparseobject *self, PyObject *args)
#define BUF_SIZE 2048
static int
readinst(char *buf, int buf_size, PyObject *meth)
PyDoc_STRVAR(xmlparse_ParseFile__doc__,
"ParseFile(file)\n\
Parse XML data from file-like object.");
static PyObject *
xmlparse_ParseFile(xmlparseobject *self, PyObject *f)
PyDoc_STRVAR(xmlparse_SetBase__doc__,
"SetBase(base_url)\n\
Set the base URL for the parser.");
static PyObject *
xmlparse_SetBase(xmlparseobject *self, PyObject *args)
PyDoc_STRVAR(xmlparse_GetBase__doc__,
"GetBase() -> url\n\
Return base URL string for the parser.");
static PyObject *
xmlparse_GetBase(xmlparseobject *self, PyObject *unused)
PyDoc_STRVAR(xmlparse_GetInputContext__doc__,
"GetInputContext() -> string\n\
Return the untranslated text of the input that caused the current event.\n\
If the event was generated by a large amount of text (such as a start tag\n\
for an element with many attributes), not all of the text may be available.");
static PyObject *
xmlparse_GetInputContext(xmlparseobject *self, PyObject *unused)
PyDoc_STRVAR(xmlparse_ExternalEntityParserCreate__doc__,
"ExternalEntityParserCreate(context[, encoding])\n\
Create a parser for parsing an external entity based on the\n\
information passed to the ExternalEntityRefHandler.");
static PyObject *
xmlparse_ExternalEntityParserCreate(xmlparseobject *self, PyObject *args)
PyDoc_STRVAR(xmlparse_SetParamEntityParsing__doc__,
"SetParamEntityParsing(flag) -> success\n\
Controls parsing of parameter entities (including the external DTD\n\
subset). Possible flag values are XML_PARAM_ENTITY_PARSING_NEVER,\n\
XML_PARAM_ENTITY_PARSING_UNLESS_STANDALONE and\n\
XML_PARAM_ENTITY_PARSING_ALWAYS. Returns true if setting the flag\n\
was successful.");
static PyObject*
xmlparse_SetParamEntityParsing(xmlparseobject *p, PyObject* args)
#if XML_COMBINED_VERSION >= 19505
PyDoc_STRVAR(xmlparse_UseForeignDTD__doc__,
"UseForeignDTD([flag])\n\
Allows the application to provide an artificial external subset if one is\n\
not specified as part of the document instance.  This readily allows the\n\
use of a 'default' document type controlled by the application, while still\n\
getting the advantage of providing document type information to the parser.\n\
'flag' defaults to True if not provided.");
static PyObject *
xmlparse_UseForeignDTD(xmlparseobject *self, PyObject *args)
static struct PyMethodDef xmlparse_methods[] = ;
static char template_buffer[257];
PyObject *template_string = NULL;
static void
init_template_buffer(void)
static int
PyUnknownEncodingHandler(void *encodingHandlerData,
const XML_Char *name,
XML_Encoding *info)
static PyObject *
newxmlparseobject(char *encoding, char *namespace_separator, PyObject *intern)
static void
xmlparse_dealloc(xmlparseobject *self)
static int
handlername2int(const char *name)
static PyObject *
get_pybool(int istrue)
static PyObject *
xmlparse_getattr(xmlparseobject *self, char *name)
static int
sethandler(xmlparseobject *self, const char *name, PyObject* v)
static int
xmlparse_setattr(xmlparseobject *self, char *name, PyObject *v)
static int
xmlparse_traverse(xmlparseobject *op, visitproc visit, void *arg)
static int
xmlparse_clear(xmlparseobject *op)
PyDoc_STRVAR(Xmlparsetype__doc__, );
static PyTypeObject Xmlparsetype = ;
PyDoc_STRVAR(pyexpat_ParserCreate__doc__,
"ParserCreate([encoding[, namespace_separator]]) -> parser\n\
Return a new XML parser object.");
static PyObject *
pyexpat_ParserCreate(PyObject *notused, PyObject *args, PyObject *kw)
PyDoc_STRVAR(pyexpat_ErrorString__doc__,
"ErrorString(errno) -> string\n\
Returns string error for given number.");
static PyObject *
pyexpat_ErrorString(PyObject *self, PyObject *args)
static struct PyMethodDef pyexpat_methods[] = ;
PyDoc_STRVAR(pyexpat_module_documentation,
);
#define MODULE_NAME
#define MODULE_INITFUNC initpyexpat
#   ifdef MS_WINDOWS
#       define PyMODINIT_FUNC __declspec(dllexport) void
#   else
#       define PyMODINIT_FUNC void
#   endif
PyMODINIT_FUNC MODULE_INITFUNC(void);
PyMODINIT_FUNC
MODULE_INITFUNC(void)
static void
clear_handlers(xmlparseobject *self, int initial)
static struct HandlerInfo handler_info[] = ;
