package org.apache.hadoop.tools.rumen.serializers;
import java.io.IOException;
import org.codehaus.jackson.JsonGenerator;
import org.codehaus.jackson.JsonProcessingException;
import org.codehaus.jackson.map.JsonSerializer;
import org.codehaus.jackson.map.SerializerProvider;
public class ObjectStringSerializer<T> extends JsonSerializer<T>
