package com.sleepycat.collections.test;
import java.util.ArrayList;
import java.util.List;
import com.sleepycat.bind.EntityBinding;
import com.sleepycat.bind.EntryBinding;
import com.sleepycat.bind.RecordNumberBinding;
import com.sleepycat.collections.CurrentTransaction;
import com.sleepycat.compat.DbCompat;
import com.sleepycat.je.Database;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.Environment;
import com.sleepycat.je.SecondaryConfig;
class TestStore