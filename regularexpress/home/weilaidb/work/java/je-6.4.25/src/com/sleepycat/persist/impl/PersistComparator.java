package com.sleepycat.persist.impl;
import java.io.Serializable;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Map;
import com.sleepycat.compat.DbCompat;
import com.sleepycat.je.DatabaseComparator;
public class PersistComparator implements
DatabaseComparator,
Comparator<byte[]>, Serializable
