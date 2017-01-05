package org.apache.hadoop.mapred;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import org.apache.hadoop.mapred.TaskCompletionEvent.Status;
import org.apache.hadoop.mapreduce.TaskType;
import org.junit.Test;
import static org.junit.Assert.*;
public class TestOldMethodsJobID
