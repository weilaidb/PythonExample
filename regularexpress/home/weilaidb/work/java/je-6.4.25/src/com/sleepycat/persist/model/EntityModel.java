package com.sleepycat.persist.model;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Set;
import com.sleepycat.compat.DbCompat;
import com.sleepycat.persist.EntityStore;
import com.sleepycat.persist.PrimaryIndex;
import com.sleepycat.persist.SecondaryIndex;
import com.sleepycat.persist.impl.Format;
import com.sleepycat.persist.impl.PersistCatalog;
import com.sleepycat.persist.impl.RefreshException;
import com.sleepycat.persist.raw.RawObject;
import com.sleepycat.persist.raw.RawType;
import com.sleepycat.util.ClassResolver;
public abstract class EntityModel
