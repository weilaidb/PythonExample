package org.apache.hadoop.tools.rumen;
import java.io.Closeable;
import java.io.IOException;
import java.io.OutputStream;
import org.apache.hadoop.mapreduce.ID;
import org.apache.hadoop.tools.rumen.datatypes.DataType;
import org.apache.hadoop.tools.rumen.serializers.DefaultRumenSerializer;
import org.apache.hadoop.tools.rumen.serializers.ObjectStringSerializer;
import org.codehaus.jackson.JsonEncoding;
import org.codehaus.jackson.JsonGenerator;
import org.codehaus.jackson.Version;
import org.codehaus.jackson.map.ObjectMapper;
import org.codehaus.jackson.map.SerializationConfig;
import org.codehaus.jackson.map.module.SimpleModule;
public class JsonObjectMapperWriter<T> implements Closeable
