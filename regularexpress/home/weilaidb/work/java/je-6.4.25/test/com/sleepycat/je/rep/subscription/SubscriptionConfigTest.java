package com.sleepycat.je.rep.subscription;
import java.io.Serializable;
import java.util.UUID;
import java.util.concurrent.TimeUnit;
import java.util.logging.Logger;
import com.sleepycat.je.rep.impl.RepImpl;
import com.sleepycat.je.rep.stream.FeederFilter;
import com.sleepycat.je.rep.stream.OutputWireRecord;
import com.sleepycat.je.rep.utilint.HostPortPair;
import com.sleepycat.je.utilint.LoggerUtils;
import com.sleepycat.je.utilint.VLSN;
import com.sleepycat.util.test.TestBase;
import org.junit.Before;
import org.junit.Test;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.fail;
public class SubscriptionConfigTest extends TestBase
