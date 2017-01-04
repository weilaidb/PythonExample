typedef struct  genericobject;
static PyTypeObject GenericObjecttype;
#define is_genericobject(g) ((g)->ob_type == &GenericObjecttype)
static PyObject *allgenerics = NULL;
static int nfreeslots = 0;
static void
knowgeneric(genericobject *g)
static genericobject *
findgeneric(FL_OBJECT *generic)
static void
forgetgeneric(genericobject *g)
static void
releaseobjects(FL_FORM *form)
static PyObject *
generic_set_call_back(genericobject *g, PyObject *args)
static PyObject *
generic_call(genericobject *g, void (*func)(FL_OBJECT *))
static PyObject *
generic_delete_object(genericobject *g)
static PyObject *
generic_show_object(genericobject *g)
static PyObject *
generic_hide_object(genericobject *g)
static PyObject *
generic_redraw_object(genericobject *g)
static PyObject *
generic_freeze_object(genericobject *g)
static PyObject *
generic_unfreeze_object(genericobject *g)
static PyObject *
generic_activate_object(genericobject *g)
static PyObject *
generic_deactivate_object(genericobject *g)
static PyObject *
generic_set_object_shortcut(genericobject *g, PyObject *args)
static PyMethodDef generic_methods[] = ;
static void
generic_dealloc(genericobject *g)
#define OFF(x) offsetof(FL_OBJECT, x)
static struct memberlist generic_memberlist[] = ;
#undef OFF
static PyObject *
generic_getattr(genericobject *g, char *name)
static int
generic_setattr(genericobject *g, char *name, PyObject *v)
static PyObject *
generic_repr(genericobject *g)
static PyTypeObject GenericObjecttype = ;
static PyObject *
newgenericobject(FL_OBJECT *generic, PyMethodDef *methods)
static PyObject *
call_forms_INf (void (*func)(FL_OBJECT *, float), FL_OBJECT *obj, PyObject *args)
static PyObject *
call_forms_INfINf (void (*func)(FL_OBJECT *, float, float), FL_OBJECT *obj, PyObject *args)
static PyObject *
call_forms_INi (void (*func)(FL_OBJECT *, int), FL_OBJECT *obj, PyObject *args)
static PyObject *
call_forms_INc (void (*func)(FL_OBJECT *, int), FL_OBJECT *obj, PyObject *args)
static PyObject *
call_forms_INstr (void (*func)(FL_OBJECT *, char *), FL_OBJECT *obj, PyObject *args)
static PyObject *
call_forms_INiINstr (void (*func)(FL_OBJECT *, int, char *), FL_OBJECT *obj, PyObject *args)
static PyObject *
call_forms_INiINi (void (*func)(FL_OBJECT *, int, int), FL_OBJECT *obj, PyObject *args)
static PyObject *
call_forms_Ri (int (*func)(FL_OBJECT *), FL_OBJECT *obj)
static PyObject *
call_forms_Rstr (char * (*func)(FL_OBJECT *), FL_OBJECT *obj)
static PyObject *
call_forms_Rf (float (*func)(FL_OBJECT *), FL_OBJECT *obj)
static PyObject *
call_forms_OUTfOUTf (void (*func)(FL_OBJECT *, float *, float *), FL_OBJECT *obj)
static PyObject *
call_forms_OUTf (void (*func)(FL_OBJECT *, float *), FL_OBJECT *obj)
static PyObject *
set_browser_topline(genericobject *g, PyObject *args)
static PyObject *
clear_browser(genericobject *g)
static PyObject *
add_browser_line (genericobject *g, PyObject *args)
static PyObject *
addto_browser (genericobject *g, PyObject *args)
static PyObject *
insert_browser_line (genericobject *g, PyObject *args)
static PyObject *
delete_browser_line (genericobject *g, PyObject *args)
static PyObject *
replace_browser_line (genericobject *g, PyObject *args)
static PyObject *
get_browser_line(genericobject *g, PyObject *args)
static PyObject *
load_browser (genericobject *g, PyObject *args)
static PyObject *
get_browser_maxline(genericobject *g)
static PyObject *
select_browser_line (genericobject *g, PyObject *args)
static PyObject *
deselect_browser_line (genericobject *g, PyObject *args)
static PyObject *
deselect_browser (genericobject *g)
static PyObject *
isselected_browser_line (genericobject *g, PyObject *args)
static PyObject *
get_browser (genericobject *g)
static PyObject *
set_browser_fontsize (genericobject *g, PyObject *args)
static PyObject *
set_browser_fontstyle (genericobject *g, PyObject *args)
static PyObject *
set_browser_specialkey (genericobject *g, PyObject *args)
static PyMethodDef browser_methods[] = ;
static PyObject *
set_button(genericobject *g, PyObject *args)
static PyObject *
get_button(genericobject *g)
static PyObject *
get_button_numb(genericobject *g)
static PyObject *
set_button_shortcut(genericobject *g, PyObject *args)
static PyMethodDef button_methods[] = ;
static PyObject *
set_choice(genericobject *g, PyObject *args)
static PyObject *
get_choice(genericobject *g)
static PyObject *
clear_choice (genericobject *g)
static PyObject *
addto_choice (genericobject *g, PyObject *args)
static PyObject *
replace_choice (genericobject *g, PyObject *args)
static PyObject *
delete_choice (genericobject *g, PyObject *args)
static PyObject *
get_choice_text (genericobject *g)
static PyObject *
set_choice_fontsize (genericobject *g, PyObject *args)
static PyObject *
set_choice_fontstyle (genericobject *g, PyObject *args)
static PyMethodDef choice_methods[] = ;
static PyObject *
get_clock(genericobject *g)
static PyMethodDef clock_methods[] = ;
static PyObject *
get_counter_value(genericobject *g)
static PyObject *
set_counter_value (genericobject *g, PyObject *args)
static PyObject *
set_counter_precision (genericobject *g, PyObject *args)
static PyObject *
set_counter_bounds (genericobject *g, PyObject *args)
static PyObject *
set_counter_step (genericobject *g, PyObject *args)
static PyObject *
set_counter_return (genericobject *g, PyObject *args)
static PyMethodDef counter_methods[] = ;
static PyObject *
get_dial_value(genericobject *g)
static PyObject *
set_dial_value (genericobject *g, PyObject *args)
static PyObject *
set_dial_bounds (genericobject *g, PyObject *args)
static PyObject *
get_dial_bounds (genericobject *g)
static PyObject *
set_dial_step (genericobject *g, PyObject *args)
static PyMethodDef dial_methods[] = ;
static PyObject *
set_input (genericobject *g, PyObject *args)
static PyObject *
get_input (genericobject *g)
static PyObject *
set_input_color (genericobject *g, PyObject *args)
static PyObject *
set_input_return (genericobject *g, PyObject *args)
static PyMethodDef input_methods[] = ;
static PyObject *
set_menu (genericobject *g, PyObject *args)
static PyObject *
get_menu (genericobject *g)
static PyObject *
get_menu_text (genericobject *g)
static PyObject *
addto_menu (genericobject *g, PyObject *args)
static PyMethodDef menu_methods[] = ;
static PyObject *
get_slider_value(genericobject *g)
static PyObject *
set_slider_value (genericobject *g, PyObject *args)
static PyObject *
set_slider_bounds (genericobject *g, PyObject *args)
static PyObject *
get_slider_bounds (genericobject *g)
static PyObject *
set_slider_return (genericobject *g, PyObject *args)
static PyObject *
set_slider_size (genericobject *g, PyObject *args)
static PyObject *
set_slider_precision (genericobject *g, PyObject *args)
static PyObject *
set_slider_step (genericobject *g, PyObject *args)
static PyMethodDef slider_methods[] = ;
static PyObject *
set_positioner_xvalue (genericobject *g, PyObject *args)
static PyObject *
set_positioner_xbounds (genericobject *g, PyObject *args)
static PyObject *
set_positioner_yvalue (genericobject *g, PyObject *args)
static PyObject *
set_positioner_ybounds (genericobject *g, PyObject *args)
static PyObject *
get_positioner_xvalue (genericobject *g)
static PyObject *
get_positioner_xbounds (genericobject *g)
static PyObject *
get_positioner_yvalue (genericobject *g)
static PyObject *
get_positioner_ybounds (genericobject *g)
static PyMethodDef positioner_methods[] = ;
static PyObject *
set_timer (genericobject *g, PyObject *args)
static PyObject *
get_timer (genericobject *g)
static PyMethodDef timer_methods[] = ;
typedef struct  formobject;
static PyTypeObject Formtype;
#define is_formobject(v) ((v)->ob_type == &Formtype)
static PyObject *
form_show_form(formobject *f, PyObject *args)
static PyObject *
form_call(void (*func)(FL_FORM *), FL_FORM *f)
static PyObject *
form_call_INiINi(void (*func)(FL_FORM *, int, int), FL_FORM *f, PyObject *args)
static PyObject *
form_call_INfINf(void (*func)(FL_FORM *, float, float), FL_FORM *f, PyObject *args)
static PyObject *
form_hide_form(formobject *f)
static PyObject *
form_redraw_form(formobject *f)
static PyObject *
form_set_form_position(formobject *f, PyObject *args)
static PyObject *
form_set_form_size(formobject *f, PyObject *args)
static PyObject *
form_scale_form(formobject *f, PyObject *args)
static PyObject *
generic_add_object(formobject *f, PyObject *args, FL_OBJECT *(*func)(int, float, float, float, float, char*), PyMethodDef *internal_methods)
static PyObject *
form_add_button(formobject *f, PyObject *args)
static PyObject *
form_add_lightbutton(formobject *f, PyObject *args)
static PyObject *
form_add_roundbutton(formobject *f, PyObject *args)
static PyObject *
form_add_menu (formobject *f, PyObject *args)
static PyObject *
form_add_slider(formobject *f, PyObject *args)
static PyObject *
form_add_valslider(formobject *f, PyObject *args)
static PyObject *
form_add_dial(formobject *f, PyObject *args)
static PyObject *
form_add_counter(formobject *f, PyObject *args)
static PyObject *
form_add_clock(formobject *f, PyObject *args)
static PyObject *
form_add_box(formobject *f, PyObject *args)
static PyObject *
form_add_choice(formobject *f, PyObject *args)
static PyObject *
form_add_browser(formobject *f, PyObject *args)
static PyObject *
form_add_positioner(formobject *f, PyObject *args)
static PyObject *
form_add_input(formobject *f, PyObject *args)
static PyObject *
form_add_text(formobject *f, PyObject *args)
static PyObject *
form_add_timer(formobject *f, PyObject *args)
static PyObject *
form_freeze_form(formobject *f)
static PyObject *
form_unfreeze_form(formobject *f)
static PyObject *
form_activate_form(formobject *f)
static PyObject *
form_deactivate_form(formobject *f)
static PyObject *
form_bgn_group(formobject *f, PyObject *args)
static PyObject *
form_end_group(formobject *f, PyObject *args)
static PyObject *
forms_find_first_or_last(FL_OBJECT *(*func)(FL_FORM *, int, float, float), formobject *f, PyObject *args)
static PyObject *
form_find_first(formobject *f, PyObject *args)
static PyObject *
form_find_last(formobject *f, PyObject *args)
static PyObject *
form_set_object_focus(formobject *f, PyObject *args)
static PyMethodDef form_methods[] = ;
static void
form_dealloc(formobject *f)
#define OFF(x) offsetof(FL_FORM, x)
static struct memberlist form_memberlist[] = ;
#undef OFF
static PyObject *
form_getattr(formobject *f, char *name)
static int
form_setattr(formobject *f, char *name, PyObject *v)
static PyObject *
form_repr(formobject *f)
static PyTypeObject Formtype = ;
static PyObject *
newformobject(FL_FORM *form)
static PyObject *
forms_make_form(PyObject *dummy, PyObject *args)
static PyObject *
forms_activate_all_forms(PyObject *f, PyObject *args)
static PyObject *
forms_deactivate_all_forms(PyObject *f, PyObject *args)
static PyObject *my_event_callback = NULL;
static PyObject *
forms_set_event_call_back(PyObject *dummy, PyObject *args)
static PyObject *
forms_do_or_check_forms(PyObject *dummy, FL_OBJECT *(*func)(void))
static PyObject *
forms_do_forms(PyObject *dummy)
static PyObject *
forms_check_forms(PyObject *dummy)
static PyObject *
forms_do_only_forms(PyObject *dummy)
static PyObject *
forms_check_only_forms(PyObject *dummy)
static PyObject *
fl_call(void (*func)(void))
static PyObject *
forms_set_graphics_mode(PyObject *dummy, PyObject *args)
static PyObject *
forms_get_rgbmode(PyObject *dummy, PyObject *args)
static PyObject *
forms_show_errors(PyObject *dummy, PyObject *args)
static PyObject *
forms_set_font_name(PyObject *dummy, PyObject *args)
static PyObject *
forms_qdevice(PyObject *self, PyObject *args)
static PyObject *
forms_unqdevice(PyObject *self, PyObject *args)
static PyObject *
forms_isqueued(PyObject *self, PyObject *args)
static PyObject *
forms_qtest(PyObject *self, PyObject *args)
static PyObject *
forms_qread(PyObject *self, PyObject *args)
static PyObject *
forms_qreset(PyObject *self)
static PyObject *
forms_qenter(PyObject *self, PyObject *args)
static PyObject *
forms_color(PyObject *self, PyObject *args)
static PyObject *
forms_mapcolor(PyObject *self, PyObject *args)
static PyObject *
forms_getmcolor(PyObject *self, PyObject *args)
static PyObject *
forms_get_mouse(PyObject *self)
static PyObject *
forms_tie(PyObject *self, PyObject *args)
static PyObject *
forms_show_message(PyObject *f, PyObject *args)
static PyObject *
forms_show_choice(PyObject *f, PyObject *args)
static PyObject *
forms_show_question(PyObject *f, PyObject *args)
static PyObject *
forms_show_input(PyObject *f, PyObject *args)
static PyObject *
forms_file_selector(PyObject *f, PyObject *args)
static PyObject *
forms_file_selector_func(PyObject *args, char *(*func)(void))
static PyObject *
forms_get_directory(PyObject *f, PyObject *args)
static PyObject *
forms_get_pattern(PyObject *f, PyObject *args)
static PyObject *
forms_get_filename(PyObject *f, PyObject *args)
static PyMethodDef forms_methods[] = ;
PyMODINIT_FUNC
initfl(void)
