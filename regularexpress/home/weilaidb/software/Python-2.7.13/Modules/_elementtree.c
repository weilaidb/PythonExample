#define USE_EXPAT
#define STATIC_CHILDREN 4
#if defined(_MSC_VER)
#define LOCAL(type) static __inline type __fastcall
#define LOCAL(type) static type
#if (PY_VERSION_HEX < 0x02060000)
#define Py_REFCNT(ob) (((PyObject*)(ob))->ob_refcnt)
#define Py_TYPE(ob) (((PyObject*)(ob))->ob_type)
#if (PY_VERSION_HEX < 0x02050000)
typedef int Py_ssize_t;
#define lenfunc inquiry
#if (PY_VERSION_HEX < 0x02040000)
#define PyDict_CheckExact PyDict_Check
#if !defined(Py_RETURN_NONE)
#define Py_RETURN_NONE return Py_INCREF(Py_None), Py_None
#define JOIN_GET(p) ((Py_uintptr_t) (p) & 1)
#define JOIN_SET(p, flag) ((void*) ((Py_uintptr_t) (JOIN_OBJ(p)) | (flag)))
#define JOIN_OBJ(p) ((PyObject*) ((Py_uintptr_t) (p) & ~1))
static PyObject* elementtree_parseerror_obj;
static PyObject* elementtree_copyelement_obj;
static PyObject* elementtree_deepcopy_obj;
static PyObject* elementtree_iter_obj;
static PyObject* elementtree_itertext_obj;
static PyObject* elementpath_obj;
LOCAL(PyObject*)
deepcopy(PyObject* object, PyObject* memo)
LOCAL(PyObject*)
list_join(PyObject* list)
typedef struct  ElementObjectExtra;
typedef struct  ElementObject;
staticforward PyTypeObject Element_Type;
#define Element_CheckExact(op) (Py_TYPE(op) == &Element_Type)
LOCAL(int)
element_new_extra(ElementObject* self, PyObject* attrib)
LOCAL(void)
element_dealloc_extra(ElementObject* self)
LOCAL(PyObject*)
element_new(PyObject* tag, PyObject* attrib)
LOCAL(int)
element_resize(ElementObject* self, Py_ssize_t extra)
LOCAL(int)
element_add_subelement(ElementObject* self, PyObject* element)
LOCAL(PyObject*)
element_get_attrib(ElementObject* self)
LOCAL(PyObject*)
element_get_text(ElementObject* self)
LOCAL(PyObject*)
element_get_tail(ElementObject* self)
static PyObject*
element(PyObject* self, PyObject* args, PyObject* kw)
static PyObject*
subelement(PyObject* self, PyObject* args, PyObject* kw)
static void
element_dealloc(ElementObject* self)
static PyObject*
element_append(ElementObject* self, PyObject* args)
static PyObject*
element_clear(ElementObject* self, PyObject* args)
static PyObject*
element_copy(ElementObject* self, PyObject* args)
static PyObject*
element_deepcopy(ElementObject* self, PyObject* args)
LOCAL(int)
checkpath(PyObject* tag)
static PyObject*
element_extend(ElementObject* self, PyObject* args)
static PyObject*
element_find(ElementObject* self, PyObject* args)
static PyObject*
element_findtext(ElementObject* self, PyObject* args)
static PyObject*
element_findall(ElementObject* self, PyObject* args)
static PyObject*
element_iterfind(ElementObject* self, PyObject* args)
static PyObject*
element_get(ElementObject* self, PyObject* args)
static PyObject*
element_getchildren(ElementObject* self, PyObject* args)
static PyObject*
element_iter(ElementObject* self, PyObject* args)
static PyObject*
element_itertext(ElementObject* self, PyObject* args)
static PyObject*
element_getitem(PyObject* self_, Py_ssize_t index)
static PyObject*
element_insert(ElementObject* self, PyObject* args)
static PyObject*
element_items(ElementObject* self, PyObject* args)
static PyObject*
element_keys(ElementObject* self, PyObject* args)
static Py_ssize_t
element_length(ElementObject* self)
static PyObject*
element_makeelement(PyObject* self, PyObject* args, PyObject* kw)
static PyObject*
element_reduce(ElementObject* self, PyObject* args)
static PyObject*
element_remove(ElementObject* self, PyObject* args)
static PyObject*
element_repr(ElementObject* self)
static PyObject*
element_set(ElementObject* self, PyObject* args)
static int
element_setitem(PyObject* self_, Py_ssize_t index_, PyObject* item)
static PyObject*
element_subscr(PyObject* self_, PyObject* item)
{
ElementObject* self = (ElementObject*) self_;
#if (PY_VERSION_HEX < 0x02050000)
if (PyInt_Check(item) || PyLong_Check(item))
static int
element_ass_subscr(PyObject* self_, PyObject* item, PyObject* value)
{
ElementObject* self = (ElementObject*) self_;
#if (PY_VERSION_HEX < 0x02050000)
if (PyInt_Check(item) || PyLong_Check(item))
static PyMethodDef element_methods[] = ;
static PyObject*
element_getattr(ElementObject* self, char* name)
static int
element_setattr(ElementObject* self, const char* name, PyObject* value)
static PySequenceMethods element_as_sequence = ;
static PyMappingMethods element_as_mapping = ;
statichere PyTypeObject Element_Type = ;
typedef struct  TreeBuilderObject;
staticforward PyTypeObject TreeBuilder_Type;
#define TreeBuilder_CheckExact(op) (Py_TYPE(op) == &TreeBuilder_Type)
LOCAL(PyObject*)
treebuilder_new(void)
static PyObject*
treebuilder(PyObject* self_, PyObject* args)
static void
treebuilder_dealloc(TreeBuilderObject* self)
LOCAL(int)
treebuilder_append_event(TreeBuilderObject *self, PyObject *action,
PyObject *node)
LOCAL(PyObject*)
treebuilder_handle_xml(TreeBuilderObject* self, PyObject* encoding,
PyObject* standalone)
LOCAL(PyObject*)
treebuilder_handle_start(TreeBuilderObject* self, PyObject* tag,
PyObject* attrib)
LOCAL(PyObject*)
treebuilder_handle_data(TreeBuilderObject* self, PyObject* data)
LOCAL(PyObject*)
treebuilder_handle_end(TreeBuilderObject* self, PyObject* tag)
static PyObject*
treebuilder_data(TreeBuilderObject* self, PyObject* args)
static PyObject*
treebuilder_end(TreeBuilderObject* self, PyObject* args)
LOCAL(PyObject*)
treebuilder_done(TreeBuilderObject* self)
static PyObject*
treebuilder_close(TreeBuilderObject* self, PyObject* args)
static PyObject*
treebuilder_start(TreeBuilderObject* self, PyObject* args)
static PyObject*
treebuilder_xml(TreeBuilderObject* self, PyObject* args)
static PyMethodDef treebuilder_methods[] = ;
static PyObject*
treebuilder_getattr(TreeBuilderObject* self, char* name)
statichere PyTypeObject TreeBuilder_Type = ;
#if defined(USE_EXPAT)
#if defined(USE_PYEXPAT_CAPI)
static struct PyExpat_CAPI* expat_capi;
#define EXPAT(func) (expat_capi->func)
#define EXPAT(func) (XML_##func)
typedef struct  XMLParserObject;
staticforward PyTypeObject XMLParser_Type;
#if defined(Py_USING_UNICODE)
LOCAL(int)
checkstring(const char* string, int size)
LOCAL(PyObject*)
makestring(const char* string, int size)
LOCAL(PyObject*)
makeuniversal(XMLParserObject* self, const char* string)
static void
expat_set_error(const char* message, int line, int column)
static void
expat_default_handler(XMLParserObject* self, const XML_Char* data_in,
int data_len)
static void
expat_start_handler(XMLParserObject* self, const XML_Char* tag_in,
const XML_Char **attrib_in)
static void
expat_data_handler(XMLParserObject* self, const XML_Char* data_in,
int data_len)
static void
expat_end_handler(XMLParserObject* self, const XML_Char* tag_in)
static void
expat_start_ns_handler(XMLParserObject* self, const XML_Char* prefix,
const XML_Char *uri)
static void
expat_end_ns_handler(XMLParserObject* self, const XML_Char* prefix_in)
static void
expat_comment_handler(XMLParserObject* self, const XML_Char* comment_in)
static void
expat_pi_handler(XMLParserObject* self, const XML_Char* target_in,
const XML_Char* data_in)
#if defined(Py_USING_UNICODE)
static int
expat_unknown_encoding_handler(XMLParserObject *self, const XML_Char *name,
XML_Encoding *info)
static PyObject*
xmlparser(PyObject* self_, PyObject* args, PyObject* kw)
static void
xmlparser_dealloc(XMLParserObject* self)
LOCAL(PyObject*)
expat_parse(XMLParserObject* self, char* data, int data_len, int final)
static PyObject*
xmlparser_close(XMLParserObject* self, PyObject* args)
static PyObject*
xmlparser_feed(XMLParserObject* self, PyObject* args)
static PyObject*
xmlparser_parse(XMLParserObject* self, PyObject* args)
static PyObject*
xmlparser_setevents(XMLParserObject* self, PyObject* args)
static PyMethodDef xmlparser_methods[] = ;
static PyObject*
xmlparser_getattr(XMLParserObject* self, char* name)
statichere PyTypeObject XMLParser_Type = ;
static PyMethodDef _functions[] = ;
DL_EXPORT(void)
init_elementtree(void)
