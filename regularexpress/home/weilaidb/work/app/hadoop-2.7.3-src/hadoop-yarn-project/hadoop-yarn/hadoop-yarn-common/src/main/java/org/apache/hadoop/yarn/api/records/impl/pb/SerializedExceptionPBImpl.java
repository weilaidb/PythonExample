package org.apache.hadoop.yarn.api.records.impl.pb;
import java.io.IOException;
import java.io.PrintWriter;
import java.io.StringWriter;
import java.lang.reflect.Constructor;
import java.lang.reflect.InvocationTargetException;
import org.apache.hadoop.yarn.api.records.SerializedException;
import org.apache.hadoop.yarn.exceptions.YarnException;
import org.apache.hadoop.yarn.exceptions.YarnRuntimeException;
import org.apache.hadoop.yarn.proto.YarnProtos.SerializedExceptionProto;
import org.apache.hadoop.yarn.proto.YarnProtos.SerializedExceptionProtoOrBuilder;
public class SerializedExceptionPBImpl extends SerializedException
