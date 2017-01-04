package com.sleepycat.persist.impl;
import java.util.IdentityHashMap;
import java.util.List;
import java.util.Map;
import java.util.NoSuchElementException;
import com.sleepycat.compat.DbCompat;
import com.sleepycat.persist.raw.RawObject;
class ReadOnlyCatalog implements Catalog
