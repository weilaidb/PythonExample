package com.sleepycat.je.tree;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;
import java.io.Serializable;
import java.nio.ByteBuffer;
import java.util.Arrays;
import java.util.Comparator;
import java.util.List;
import java.util.Random;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.junit.runners.Parameterized;
import org.junit.runners.Parameterized.Parameters;
import com.sleepycat.je.CacheMode;
import com.sleepycat.je.Database;
import com.sleepycat.je.DatabaseEntry;
import com.sleepycat.je.DbInternal;
import com.sleepycat.je.PartialComparator;
import com.sleepycat.je.config.EnvironmentParams;
import com.sleepycat.je.dbi.DatabaseImpl;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.tree.INKeyRep.Default;
import com.sleepycat.je.tree.INKeyRep.MaxKeySize;
import com.sleepycat.je.tree.INKeyRep.Type;
import com.sleepycat.je.utilint.VLSN;
@RunWith(Parameterized.class)
public class INKeyRepTest extends INEntryTestBase
