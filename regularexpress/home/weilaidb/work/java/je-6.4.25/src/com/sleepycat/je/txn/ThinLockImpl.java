package com.sleepycat.je.txn;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Set;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.dbi.MemoryBudget;
public class ThinLockImpl extends LockInfo implements Lock
