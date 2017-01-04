char *PyCursesVersion = "2.2";
#define STRICT_SYSV_CURSES
#define STRICT_SYSV_CURSES
#define CURSES_MODULE
extern int setupterm(char *,int,int *);
#if !defined(HAVE_NCURSES_H) && (defined(sgi) || defined(__sun) || defined(SCO5))
#define STRICT_SYSV_CURSES
typedef chtype attr_t;
#if defined(_AIX)
#define STRICT_SYSV_CURSES
static PyObject *PyCursesError;
static int initialised_setupterm = FALSE;
static int initialised = FALSE;
static int initialisedcolors = FALSE;
#define PyCursesSetupTermCalled                                         \
if (initialised_setupterm != TRUE)
#define PyCursesInitialised                             \
if (initialised != TRUE)
#define PyCursesInitialisedColor                                \
if (initialisedcolors != TRUE)
#define MIN(x,y) ((x) < (y) ? (x) : (y))
static PyObject *
PyCursesCheckERR(int code, char *fname)
static int
PyCurses_ConvertToChtype(PyObject *obj, chtype *ch)
static int func_PyCursesSetupTermCalled(void)
static int func_PyCursesInitialised(void)
static int func_PyCursesInitialisedColor(void)
PyTypeObject PyCursesWindow_Type;
#define Window_NoArgNoReturnFunction(X)                 \
static PyObject *PyCursesWindow_ ## X               \
(PyCursesWindowObject *self, PyObject *args)        \
#define Window_NoArgTrueFalseFunction(X)                                \
static PyObject * PyCursesWindow_ ## X                              \
(PyCursesWindowObject *self)                                        \
#define Window_NoArgNoReturnVoidFunction(X)                     \
static PyObject * PyCursesWindow_ ## X                      \
(PyCursesWindowObject *self)                                \
#define Window_NoArg2TupleReturnFunction(X, TYPE, ERGSTR)               \
static PyObject * PyCursesWindow_ ## X                              \
(PyCursesWindowObject *self)                                        \
#define Window_OneArgNoReturnVoidFunction(X, TYPE, PARSESTR)            \
static PyObject * PyCursesWindow_ ## X                              \
(PyCursesWindowObject *self, PyObject *args)                        \
#define Window_OneArgNoReturnFunction(X, TYPE, PARSESTR)                \
static PyObject * PyCursesWindow_ ## X                              \
(PyCursesWindowObject *self, PyObject *args)                        \
#define Window_TwoArgNoReturnFunction(X, TYPE, PARSESTR)                \
static PyObject * PyCursesWindow_ ## X                              \
(PyCursesWindowObject *self, PyObject *args)                        \
Window_NoArgNoReturnFunction(untouchwin)
Window_NoArgNoReturnFunction(touchwin)
Window_NoArgNoReturnFunction(redrawwin)
Window_NoArgNoReturnFunction(winsertln)
Window_NoArgNoReturnFunction(werase)
Window_NoArgNoReturnFunction(wdeleteln)
Window_NoArgTrueFalseFunction(is_wintouched)
Window_NoArgNoReturnVoidFunction(wsyncup)
Window_NoArgNoReturnVoidFunction(wsyncdown)
Window_NoArgNoReturnVoidFunction(wstandend)
Window_NoArgNoReturnVoidFunction(wstandout)
Window_NoArgNoReturnVoidFunction(wcursyncup)
Window_NoArgNoReturnVoidFunction(wclrtoeol)
Window_NoArgNoReturnVoidFunction(wclrtobot)
Window_NoArgNoReturnVoidFunction(wclear)
Window_OneArgNoReturnVoidFunction(idcok, int, "i;True(1) or False(0)")
Window_OneArgNoReturnVoidFunction(immedok, int, "i;True(1) or False(0)")
Window_OneArgNoReturnVoidFunction(wtimeout, int, "i;delay")
Window_NoArg2TupleReturnFunction(getyx, int, "ii")
Window_NoArg2TupleReturnFunction(getbegyx, int, "ii")
Window_NoArg2TupleReturnFunction(getmaxyx, int, "ii")
Window_NoArg2TupleReturnFunction(getparyx, int, "ii")
Window_OneArgNoReturnFunction(clearok, int, "i;True(1) or False(0)")
Window_OneArgNoReturnFunction(idlok, int, "i;True(1) or False(0)")
#if defined(__NetBSD__)
Window_OneArgNoReturnVoidFunction(keypad, int, "i;True(1) or False(0)")
Window_OneArgNoReturnFunction(keypad, int, "i;True(1) or False(0)")
Window_OneArgNoReturnFunction(leaveok, int, "i;True(1) or False(0)")
#if defined(__NetBSD__)
Window_OneArgNoReturnVoidFunction(nodelay, int, "i;True(1) or False(0)")
Window_OneArgNoReturnFunction(nodelay, int, "i;True(1) or False(0)")
Window_OneArgNoReturnFunction(notimeout, int, "i;True(1) or False(0)")
Window_OneArgNoReturnFunction(scrollok, int, "i;True(1) or False(0)")
Window_OneArgNoReturnFunction(winsdelln, int, "i;nlines")
Window_OneArgNoReturnFunction(syncok, int, "i;True(1) or False(0)")
Window_TwoArgNoReturnFunction(mvwin, int, "ii;y,x")
Window_TwoArgNoReturnFunction(mvderwin, int, "ii;y,x")
Window_TwoArgNoReturnFunction(wmove, int, "ii;y,x")
Window_TwoArgNoReturnFunction(wresize, int, "ii;lines,columns")
static PyObject *
PyCursesWindow_New(WINDOW *win)
static void
PyCursesWindow_Dealloc(PyCursesWindowObject *wo)
static PyObject *
PyCursesWindow_AddCh(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_AddStr(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_AddNStr(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_Bkgd(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_AttrOff(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_AttrOn(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_AttrSet(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_BkgdSet(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_Border(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_Box(PyCursesWindowObject *self, PyObject *args)
#if defined(HAVE_NCURSES_H) || defined(MVWDELCH_IS_EXPRESSION)
#define py_mvwdelch mvwdelch
int py_mvwdelch(WINDOW *w, int y, int x)
static PyObject *
PyCursesWindow_ChgAt(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_DelCh(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_DerWin(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_EchoChar(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_Enclose(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_GetBkgd(PyCursesWindowObject *self)
static PyObject *
PyCursesWindow_GetCh(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_GetKey(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_GetStr(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_Hline(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_InsCh(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_InCh(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_InStr(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_InsStr(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_InsNStr(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_Is_LineTouched(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_NoOutRefresh(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_Overlay(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_Overwrite(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_PutWin(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_RedrawLine(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_Refresh(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_SetScrollRegion(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_SubWin(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_Scroll(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_TouchLine(PyCursesWindowObject *self, PyObject *args)
static PyObject *
PyCursesWindow_Vline(PyCursesWindowObject *self, PyObject *args)
static PyMethodDef PyCursesWindow_Methods[] = ;
static PyObject *
PyCursesWindow_GetAttr(PyCursesWindowObject *self, char *name)
PyTypeObject PyCursesWindow_Type = ;
NoArgNoReturnFunction(beep)
NoArgNoReturnFunction(def_prog_mode)
NoArgNoReturnFunction(def_shell_mode)
NoArgNoReturnFunction(doupdate)
NoArgNoReturnFunction(endwin)
NoArgNoReturnFunction(flash)
NoArgNoReturnFunction(nocbreak)
NoArgNoReturnFunction(noecho)
NoArgNoReturnFunction(nonl)
NoArgNoReturnFunction(noraw)
NoArgNoReturnFunction(reset_prog_mode)
NoArgNoReturnFunction(reset_shell_mode)
NoArgNoReturnFunction(resetty)
NoArgNoReturnFunction(savetty)
NoArgOrFlagNoReturnFunction(cbreak)
NoArgOrFlagNoReturnFunction(echo)
NoArgOrFlagNoReturnFunction(nl)
NoArgOrFlagNoReturnFunction(raw)
NoArgReturnIntFunction(baudrate)
NoArgReturnIntFunction(termattrs)
NoArgReturnStringFunction(termname)
NoArgReturnStringFunction(longname)
NoArgTrueFalseFunction(can_change_color)
NoArgTrueFalseFunction(has_colors)
NoArgTrueFalseFunction(has_ic)
NoArgTrueFalseFunction(has_il)
NoArgTrueFalseFunction(isendwin)
NoArgNoReturnVoidFunction(flushinp)
NoArgNoReturnVoidFunction(noqiflush)
static PyObject *
PyCurses_filter(PyObject *self)
static PyObject *
PyCurses_Color_Content(PyObject *self, PyObject *args)
static PyObject *
PyCurses_color_pair(PyObject *self, PyObject *args)
static PyObject *
PyCurses_Curs_Set(PyObject *self, PyObject *args)
static PyObject *
PyCurses_Delay_Output(PyObject *self, PyObject *args)
static PyObject *
PyCurses_EraseChar(PyObject *self)
static PyObject *
PyCurses_getsyx(PyObject *self)
static PyObject *
PyCurses_GetMouse(PyObject *self)
static PyObject *
PyCurses_UngetMouse(PyObject *self, PyObject *args)
static PyObject *
PyCurses_GetWin(PyCursesWindowObject *self, PyObject *temp)
static PyObject *
PyCurses_HalfDelay(PyObject *self, PyObject *args)
static PyObject * PyCurses_has_key(PyObject *self, PyObject *args)
static PyObject *
PyCurses_Init_Color(PyObject *self, PyObject *args)
static PyObject *
PyCurses_Init_Pair(PyObject *self, PyObject *args)
static PyObject *ModDict;
static PyObject *
PyCurses_InitScr(PyObject *self)
static PyObject *
PyCurses_setupterm(PyObject* self, PyObject *args, PyObject* keywds)
static PyObject *
PyCurses_IntrFlush(PyObject *self, PyObject *args)
static PyObject *
PyCurses_Is_Term_Resized(PyObject *self, PyObject *args)
#if !defined(__NetBSD__)
static PyObject *
PyCurses_KeyName(PyObject *self, PyObject *args)
static PyObject *
PyCurses_KillChar(PyObject *self)
static PyObject *
PyCurses_Meta(PyObject *self, PyObject *args)
static PyObject *
PyCurses_MouseInterval(PyObject *self, PyObject *args)
static PyObject *
PyCurses_MouseMask(PyObject *self, PyObject *args)
static PyObject *
PyCurses_Napms(PyObject *self, PyObject *args)
static PyObject *
PyCurses_NewPad(PyObject *self, PyObject *args)
static PyObject *
PyCurses_NewWindow(PyObject *self, PyObject *args)
static PyObject *
PyCurses_Pair_Content(PyObject *self, PyObject *args)
static PyObject *
PyCurses_pair_number(PyObject *self, PyObject *args)
static PyObject *
PyCurses_Putp(PyObject *self, PyObject *args)
static PyObject *
PyCurses_QiFlush(PyObject *self, PyObject *args)
#if defined(HAVE_CURSES_RESIZETERM) || defined(HAVE_CURSES_RESIZE_TERM)
static int
update_lines_cols(void)
static PyObject *
PyCurses_ResizeTerm(PyObject *self, PyObject *args)
static PyObject *
PyCurses_Resize_Term(PyObject *self, PyObject *args)
static PyObject *
PyCurses_setsyx(PyObject *self, PyObject *args)
static PyObject *
PyCurses_Start_Color(PyObject *self)
static PyObject *
PyCurses_tigetflag(PyObject *self, PyObject *args)
static PyObject *
PyCurses_tigetnum(PyObject *self, PyObject *args)
static PyObject *
PyCurses_tigetstr(PyObject *self, PyObject *args)
static PyObject *
PyCurses_tparm(PyObject *self, PyObject *args)
static PyObject *
PyCurses_TypeAhead(PyObject *self, PyObject *args)
static PyObject *
PyCurses_UnCtrl(PyObject *self, PyObject *args)
static PyObject *
PyCurses_UngetCh(PyObject *self, PyObject *args)
static PyObject *
PyCurses_Use_Env(PyObject *self, PyObject *args)
static PyObject *
PyCurses_Use_Default_Colors(PyObject *self)
static PyMethodDef PyCurses_methods[] = ;
PyMODINIT_FUNC
init_curses(void)
