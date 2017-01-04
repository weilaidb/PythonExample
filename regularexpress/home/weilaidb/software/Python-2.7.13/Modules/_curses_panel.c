static char *PyCursesVersion = "2.1";
static PyObject *PyCursesError;
static PyObject *
PyCursesCheckERR(int code, char *fname)
typedef struct  PyCursesPanelObject;
PyTypeObject PyCursesPanel_Type;
#define PyCursesPanel_Check(v)   (Py_TYPE(v) == &PyCursesPanel_Type)
typedef struct _list_of_panels  list_of_panels;
static list_of_panels *lop;
static int
insert_lop(PyCursesPanelObject *po)
static void
remove_lop(PyCursesPanelObject *po)
static PyCursesPanelObject *
find_po(PANEL *pan)
#define Panel_NoArgNoReturnFunction(X) \
static PyObject *PyCursesPanel_##X(PyCursesPanelObject *self) \
#define Panel_NoArgTrueFalseFunction(X) \
static PyObject *PyCursesPanel_##X(PyCursesPanelObject *self) \
#define Panel_TwoArgNoReturnFunction(X, TYPE, PARSESTR) \
static PyObject *PyCursesPanel_##X(PyCursesPanelObject *self, PyObject *args) \
Panel_NoArgNoReturnFunction(bottom_panel)
Panel_NoArgNoReturnFunction(hide_panel)
Panel_NoArgNoReturnFunction(show_panel)
Panel_NoArgNoReturnFunction(top_panel)
Panel_NoArgTrueFalseFunction(panel_hidden)
Panel_TwoArgNoReturnFunction(move_panel, int, "ii;y,x")
static PyObject *
PyCursesPanel_New(PANEL *pan, PyCursesWindowObject *wo)
static void
PyCursesPanel_Dealloc(PyCursesPanelObject *po)
static PyObject *
PyCursesPanel_above(PyCursesPanelObject *self)
static PyObject *
PyCursesPanel_below(PyCursesPanelObject *self)
static PyObject *
PyCursesPanel_window(PyCursesPanelObject *self)
static PyObject *
PyCursesPanel_replace_panel(PyCursesPanelObject *self, PyObject *args)
static PyObject *
PyCursesPanel_set_panel_userptr(PyCursesPanelObject *self, PyObject *obj)
static PyObject *
PyCursesPanel_userptr(PyCursesPanelObject *self)
static PyMethodDef PyCursesPanel_Methods[] = ;
static PyObject *
PyCursesPanel_GetAttr(PyCursesPanelObject *self, char *name)
PyTypeObject PyCursesPanel_Type = ;
static PyObject *
PyCurses_bottom_panel(PyObject *self)
static PyObject *
PyCurses_new_panel(PyObject *self, PyObject *args)
static PyObject *
PyCurses_top_panel(PyObject *self)
static PyObject *PyCurses_update_panels(PyObject *self)
static PyMethodDef PyCurses_methods[] = ;
PyMODINIT_FUNC
init_curses_panel(void)
