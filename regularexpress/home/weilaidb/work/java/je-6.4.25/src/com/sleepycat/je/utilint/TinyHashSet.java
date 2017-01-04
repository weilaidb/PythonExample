package com.sleepycat.je.utilint;
import java.util.HashSet;
import java.util.Iterator;
import java.util.NoSuchElementException;
import java.util.Set;
import static com.sleepycat.je.EnvironmentFailureException.assertState;
public class TinyHashSet<T> implements Iterable<T>
