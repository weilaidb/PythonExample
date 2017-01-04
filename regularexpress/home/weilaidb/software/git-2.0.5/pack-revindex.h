#define PACK_REVINDEX_H
struct revindex_entry ;
struct pack_revindex ;
struct pack_revindex *revindex_for_pack(struct packed_git *p);
int find_revindex_position(struct pack_revindex *pridx, off_t ofs);
struct revindex_entry *find_pack_revindex(struct packed_git *p, off_t ofs);
