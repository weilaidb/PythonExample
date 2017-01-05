package org.apache.hadoop.io;
import junit.framework.TestCase;
import java.io.IOException;
import java.nio.BufferUnderflowException;
import java.nio.ByteBuffer;
import java.nio.charset.CharacterCodingException;
import java.util.Random;
import com.google.common.base.Charsets;
import com.google.common.primitives.Bytes;
public class TestText extends TestCase
