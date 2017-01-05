package org.apache.hadoop.hdfs.protocol;
import java.lang.reflect.Method;
import org.apache.hadoop.hdfs.server.protocol.NamenodeProtocols;
import org.apache.hadoop.io.retry.AtMostOnce;
import org.apache.hadoop.io.retry.Idempotent;
import org.junit.Assert;
import org.junit.Test;
public class TestAnnotations
