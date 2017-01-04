package com.sleepycat.persist.test;
import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.Date;
import com.sleepycat.persist.impl.Enhanced;
import com.sleepycat.persist.impl.EnhancedAccessor;
import com.sleepycat.persist.impl.EntityInput;
import com.sleepycat.persist.impl.EntityOutput;
import com.sleepycat.persist.impl.Format;
import com.sleepycat.persist.impl.RefreshException;
import com.sleepycat.persist.model.KeyField;
import com.sleepycat.persist.model.Persistent;
@Persistent
class Enhanced3 implements Enhanced
