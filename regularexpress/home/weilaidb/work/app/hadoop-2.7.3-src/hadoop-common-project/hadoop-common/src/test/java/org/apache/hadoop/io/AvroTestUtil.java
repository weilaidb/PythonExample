package org.apache.hadoop.io;
import java.io.ByteArrayOutputStream;
import java.lang.reflect.Type;
import org.apache.avro.Schema;
import org.apache.avro.io.EncoderFactory;
import org.apache.avro.reflect.ReflectData;
import org.apache.avro.reflect.ReflectDatumWriter;
import org.apache.avro.reflect.ReflectDatumReader;
import org.apache.avro.io.DecoderFactory;
import static junit.framework.TestCase.assertEquals;
public class AvroTestUtil
