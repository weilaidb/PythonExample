static void
descr_dealloc(PyDescrObject *descr)
static char *
descr_name(PyDescrObject *descr)
static PyObject *
descr_repr(PyDescrObject *descr, char *format)
static PyObject *
method_repr(PyMethodDescrObject *descr)
static PyObject *
member_repr(PyMemberDescrObject *descr)
static PyObject *
getset_repr(PyGetSetDescrObject *descr)
static PyObject *
wrapperdescr_repr(PyWrapperDescrObject *descr)
static int
descr_check(PyDescrObject *descr, PyObject *obj, PyObject **pres)
static PyObject *
classmethod_get(PyMethodDescrObject *descr, PyObject *obj, PyObject *type)
static PyObject *
method_get(PyMethodDescrObject *descr, PyObject *obj, PyObject *type)
static PyObject *
member_get(PyMemberDescrObject *descr, PyObject *obj, PyObject *type)
static PyObject *
getset_get(PyGetSetDescrObject *descr, PyObject *obj, PyObject *type)
static PyObject *
wrapperdescr_get(PyWrapperDescrObject *descr, PyObject *obj, PyObject *type)
static int
descr_setcheck(PyDescrObject *descr, PyObject *obj, PyObject *value,
int *pres)
static int
member_set(PyMemberDescrObject *descr, PyObject *obj, PyObject *value)
static int
getset_set(PyGetSetDescrObject *descr, PyObject *obj, PyObject *value)
static PyObject *
methoddescr_call(PyMethodDescrObject *descr, PyObject *args, PyObject *kwds)
static PyObject *
classmethoddescr_call(PyMethodDescrObject *descr, PyObject *args,
PyObject *kwds)
static PyObject *
wrapperdescr_call(PyWrapperDescrObject *descr, PyObject *args, PyObject *kwds)
static PyObject *
method_get_doc(PyMethodDescrObject *descr, void *closure)
static PyMemberDef descr_members[] = ;
static PyGetSetDef method_getset[] = ;
static PyObject *
member_get_doc(PyMemberDescrObject *descr, void *closure)
static PyGetSetDef member_getset[] = ;
static PyObject *
getset_get_doc(PyGetSetDescrObject *descr, void *closure)
static PyGetSetDef getset_getset[] = ;
static PyObject *
wrapperdescr_get_doc(PyWrapperDescrObject *descr, void *closure)
static PyGetSetDef wrapperdescr_getset[] = ;
static int
descr_traverse(PyObject *self, visitproc visit, void *arg)
static PyTypeObject PyMethodDescr_Type = ;
static PyTypeObject PyClassMethodDescr_Type = ;
PyTypeObject PyMemberDescr_Type = ;
PyTypeObject PyGetSetDescr_Type = ;
PyTypeObject PyWrapperDescr_Type = ;
static PyDescrObject *
descr_new(PyTypeObject *descrtype, PyTypeObject *type, const char *name)
PyObject *
PyDescr_NewMethod(PyTypeObject *type, PyMethodDef *method)
PyObject *
PyDescr_NewClassMethod(PyTypeObject *type, PyMethodDef *method)
PyObject *
PyDescr_NewMember(PyTypeObject *type, PyMemberDef *member)
PyObject *
PyDescr_NewGetSet(PyTypeObject *type, PyGetSetDef *getset)
PyObject *
PyDescr_NewWrapper(PyTypeObject *type, struct wrapperbase *base, void *wrapped)
typedef struct  proxyobject;
static Py_ssize_t
proxy_len(proxyobject *pp)
static PyObject *
proxy_getitem(proxyobject *pp, PyObject *key)
static PyMappingMethods proxy_as_mapping = ;
static int
proxy_contains(proxyobject *pp, PyObject *key)
static PySequenceMethods proxy_as_sequence = ;
static PyObject *
proxy_has_key(proxyobject *pp, PyObject *key)
static PyObject *
proxy_get(proxyobject *pp, PyObject *args)
static PyObject *
proxy_keys(proxyobject *pp)
static PyObject *
proxy_values(proxyobject *pp)
static PyObject *
proxy_items(proxyobject *pp)
static PyObject *
proxy_iterkeys(proxyobject *pp)
static PyObject *
proxy_itervalues(proxyobject *pp)
static PyObject *
proxy_iteritems(proxyobject *pp)
static PyObject *
proxy_copy(proxyobject *pp)
static PyMethodDef proxy_methods[] = ;
static void
proxy_dealloc(proxyobject *pp)
static PyObject *
proxy_getiter(proxyobject *pp)
static PyObject *
proxy_str(proxyobject *pp)
static PyObject *
proxy_repr(proxyobject *pp)
static int
proxy_traverse(PyObject *self, visitproc visit, void *arg)
static int
proxy_compare(proxyobject *v, PyObject *w)
static PyObject *
proxy_richcompare(proxyobject *v, PyObject *w, int op)
PyTypeObject PyDictProxy_Type = ;
PyObject *
PyDictProxy_New(PyObject *dict)
typedef struct  wrapperobject;
static void
wrapper_dealloc(wrapperobject *wp)
static int
wrapper_compare(wrapperobject *a, wrapperobject *b)
static long
wrapper_hash(wrapperobject *wp)
static PyObject *
wrapper_repr(wrapperobject *wp)
static PyMemberDef wrapper_members[] = ;
static PyObject *
wrapper_objclass(wrapperobject *wp)
static PyObject *
wrapper_name(wrapperobject *wp)
static PyObject *
wrapper_doc(wrapperobject *wp)
static PyGetSetDef wrapper_getsets[] = ;
static PyObject *
wrapper_call(wrapperobject *wp, PyObject *args, PyObject *kwds)
static int
wrapper_traverse(PyObject *self, visitproc visit, void *arg)
static PyTypeObject wrappertype = ;
PyObject *
PyWrapper_New(PyObject *d, PyObject *self)
typedef struct  propertyobject;
static PyObject * property_copy(PyObject *, PyObject *, PyObject *,
PyObject *);
static PyMemberDef property_members[] = ;
PyDoc_STRVAR(getter_doc,
"Descriptor to change the getter on a property.");
static PyObject *
property_getter(PyObject *self, PyObject *getter)
PyDoc_STRVAR(setter_doc,
"Descriptor to change the setter on a property.");
static PyObject *
property_setter(PyObject *self, PyObject *setter)
PyDoc_STRVAR(deleter_doc,
"Descriptor to change the deleter on a property.");
static PyObject *
property_deleter(PyObject *self, PyObject *deleter)
static PyMethodDef property_methods[] = ;
static void
property_dealloc(PyObject *self)
static PyObject *
property_descr_get(PyObject *self, PyObject *obj, PyObject *type)
static int
property_descr_set(PyObject *self, PyObject *obj, PyObject *value)
static PyObject *
property_copy(PyObject *old, PyObject *get, PyObject *set, PyObject *del)
static int
property_init(PyObject *self, PyObject *args, PyObject *kwds)
PyDoc_STRVAR(property_doc,
"property(fget=None, fset=None, fdel=None, doc=None) -> property attribute\n"
"\n"
"fget is a function to be used for getting an attribute value, and likewise\n"
"fset is a function for setting, and fdel a function for del'ing, an\n"
"attribute.  Typical use is to define a managed attribute x:\n\n"
"class C(object):\n"
"    def getx(self): return self._x\n"
"    def setx(self, value): self._x = value\n"
"    def delx(self): del self._x\n"
"    x = property(getx, setx, delx, \"I'm the 'x' property.\")\n"
"\n"
"Decorators make defining new properties or modifying existing ones easy:\n\n"
"class C(object):\n"
"    @property\n"
"    def x(self):\n"
"        \"I am the 'x' property.\"\n"
"        return self._x\n"
"    @x.setter\n"
"    def x(self, value):\n"
"        self._x = value\n"
"    @x.deleter\n"
"    def x(self):\n"
"        del self._x\n"
);
static int
property_traverse(PyObject *self, visitproc visit, void *arg)
PyTypeObject PyProperty_Type = ;
