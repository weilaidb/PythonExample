#define PyDrawF_Check(op) ((op)->ob_type == &PyDrawFType)
#define HDRSIZE 40
#define GRPHDRSIZE 36
#define DRAWTYPE 0xaff
#define NEXT(d) ((drawfile_object*)((char*)(d)+(d)->size))
typedef struct
PyDrawFObject;
typedef struct dheader
dheader;
static PyObject *DrawFError;
static os_error *e;
static PyTypeObject PyDrawFType;
static dheader header=
;
static PyObject *drawf_oserror(void)
static PyObject *drawf_error(char *s)
static void countobjs(PyDrawFObject *pd)
static drawfile_object *findobj(PyDrawFObject *pd,Py_ssize_t n)
static PyDrawFObject* new(int size)
static void extend(os_box *b,os_box *c)
static PyObject *DrawF_New(PyObject *self,PyObject *args)
static PyObject *DrawF_Load(PyObject *self,PyObject *args)
static PyObject *DrawF_Save(PyDrawFObject *self,PyObject *arg)
static PyObject *DrawF_Render(PyDrawFObject *self,PyObject *arg)
static PyObject *DrawF_Path(PyDrawFObject *self,PyObject *arg)
static PyObject *DrawF_Text(PyDrawFObject *self,PyObject *arg)
static PyObject *DrawF_TText(PyDrawFObject *self,PyObject *arg)
static PyObject *DrawF_FontTable(PyDrawFObject *self,PyObject *arg)
static PyObject *DrawF_Group(PyDrawFObject *self,PyObject *arg)
static PyObject *DrawF_Find(PyDrawFObject *self,PyObject *arg)
static PyObject *DrawF_Box(PyDrawFObject *self,PyObject *arg)
static void SetBlock(drawfile_object *d,int size,int type,int offset,int value)
static PyObject *SetWord(PyDrawFObject *self,PyObject *arg,int type,int offset)
static PyObject *DrawF_PathFill(PyDrawFObject *self,PyObject *arg)
static PyObject *DrawF_PathColour(PyDrawFObject *self,PyObject *arg)
static PyObject *DrawF_TextColour(PyDrawFObject *self,PyObject *arg)
static PyObject *DrawF_TextBackground(PyDrawFObject *self,PyObject *arg)
static struct PyMethodDef PyDrawF_Methods[]=
;
static int drawf_len(PyDrawFObject *b)
static PyObject *drawf_concat(PyDrawFObject *b,PyDrawFObject *c)
static PyObject *drawf_repeat(PyDrawFObject *b,Py_ssize_t i)
static PyObject *drawf_item(PyDrawFObject *b,Py_ssize_t i)
static PyObject *drawf_slice(PyDrawFObject *b,Py_ssize_t i,Py_ssize_t j)
static int drawf_ass_item(PyDrawFObject *b,Py_ssize_t i,PyObject *v)
static int drawf_ass_slice(PyDrawFObject *b,Py_ssize_t i,Py_ssize_t j,PyObject *v)
static PySequenceMethods drawf_as_sequence=
;
static PyObject *PyDrawF_GetAttr(PyDrawFObject *s,char *name)
static void PyDrawF_Dealloc(PyDrawFObject *b)
static PyTypeObject PyDrawFType=
;
static PyMethodDef DrawFMethods[]=
;
void initdrawf()
