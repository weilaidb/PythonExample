package com.sleepycat.je.jca.ra;
import javax.resource.ResourceException;
import javax.resource.spi.ConnectionEvent;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.Transaction;
import com.sleepycat.je.TransactionConfig;
import com.sleepycat.je.XAEnvironment;
public class JELocalTransaction
implements javax.resource.cci.LocalTransaction,
javax.resource.spi.LocalTransaction
