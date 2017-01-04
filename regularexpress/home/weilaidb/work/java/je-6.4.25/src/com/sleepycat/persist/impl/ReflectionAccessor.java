package com.sleepycat.persist.impl;
import java.lang.reflect.AccessibleObject;
import java.lang.reflect.Array;
import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Modifier;
import java.util.List;
import com.sleepycat.compat.DbCompat;
class ReflectionAccessor implements Accessor
