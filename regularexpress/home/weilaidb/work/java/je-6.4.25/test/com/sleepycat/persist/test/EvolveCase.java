package com.sleepycat.persist.test;
import java.util.Iterator;
import java.util.List;
import junit.framework.TestCase;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.Environment;
import com.sleepycat.persist.EntityStore;
import com.sleepycat.persist.StoreConfig;
import com.sleepycat.persist.evolve.Mutations;
import com.sleepycat.persist.model.ClassMetadata;
import com.sleepycat.persist.model.EntityModel;
import com.sleepycat.persist.model.Persistent;
import com.sleepycat.persist.raw.RawStore;
import com.sleepycat.persist.raw.RawType;
@Persistent
abstract class EvolveCase
