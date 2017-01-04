static int
RemovePendingResizedEvents(void * userdata, SDL_Event *event)
static int
RemovePendingSizeChangedEvents(void * userdata, SDL_Event *event)
static int
RemovePendingMoveEvents(void * userdata, SDL_Event *event)
static int
RemovePendingExposedEvents(void * userdata, SDL_Event *event)
int
SDL_SendWindowEvent(SDL_Window * window, Uint8 windowevent, int data1,
int data2)
