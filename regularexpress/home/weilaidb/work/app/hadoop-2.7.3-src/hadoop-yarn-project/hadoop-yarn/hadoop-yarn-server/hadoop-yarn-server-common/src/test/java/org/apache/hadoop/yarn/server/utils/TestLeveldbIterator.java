package org.apache.hadoop.yarn.server.utils;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertNotNull;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.fail;
import java.io.IOException;
import java.lang.reflect.InvocationHandler;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.lang.reflect.Proxy;
import org.iq80.leveldb.DBException;
import org.iq80.leveldb.DBIterator;
import org.junit.Test;
public class TestLeveldbIterator
