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
