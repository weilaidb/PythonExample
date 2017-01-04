# Support routines for hand-crafting weird or malicious packs.
#
# You can make a complete pack like:
#
#   pack_header 2 >foo.pack &&
#   pack_obj e69de29bb2d1d6434b8b29ae775ad8c2e48c5391 >>foo.pack &&
#   pack_obj e68fe8129b546b101aee9510c5328e7f21ca1d18 >>foo.pack &&
#   pack_trailer foo.pack
# Print the big-endian 4-byte octal representation of $1
uint32_octal ()
# Print the big-endian 4-byte binary representation of $1
uint32_binary ()
# Print a pack header, version 2, for a pack with $1 objects
pack_header ()
# Print the pack data for object $1, as a delta against object $2 (or as a full
# object if $2 is missing or empty). The output is suitable for including
# directly in the packfile, and represents the entirety of the object entry.
# Doing this on the fly (especially picking your deltas) is quite tricky, so we
# have hardcoded some well-known objects. See the case statements below for the
# complete list.
pack_obj ()
# Compute and append pack trailer to "$1"
pack_trailer ()
# Remove any existing packs to make sure that
# whatever we index next will be the pack that we
# actually use.
clear_packs ()
