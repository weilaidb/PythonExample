package com.sleepycat.persist.impl;
import java.io.Serializable;
import java.lang.reflect.Field;
import java.lang.reflect.Modifier;
import java.lang.reflect.ParameterizedType;
import java.lang.reflect.Type;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import java.util.Map;
import com.sleepycat.compat.DbCompat;
import com.sleepycat.persist.model.EntityModel;
import com.sleepycat.persist.raw.RawField;
import com.sleepycat.persist.model.FieldMetadata;
import com.sleepycat.persist.model.ClassMetadata;
class FieldInfo implements RawField, Serializable, Comparable<FieldInfo>
