#if SDL_AUDIO_DRIVER_PULSEAUDIO
#if (PA_API_VERSION < 12)
static SDL_INLINE int PA_CONTEXT_IS_GOOD(pa_context_state_t x)
static SDL_INLINE int PA_STREAM_IS_GOOD(pa_stream_state_t x)
static const char *(*PULSEAUDIO_pa_get_library_version) (void);
static pa_channel_map *(*PULSEAUDIO_pa_channel_map_init_auto) (
pa_channel_map *, unsigned, pa_channel_map_def_t);
static const char * (*PULSEAUDIO_pa_strerror) (int);
static pa_mainloop * (*PULSEAUDIO_pa_mainloop_new) (void);
static pa_mainloop_api * (*PULSEAUDIO_pa_mainloop_get_api) (pa_mainloop *);
static int (*PULSEAUDIO_pa_mainloop_iterate) (pa_mainloop *, int, int *);
static int (*PULSEAUDIO_pa_mainloop_run) (pa_mainloop *, int *);
static void (*PULSEAUDIO_pa_mainloop_quit) (pa_mainloop *, int);
static void (*PULSEAUDIO_pa_mainloop_free) (pa_mainloop *);
static pa_operation_state_t (*PULSEAUDIO_pa_operation_get_state) (
pa_operation *);
static void (*PULSEAUDIO_pa_operation_cancel) (pa_operation *);
static void (*PULSEAUDIO_pa_operation_unref) (pa_operation *);
static pa_context * (*PULSEAUDIO_pa_context_new) (pa_mainloop_api *,
const char *);
static int (*PULSEAUDIO_pa_context_connect) (pa_context *, const char *,
pa_context_flags_t, const pa_spawn_api *);
static pa_operation * (*PULSEAUDIO_pa_context_get_sink_info_list) (pa_context *, pa_sink_info_cb_t, void *);
static pa_operation * (*PULSEAUDIO_pa_context_get_source_info_list) (pa_context *, pa_source_info_cb_t, void *);
static pa_operation * (*PULSEAUDIO_pa_context_get_sink_info_by_index) (pa_context *, uint32_t, pa_sink_info_cb_t, void *);
static pa_operation * (*PULSEAUDIO_pa_context_get_source_info_by_index) (pa_context *, uint32_t, pa_source_info_cb_t, void *);
static pa_context_state_t (*PULSEAUDIO_pa_context_get_state) (pa_context *);
static pa_operation * (*PULSEAUDIO_pa_context_subscribe) (pa_context *, pa_subscription_mask_t, pa_context_success_cb_t, void *);
static void (*PULSEAUDIO_pa_context_set_subscribe_callback) (pa_context *, pa_context_subscribe_cb_t, void *);
static void (*PULSEAUDIO_pa_context_disconnect) (pa_context *);
static void (*PULSEAUDIO_pa_context_unref) (pa_context *);
static pa_stream * (*PULSEAUDIO_pa_stream_new) (pa_context *, const char *,
const pa_sample_spec *, const pa_channel_map *);
static int (*PULSEAUDIO_pa_stream_connect_playback) (pa_stream *, const char *,
const pa_buffer_attr *, pa_stream_flags_t, pa_cvolume *, pa_stream *);
static int (*PULSEAUDIO_pa_stream_connect_record) (pa_stream *, const char *,
const pa_buffer_attr *, pa_stream_flags_t);
static pa_stream_state_t (*PULSEAUDIO_pa_stream_get_state) (pa_stream *);
static size_t (*PULSEAUDIO_pa_stream_writable_size) (pa_stream *);
static size_t (*PULSEAUDIO_pa_stream_readable_size) (pa_stream *);
static int (*PULSEAUDIO_pa_stream_write) (pa_stream *, const void *, size_t,
pa_free_cb_t, int64_t, pa_seek_mode_t);
static pa_operation * (*PULSEAUDIO_pa_stream_drain) (pa_stream *,
pa_stream_success_cb_t, void *);
static int (*PULSEAUDIO_pa_stream_peek) (pa_stream *, const void **, size_t *);
static int (*PULSEAUDIO_pa_stream_drop) (pa_stream *);
static pa_operation * (*PULSEAUDIO_pa_stream_flush)	(pa_stream *,
pa_stream_success_cb_t, void *);
static int (*PULSEAUDIO_pa_stream_disconnect) (pa_stream *);
static void (*PULSEAUDIO_pa_stream_unref) (pa_stream *);
static int load_pulseaudio_syms(void);
static const char *pulseaudio_library = SDL_AUDIO_DRIVER_PULSEAUDIO_DYNAMIC;
static void *pulseaudio_handle = NULL;
static int
load_pulseaudio_sym(const char *fn, void **addr)
#define SDL_PULSEAUDIO_SYM(x) \
if (!load_pulseaudio_sym(#x, (void **) (char *) &PULSEAUDIO_##x)) return -1
static void
UnloadPulseAudioLibrary(void)
static int
LoadPulseAudioLibrary(void)
#define SDL_PULSEAUDIO_SYM(x) PULSEAUDIO_##x = x
static void
UnloadPulseAudioLibrary(void)
static int
LoadPulseAudioLibrary(void)
static int
load_pulseaudio_syms(void)
static SDL_INLINE int
squashVersion(const int major, const int minor, const int patch)
static const char *
getAppName(void)
static void
stream_operation_complete_no_op(pa_stream *s, int success, void *userdata)
static void
WaitForPulseOperation(pa_mainloop *mainloop, pa_operation *o)
static void
DisconnectFromPulseServer(pa_mainloop *mainloop, pa_context *context)
static int
ConnectToPulseServer_Internal(pa_mainloop **_mainloop, pa_context **_context)
static int
ConnectToPulseServer(pa_mainloop **_mainloop, pa_context **_context)
static void
PULSEAUDIO_WaitDevice(_THIS)
static void
PULSEAUDIO_PlayDevice(_THIS)
static Uint8 *
PULSEAUDIO_GetDeviceBuf(_THIS)
static int
PULSEAUDIO_CaptureFromDevice(_THIS, void *buffer, int buflen)
static void
PULSEAUDIO_FlushCapture(_THIS)
static void
PULSEAUDIO_CloseDevice(_THIS)
static void
SinkDeviceNameCallback(pa_context *c, const pa_sink_info *i, int is_last, void *data)
static void
SourceDeviceNameCallback(pa_context *c, const pa_source_info *i, int is_last, void *data)
static SDL_bool
FindDeviceName(struct SDL_PrivateAudioData *h, const int iscapture, void *handle)
static int
PULSEAUDIO_OpenDevice(_THIS, void *handle, const char *devname, int iscapture)
static pa_mainloop *hotplug_mainloop = NULL;
static pa_context *hotplug_context = NULL;
static SDL_Thread *hotplug_thread = NULL;
static void
SinkInfoCallback(pa_context *c, const pa_sink_info *i, int is_last, void *data)
static void
SourceInfoCallback(pa_context *c, const pa_source_info *i, int is_last, void *data)
static void
HotplugCallback(pa_context *c, pa_subscription_event_type_t t, uint32_t idx, void *data)
static int SDLCALL
HotplugThread(void *data)
static void
PULSEAUDIO_DetectDevices()
static void
PULSEAUDIO_Deinitialize(void)
static int
PULSEAUDIO_Init(SDL_AudioDriverImpl * impl)
AudioBootStrap PULSEAUDIO_bootstrap = ;
