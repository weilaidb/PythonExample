package com.sleepycat.je.rep;
import static org.junit.Assert.fail;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.NotSerializableException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.Map;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
import com.sleepycat.je.serializecompatibility.SerializeUtils;
public class SerializationTest
