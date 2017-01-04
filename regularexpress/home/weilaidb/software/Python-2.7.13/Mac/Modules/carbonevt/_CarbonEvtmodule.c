#if APPLE_SUPPORTS_QUICKTIME
#define PyMac_PRECHECK(rtn) do  while(0)
extern int CFStringRef_New(CFStringRef *);
extern int CFStringRef_Convert(PyObject *, CFStringRef *);
extern int CFBundleRef_Convert(PyObject *, CFBundleRef *);
int EventTargetRef_Convert(PyObject *, EventTargetRef *);
PyObject *EventHandlerCallRef_New(EventHandlerCallRef itself);
PyObject *EventRef_New(EventRef itself);
static int
EventTypeSpec_Convert(PyObject *v, EventTypeSpec *out)
static int
EventHotKeyID_Convert(PyObject *v, EventHotKeyID *out)
static EventHandlerUPP myEventHandlerUPP;
static pascal OSStatus
myEventHandler(EventHandlerCallRef handlerRef, EventRef event, void *outPyObject)
static PyObject *CarbonEvents_Error;
PyTypeObject EventRef_Type;
#define EventRef_Check(x) ((x)->ob_type == &EventRef_Type || PyObject_TypeCheck((x), &EventRef_Type))
typedef struct EventRefObject  EventRefObject;
PyObject *EventRef_New(EventRef itself)
int EventRef_Convert(PyObject *v, EventRef *p_itself)
static void EventRef_dealloc(EventRefObject *self)
static PyObject *EventRef_RetainEvent(EventRefObject *_self, PyObject *_args)
static PyObject *EventRef_GetEventRetainCount(EventRefObject *_self, PyObject *_args)
static PyObject *EventRef_ReleaseEvent(EventRefObject *_self, PyObject *_args)
static PyObject *EventRef_SetEventParameter(EventRefObject *_self, PyObject *_args)
static PyObject *EventRef_GetEventClass(EventRefObject *_self, PyObject *_args)
static PyObject *EventRef_GetEventKind(EventRefObject *_self, PyObject *_args)
static PyObject *EventRef_GetEventTime(EventRefObject *_self, PyObject *_args)
static PyObject *EventRef_SetEventTime(EventRefObject *_self, PyObject *_args)
static PyObject *EventRef_IsUserCancelEventRef(EventRefObject *_self, PyObject *_args)
static PyObject *EventRef_ConvertEventRefToEventRecord(EventRefObject *_self, PyObject *_args)
static PyObject *EventRef_IsEventInMask(EventRefObject *_self, PyObject *_args)
static PyObject *EventRef_SendEventToEventTarget(EventRefObject *_self, PyObject *_args)
static PyObject *EventRef_GetEventParameter(EventRefObject *_self, PyObject *_args)
static PyMethodDef EventRef_methods[] = ;
#define EventRef_getsetlist NULL
#define EventRef_compare NULL
#define EventRef_repr NULL
#define EventRef_hash NULL
#define EventRef_tp_init 0
#define EventRef_tp_alloc PyType_GenericAlloc
static PyObject *EventRef_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define EventRef_tp_free PyObject_Del
PyTypeObject EventRef_Type = ;
PyTypeObject EventQueueRef_Type;
#define EventQueueRef_Check(x) ((x)->ob_type == &EventQueueRef_Type || PyObject_TypeCheck((x), &EventQueueRef_Type))
typedef struct EventQueueRefObject  EventQueueRefObject;
PyObject *EventQueueRef_New(EventQueueRef itself)
int EventQueueRef_Convert(PyObject *v, EventQueueRef *p_itself)
static void EventQueueRef_dealloc(EventQueueRefObject *self)
static PyObject *EventQueueRef_PostEventToQueue(EventQueueRefObject *_self, PyObject *_args)
static PyObject *EventQueueRef_FlushEventsMatchingListFromQueue(EventQueueRefObject *_self, PyObject *_args)
static PyObject *EventQueueRef_FlushEventQueue(EventQueueRefObject *_self, PyObject *_args)
static PyObject *EventQueueRef_GetNumEventsInQueue(EventQueueRefObject *_self, PyObject *_args)
static PyObject *EventQueueRef_RemoveEventFromQueue(EventQueueRefObject *_self, PyObject *_args)
static PyObject *EventQueueRef_IsEventInQueue(EventQueueRefObject *_self, PyObject *_args)
static PyMethodDef EventQueueRef_methods[] = ;
#define EventQueueRef_getsetlist NULL
#define EventQueueRef_compare NULL
#define EventQueueRef_repr NULL
#define EventQueueRef_hash NULL
#define EventQueueRef_tp_init 0
#define EventQueueRef_tp_alloc PyType_GenericAlloc
static PyObject *EventQueueRef_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define EventQueueRef_tp_free PyObject_Del
PyTypeObject EventQueueRef_Type = ;
PyTypeObject EventLoopRef_Type;
#define EventLoopRef_Check(x) ((x)->ob_type == &EventLoopRef_Type || PyObject_TypeCheck((x), &EventLoopRef_Type))
typedef struct EventLoopRefObject  EventLoopRefObject;
PyObject *EventLoopRef_New(EventLoopRef itself)
int EventLoopRef_Convert(PyObject *v, EventLoopRef *p_itself)
static void EventLoopRef_dealloc(EventLoopRefObject *self)
static PyObject *EventLoopRef_QuitEventLoop(EventLoopRefObject *_self, PyObject *_args)
static PyMethodDef EventLoopRef_methods[] = ;
#define EventLoopRef_getsetlist NULL
#define EventLoopRef_compare NULL
#define EventLoopRef_repr NULL
#define EventLoopRef_hash NULL
#define EventLoopRef_tp_init 0
#define EventLoopRef_tp_alloc PyType_GenericAlloc
static PyObject *EventLoopRef_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define EventLoopRef_tp_free PyObject_Del
PyTypeObject EventLoopRef_Type = ;
PyTypeObject EventLoopTimerRef_Type;
#define EventLoopTimerRef_Check(x) ((x)->ob_type == &EventLoopTimerRef_Type || PyObject_TypeCheck((x), &EventLoopTimerRef_Type))
typedef struct EventLoopTimerRefObject  EventLoopTimerRefObject;
PyObject *EventLoopTimerRef_New(EventLoopTimerRef itself)
int EventLoopTimerRef_Convert(PyObject *v, EventLoopTimerRef *p_itself)
static void EventLoopTimerRef_dealloc(EventLoopTimerRefObject *self)
static PyObject *EventLoopTimerRef_RemoveEventLoopTimer(EventLoopTimerRefObject *_self, PyObject *_args)
static PyObject *EventLoopTimerRef_SetEventLoopTimerNextFireTime(EventLoopTimerRefObject *_self, PyObject *_args)
static PyMethodDef EventLoopTimerRef_methods[] = ;
#define EventLoopTimerRef_getsetlist NULL
#define EventLoopTimerRef_compare NULL
#define EventLoopTimerRef_repr NULL
#define EventLoopTimerRef_hash NULL
#define EventLoopTimerRef_tp_init 0
#define EventLoopTimerRef_tp_alloc PyType_GenericAlloc
static PyObject *EventLoopTimerRef_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define EventLoopTimerRef_tp_free PyObject_Del
PyTypeObject EventLoopTimerRef_Type = ;
PyTypeObject EventHandlerRef_Type;
#define EventHandlerRef_Check(x) ((x)->ob_type == &EventHandlerRef_Type || PyObject_TypeCheck((x), &EventHandlerRef_Type))
typedef struct EventHandlerRefObject  EventHandlerRefObject;
PyObject *EventHandlerRef_New(EventHandlerRef itself)
int EventHandlerRef_Convert(PyObject *v, EventHandlerRef *p_itself)
static void EventHandlerRef_dealloc(EventHandlerRefObject *self)
static PyObject *EventHandlerRef_AddEventTypesToHandler(EventHandlerRefObject *_self, PyObject *_args)
static PyObject *EventHandlerRef_RemoveEventTypesFromHandler(EventHandlerRefObject *_self, PyObject *_args)
static PyObject *EventHandlerRef_RemoveEventHandler(EventHandlerRefObject *_self, PyObject *_args)
static PyMethodDef EventHandlerRef_methods[] = ;
#define EventHandlerRef_getsetlist NULL
#define EventHandlerRef_compare NULL
#define EventHandlerRef_repr NULL
#define EventHandlerRef_hash NULL
#define EventHandlerRef_tp_init 0
#define EventHandlerRef_tp_alloc PyType_GenericAlloc
static PyObject *EventHandlerRef_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define EventHandlerRef_tp_free PyObject_Del
PyTypeObject EventHandlerRef_Type = ;
PyTypeObject EventHandlerCallRef_Type;
#define EventHandlerCallRef_Check(x) ((x)->ob_type == &EventHandlerCallRef_Type || PyObject_TypeCheck((x), &EventHandlerCallRef_Type))
typedef struct EventHandlerCallRefObject  EventHandlerCallRefObject;
PyObject *EventHandlerCallRef_New(EventHandlerCallRef itself)
int EventHandlerCallRef_Convert(PyObject *v, EventHandlerCallRef *p_itself)
static void EventHandlerCallRef_dealloc(EventHandlerCallRefObject *self)
static PyObject *EventHandlerCallRef_CallNextEventHandler(EventHandlerCallRefObject *_self, PyObject *_args)
static PyMethodDef EventHandlerCallRef_methods[] = ;
#define EventHandlerCallRef_getsetlist NULL
#define EventHandlerCallRef_compare NULL
#define EventHandlerCallRef_repr NULL
#define EventHandlerCallRef_hash NULL
#define EventHandlerCallRef_tp_init 0
#define EventHandlerCallRef_tp_alloc PyType_GenericAlloc
static PyObject *EventHandlerCallRef_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define EventHandlerCallRef_tp_free PyObject_Del
PyTypeObject EventHandlerCallRef_Type = ;
PyTypeObject EventTargetRef_Type;
#define EventTargetRef_Check(x) ((x)->ob_type == &EventTargetRef_Type || PyObject_TypeCheck((x), &EventTargetRef_Type))
typedef struct EventTargetRefObject  EventTargetRefObject;
PyObject *EventTargetRef_New(EventTargetRef itself)
int EventTargetRef_Convert(PyObject *v, EventTargetRef *p_itself)
static void EventTargetRef_dealloc(EventTargetRefObject *self)
static PyObject *EventTargetRef_InstallStandardEventHandler(EventTargetRefObject *_self, PyObject *_args)
static PyObject *EventTargetRef_InstallEventHandler(EventTargetRefObject *_self, PyObject *_args)
static PyMethodDef EventTargetRef_methods[] = ;
#define EventTargetRef_getsetlist NULL
#define EventTargetRef_compare NULL
#define EventTargetRef_repr NULL
#define EventTargetRef_hash NULL
#define EventTargetRef_tp_init 0
#define EventTargetRef_tp_alloc PyType_GenericAlloc
static PyObject *EventTargetRef_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define EventTargetRef_tp_free PyObject_Del
PyTypeObject EventTargetRef_Type = ;
PyTypeObject EventHotKeyRef_Type;
#define EventHotKeyRef_Check(x) ((x)->ob_type == &EventHotKeyRef_Type || PyObject_TypeCheck((x), &EventHotKeyRef_Type))
typedef struct EventHotKeyRefObject  EventHotKeyRefObject;
PyObject *EventHotKeyRef_New(EventHotKeyRef itself)
int EventHotKeyRef_Convert(PyObject *v, EventHotKeyRef *p_itself)
static void EventHotKeyRef_dealloc(EventHotKeyRefObject *self)
static PyObject *EventHotKeyRef_UnregisterEventHotKey(EventHotKeyRefObject *_self, PyObject *_args)
static PyMethodDef EventHotKeyRef_methods[] = ;
#define EventHotKeyRef_getsetlist NULL
#define EventHotKeyRef_compare NULL
#define EventHotKeyRef_repr NULL
#define EventHotKeyRef_hash NULL
#define EventHotKeyRef_tp_init 0
#define EventHotKeyRef_tp_alloc PyType_GenericAlloc
static PyObject *EventHotKeyRef_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define EventHotKeyRef_tp_free PyObject_Del
PyTypeObject EventHotKeyRef_Type = ;
static PyObject *CarbonEvents_GetCurrentEventLoop(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_GetMainEventLoop(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_RunCurrentEventLoop(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_ReceiveNextEvent(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_GetCurrentEventQueue(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_GetMainEventQueue(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_GetCurrentEventTime(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_TrackMouseLocation(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_TrackMouseLocationWithOptions(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_TrackMouseRegion(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_GetLastUserEventTime(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_IsMouseCoalescingEnabled(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_SetMouseCoalescingEnabled(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_GetWindowEventTarget(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_GetControlEventTarget(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_GetMenuEventTarget(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_GetApplicationEventTarget(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_GetUserFocusEventTarget(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_GetEventDispatcherTarget(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_RunApplicationEventLoop(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_QuitApplicationEventLoop(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_RunAppModalLoopForWindow(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_QuitAppModalLoopForWindow(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_BeginAppModalStateForWindow(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_EndAppModalStateForWindow(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_SetUserFocusWindow(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_GetUserFocusWindow(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_SetWindowDefaultButton(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_SetWindowCancelButton(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_GetWindowDefaultButton(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_GetWindowCancelButton(PyObject *_self, PyObject *_args)
static PyObject *CarbonEvents_RegisterEventHotKey(PyObject *_self, PyObject *_args)
static PyMethodDef CarbonEvents_methods[] = ;
static PyMethodDef CarbonEvents_methods[] = ;
void init_CarbonEvt(void)
