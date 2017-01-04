package com.sleepycat.persist.impl;
import java.util.Collection;
import java.util.Set;
import com.sleepycat.bind.tuple.TupleBase;
import com.sleepycat.compat.DbCompat;
import com.sleepycat.je.DatabaseEntry;
import com.sleepycat.je.ForeignMultiKeyNullifier;
import com.sleepycat.je.SecondaryDatabase;
import com.sleepycat.je.SecondaryKeyCreator;
import com.sleepycat.je.SecondaryMultiKeyCreator;
import com.sleepycat.persist.model.EntityMetadata;
import com.sleepycat.persist.model.Relationship;
import com.sleepycat.persist.model.SecondaryKeyMetadata;
import com.sleepycat.persist.raw.RawObject;
public class PersistKeyCreator implements SecondaryKeyCreator,
SecondaryMultiKeyCreator,
ForeignMultiKeyNullifier
