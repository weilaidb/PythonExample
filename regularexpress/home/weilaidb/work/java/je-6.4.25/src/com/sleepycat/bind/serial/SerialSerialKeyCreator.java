package com.sleepycat.bind.serial;
import com.sleepycat.je.DatabaseEntry;
import com.sleepycat.je.ForeignKeyNullifier;
import com.sleepycat.je.SecondaryDatabase;
import com.sleepycat.je.SecondaryKeyCreator;
public abstract class SerialSerialKeyCreator<PK,D,SK>
implements SecondaryKeyCreator, ForeignKeyNullifier
