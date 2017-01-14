#if defined(HAVE_SETLOCALE)
#define SAVE_LOCALE
#  define RESTORE_LOCALE(sl)
#  define RESTORE_LOCALE(sl)
#undef HAVE_CONFIG_H
#define completion_matches(x, y) \
rl_completion_matches((x), ((rl_compentry_func_t *)(y)))
#if defined(_RL_FUNCTION_TYPEDEF)
extern char **completion_matches(char *, rl_compentry_func_t *);
#if !defined(__APPLE__)
extern char **completion_matches(char *, CPFunction *);
static int using_libedit_emulation = 0;
static const char libedit_version_tag[] = ;
static int libedit_history_start = 0;
static void
on_completion_display_matches_hook(char **matches,
int num_matches, int max_length);
static char *completer_word_break_characters;
static PyObject *
parse_and_bind(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_parse_and_bind,
"parse_and_bind(string) -> None\n\
Execute the init line provided in the string argument.");
static PyObject *
read_init_file(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_read_init_file,
"read_init_file([filename]) -> None\n\
Execute a readline initialization file.\n\
The default filename is the last filename used.");
static PyObject *
read_history_file(PyObject *self, PyObject *args)
static int _history_length = -1;
PyDoc_STRVAR(doc_read_history_file,
"read_history_file([filename]) -> None\n\
Load a readline history file.\n\
The default filename is ~/.history.");
static PyObject *
write_history_file(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_write_history_file,
"write_history_file([filename]) -> None\n\
Save a readline history file.\n\
The default filename is ~/.history.");
static PyObject*
set_history_length(PyObject *self, PyObject *args)
PyDoc_STRVAR(set_history_length_doc,
"set_history_length(length) -> None\n\
set the maximal number of lines which will be written to\n\
the history file. A negative length is used to inhibit\n\
history truncation.");
static PyObject*
get_history_length(PyObject *self, PyObject *noarg)
PyDoc_STRVAR(get_history_length_doc,
"get_history_length() -> int\n\
return the maximum number of lines that will be written to\n\
the history file.");
static PyObject *
set_hook(const char *funcname, PyObject **hook_var, PyObject *args)
static PyObject *completion_display_matches_hook = NULL;
static PyObject *startup_hook = NULL;
static PyObject *pre_input_hook = NULL;
static PyObject *
set_completion_display_matches_hook(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_set_completion_display_matches_hook,
"set_completion_display_matches_hook([function]) -> None\n\
Set or remove the completion display function.\n\
The function is called as\n\
function(substitution, [matches], longest_match_length)\n\
once each time matches need to be displayed.");
static PyObject *
set_startup_hook(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_set_startup_hook,
"set_startup_hook([function]) -> None\n\
Set or remove the function invoked by the rl_startup_hook callback.\n\
The function is called with no arguments just\n\
before readline prints the first prompt.");
static PyObject *
set_pre_input_hook(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_set_pre_input_hook,
"set_pre_input_hook([function]) -> None\n\
Set or remove the function invoked by the rl_pre_input_hook callback.\n\
The function is called with no arguments after the first prompt\n\
has been printed and just before readline starts reading input\n\
characters.");
static PyObject *completer = NULL;
static PyObject *begidx = NULL;
static PyObject *endidx = NULL;
static PyObject *
get_completion_type(PyObject *self, PyObject *noarg)
PyDoc_STRVAR(doc_get_completion_type,
"get_completion_type() -> int\n\
Get the type of completion being attempted.");
static PyObject *
get_begidx(PyObject *self, PyObject *noarg)
PyDoc_STRVAR(doc_get_begidx,
"get_begidx() -> int\n\
get the beginning index of the completion scope");
static PyObject *
get_endidx(PyObject *self, PyObject *noarg)
PyDoc_STRVAR(doc_get_endidx,
"get_endidx() -> int\n\
get the ending index of the completion scope");
static PyObject *
set_completer_delims(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_set_completer_delims,
"set_completer_delims(string) -> None\n\
set the word delimiters for completion");
#if defined(RL_READLINE_VERSION) && RL_READLINE_VERSION >= 0x0500
static void
_py_free_history_entry(HIST_ENTRY *entry)
static void
_py_free_history_entry(HIST_ENTRY *entry)
static PyObject *
py_remove_history(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_remove_history,
"remove_history_item(pos) -> None\n\
remove history item given by its position");
static PyObject *
py_replace_history(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_replace_history,
"replace_history_item(pos, line) -> None\n\
replaces history item given by its position with contents of line");
static PyObject *
py_add_history(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_add_history,
"add_history(string) -> None\n\
add an item to the history buffer");
static PyObject *
get_completer_delims(PyObject *self, PyObject *noarg)
PyDoc_STRVAR(doc_get_completer_delims,
"get_completer_delims() -> string\n\
get the word delimiters for completion");
static PyObject *
set_completer(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_set_completer,
"set_completer([function]) -> None\n\
Set or remove the completer function.\n\
The function is called as function(text, state),\n\
for state in 0, 1, 2, ..., until it returns a non-string.\n\
It should return the next possible completion starting with 'text'.");
static PyObject *
get_completer(PyObject *self, PyObject *noargs)
PyDoc_STRVAR(doc_get_completer,
"get_completer() -> function\n\
\n\
Returns current completer function.");
static int
_py_get_history_length(void)
static PyObject *
get_history_item(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_get_history_item,
"get_history_item() -> string\n\
return the current contents of history item at index.");
static PyObject *
get_current_history_length(PyObject *self, PyObject *noarg)
PyDoc_STRVAR(doc_get_current_history_length,
"get_current_history_length() -> integer\n\
return the current (not the maximum) length of history.");
static PyObject *
get_line_buffer(PyObject *self, PyObject *noarg)
PyDoc_STRVAR(doc_get_line_buffer,
"get_line_buffer() -> string\n\
return the current contents of the line buffer.");
static PyObject *
py_clear_history(PyObject *self, PyObject *noarg)
PyDoc_STRVAR(doc_clear_history,
"clear_history() -> None\n\
Clear the current readline history.");
static PyObject *
insert_text(PyObject *self, PyObject *args)
PyDoc_STRVAR(doc_insert_text,
"insert_text(string) -> None\n\
Insert text into the line buffer at the cursor position.");
static PyObject *
redisplay(PyObject *self, PyObject *noarg)
PyDoc_STRVAR(doc_redisplay,
"redisplay() -> None\n\
Change what's displayed on the screen to reflect the current\n\
contents of the line buffer.");
static struct PyMethodDef readline_methods[] =
;
static int
on_hook(PyObject *func)
static int
#if defined(_RL_FUNCTION_TYPEDEF)
on_startup_hook(void)
on_startup_hook()
static int
#if defined(_RL_FUNCTION_TYPEDEF)
on_pre_input_hook(void)
on_pre_input_hook()
static void
on_completion_display_matches_hook(char **matches,
int num_matches, int max_length)
static volatile sig_atomic_t sigwinch_received;
static PyOS_sighandler_t sigwinch_ohandler;
static void
readline_sigwinch_handler(int signum)
static char *
on_completion(const char *text, int state)
static char **
flex_complete(const char *text, int start, int end)
static void
setup_readline(void)
#if defined(HAVE_RL_CALLBACK) && defined(HAVE_SELECT)
static  char *completed_input_string;
static void
rlhandler(char *text)
static char *
readline_until_enter_or_signal(char *prompt, int *signal)
static jmp_buf jbuf;
static void
onintr(int sig)
static char *
readline_until_enter_or_signal(char *prompt, int *signal)
static char *
call_readline(FILE *sys_stdin, FILE *sys_stdout, char *prompt)
PyDoc_STRVAR(doc_module,
);
PyDoc_STRVAR(doc_module_le,
);
PyMODINIT_FUNC
initreadline(void)
