package com.sleepycat.persist.impl;
import java.lang.reflect.Field;
import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.Date;
import java.util.Map;
import java.util.Set;
import com.sleepycat.compat.DbCompat;
import com.sleepycat.je.DatabaseEntry;
import com.sleepycat.persist.model.EntityModel;
public abstract class SimpleFormat extends Format
