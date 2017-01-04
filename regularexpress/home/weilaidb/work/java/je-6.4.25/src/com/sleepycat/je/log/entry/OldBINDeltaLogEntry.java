package com.sleepycat.je.log.entry;
import com.sleepycat.je.dbi.DatabaseId;
import com.sleepycat.je.dbi.DatabaseImpl;
import com.sleepycat.je.tree.OldBINDelta;
import com.sleepycat.je.tree.IN;
import com.sleepycat.je.utilint.DbLsn;
public class OldBINDeltaLogEntry extends SingleItemEntry<OldBINDelta>
implements INContainingEntry
