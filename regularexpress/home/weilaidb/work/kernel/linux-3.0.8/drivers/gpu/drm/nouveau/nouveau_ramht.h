#define __NOUVEAU_RAMHT_H__
struct nouveau_ramht_entry ;
struct nouveau_ramht ;
extern int  nouveau_ramht_new(struct drm_device *, struct nouveau_gpuobj *,
struct nouveau_ramht **);
extern void nouveau_ramht_ref(struct nouveau_ramht *, struct nouveau_ramht **,
struct nouveau_channel *unref_channel);
extern int  nouveau_ramht_insert(struct nouveau_channel *, u32 handle,
struct nouveau_gpuobj *);
extern int  nouveau_ramht_remove(struct nouveau_channel *, u32 handle);
extern struct nouveau_gpuobj *
nouveau_ramht_find(struct nouveau_channel *chan, u32 handle);
