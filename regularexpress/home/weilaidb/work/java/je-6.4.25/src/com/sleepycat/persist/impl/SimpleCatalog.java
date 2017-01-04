package com.sleepycat.persist.impl;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.IdentityHashMap;
import java.util.List;
import java.util.Map;
import java.util.NoSuchElementException;
import com.sleepycat.compat.DbCompat;
import com.sleepycat.persist.raw.RawObject;
import com.sleepycat.util.ClassResolver;
public class SimpleCatalog implements Catalog
