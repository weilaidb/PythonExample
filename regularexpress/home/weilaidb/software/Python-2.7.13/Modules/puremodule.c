#if defined(WITH_PURIFY) || defined(WITH_ALL_PURE)
#    include <purify.h>
#    define HAS_PURIFY_EXIT 0
#    define PURE_PURIFY_VERSION 3
#if defined(WITH_QUANTIFY) || defined(WITH_ALL_PURE)
#    include <quantify.h>
#    define PURE_QUANTIFY_VERSION 2
#if defined(PURIFY_H) || defined(QUANTIFY_H)
#    define COMMON_PURE_FUNCTIONS
typedef int (*VoidArgFunc)(void);
typedef int (*StringArgFunc)(char*);
typedef int (*PrintfishFunc)(const char*, ...);
typedef int (*StringIntArgFunc)(const char*, int);
static PyObject*
call_voidarg_function(VoidArgFunc func, PyObject *self, PyObject *args)
static PyObject*
call_stringarg_function(StringArgFunc func, PyObject *self, PyObject *args)
static PyObject*
call_stringorint_function(StringArgFunc func, PyObject *self, PyObject *args)
static PyObject*
call_printfish_function(PrintfishFunc func, PyObject *self, PyObject *args)
static PyObject*
call_intasaddr_function(StringArgFunc func, PyObject *self, PyObject *args)
static PyObject*
call_stringandint_function(StringIntArgFunc func, PyObject *self,
PyObject *args)
static PyObject*
pure_pure_logfile_printf(PyObject* self, PyObject* args)
static PyObject*
pure_pure_printf(PyObject* self, PyObject* args)
static PyObject*
pure_pure_printf_with_banner(PyObject* self, PyObject* args)
static PyObject*
pure_purify_all_inuse(PyObject *self, PyObject *args)
static PyObject*
pure_purify_all_leaks(PyObject *self, PyObject *args)
static PyObject*
pure_purify_new_inuse(PyObject *self, PyObject *args)
static PyObject*
pure_purify_new_leaks(PyObject *self, PyObject *args)
static PyObject*
pure_purify_clear_inuse(PyObject *self, PyObject *args)
static PyObject*
pure_purify_clear_leaks(PyObject *self, PyObject *args)
static PyObject*
pure_purify_all_fds_inuse(PyObject *self, PyObject *args)
static PyObject*
pure_purify_new_fds_inuse(PyObject *self, PyObject *args)
static PyObject*
pure_purify_printf_with_call_chain(PyObject *self, PyObject *args)
static PyObject*
pure_purify_set_pool_id(PyObject *self, PyObject *args)
static PyObject*
pure_purify_get_pool_id(PyObject *self, PyObject *args)
static PyObject*
pure_purify_set_user_data(PyObject *self, PyObject *args)
static PyObject*
pure_purify_get_user_data(PyObject *self, PyObject *args)
static PyObject* MapCallable = NULL;
static void
map_pool_callback(char* mem, int user_size, void *user_aux_data)
static PyObject*
pure_purify_map_pool(PyObject *self, PyObject *args)
static void
PurifyMapPoolIdCallback(int id)
static PyObject*
pure_purify_map_pool_id(PyObject *self, PyObject *args)
static PyObject*
pure_purify_new_messages(PyObject *self, PyObject *args)
static PyObject*
pure_purify_all_messages(PyObject *self, PyObject *args)
static PyObject*
pure_purify_clear_messages(PyObject *self, PyObject *args)
static PyObject*
pure_purify_clear_new_messages(PyObject *self, PyObject *args)
static PyObject*
pure_purify_start_batch(PyObject *self, PyObject *args)
static PyObject*
pure_purify_start_batch_show_first(PyObject *self, PyObject *args)
static PyObject*
pure_purify_stop_batch(PyObject *self, PyObject *args)
static PyObject*
pure_purify_name_thread(PyObject *self, PyObject *args)
static PyObject*
pure_purify_watch(PyObject *self, PyObject *args)
static PyObject*
pure_purify_watch_1(PyObject *self, PyObject *args)
static PyObject*
pure_purify_watch_2(PyObject *self, PyObject *args)
static PyObject*
pure_purify_watch_4(PyObject *self, PyObject *args)
static PyObject*
pure_purify_watch_8(PyObject *self, PyObject *args)
static PyObject*
pure_purify_watch_w_1(PyObject *self, PyObject *args)
static PyObject*
pure_purify_watch_w_2(PyObject *self, PyObject *args)
static PyObject*
pure_purify_watch_w_4(PyObject *self, PyObject *args)
static PyObject*
pure_purify_watch_w_8(PyObject *self, PyObject *args)
static PyObject*
pure_purify_watch_r_1(PyObject *self, PyObject *args)
static PyObject*
pure_purify_watch_r_2(PyObject *self, PyObject *args)
static PyObject*
pure_purify_watch_r_4(PyObject *self, PyObject *args)
static PyObject*
pure_purify_watch_r_8(PyObject *self, PyObject *args)
static PyObject*
pure_purify_watch_rw_1(PyObject *self, PyObject *args)
static PyObject*
pure_purify_watch_rw_2(PyObject *self, PyObject *args)
static PyObject*
pure_purify_watch_rw_4(PyObject *self, PyObject *args)
static PyObject*
pure_purify_watch_rw_8(PyObject *self, PyObject *args)
static PyObject*
pure_purify_watch_n(PyObject *self, PyObject *args)
static PyObject*
pure_purify_watch_info(PyObject *self, PyObject *args)
static PyObject*
pure_purify_watch_remove(PyObject *self, PyObject *args)
static PyObject*
pure_purify_watch_remove_all(PyObject *self, PyObject *args)
static PyObject*
pure_purify_describe(PyObject *self, PyObject *args)
static PyObject*
pure_purify_what_colors(PyObject *self, PyObject *args)
static PyObject*
pure_purify_is_running(PyObject *self, PyObject *args)
static PyObject*
pure_purify_assert_is_readable(PyObject *self, PyObject *args)
static PyObject*
pure_purify_assert_is_writable(PyObject *self, PyObject *args)
#if HAS_PURIFY_EXIT
static PyObject*
pure_purify_exit(PyObject *self, PyObject *args)
static PyObject*
pure_quantify_is_running(PyObject *self, PyObject *args)
static PyObject*
pure_quantify_help(PyObject *self, PyObject *args)
static PyObject*
pure_quantify_print_recording_state(PyObject *self, PyObject *args)
static PyObject*
pure_quantify_start_recording_data(PyObject *self, PyObject *args)
static PyObject*
pure_quantify_stop_recording_data(PyObject *self, PyObject *args)
static PyObject*
pure_quantify_is_recording_data(PyObject *self, PyObject *args)
static PyObject*
pure_quantify_start_recording_system_calls(PyObject *self, PyObject *args)
static PyObject*
pure_quantify_stop_recording_system_calls(PyObject *self, PyObject *args)
static PyObject*
pure_quantify_is_recording_system_calls(PyObject *self, PyObject *args)
static PyObject*
pure_quantify_start_recording_system_call(PyObject *self, PyObject *args)
static PyObject*
pure_quantify_stop_recording_system_call(PyObject *self, PyObject *args)
static PyObject*
pure_quantify_is_recording_system_call(PyObject *self, PyObject *args)
static PyObject*
pure_quantify_start_recording_dynamic_library_data(PyObject *self, PyObject *args)
static PyObject*
pure_quantify_stop_recording_dynamic_library_data(PyObject *self, PyObject *args)
static PyObject*
pure_quantify_is_recording_dynamic_library_data(PyObject *self, PyObject *args)
static PyObject*
pure_quantify_start_recording_register_window_traps(PyObject *self, PyObject *args)
static PyObject*
pure_quantify_stop_recording_register_window_traps(PyObject *self, PyObject *args)
static PyObject*
pure_quantify_is_recording_register_window_traps(PyObject *self, PyObject *args)
static PyObject*
pure_quantify_disable_recording_data(PyObject *self, PyObject *args)
static PyObject*
pure_quantify_clear_data(PyObject *self, PyObject *args)
static PyObject*
pure_quantify_save_data(PyObject *self, PyObject *args)
static PyObject*
pure_quantify_save_data_to_file(PyObject *self, PyObject *args)
static PyObject*
pure_quantify_add_annotation(PyObject *self, PyObject *args)
static struct PyMethodDef
pure_methods[] = ;
static void
ins(d, name, val)
PyObject *d;
char* name;
long val;
void
initpure()
