package org.apache.hadoop.tools.rumen.serializers;
import java.io.IOException;
import org.apache.hadoop.tools.rumen.datatypes.DataType;
import org.codehaus.jackson.JsonGenerator;
import org.codehaus.jackson.JsonProcessingException;
import org.codehaus.jackson.map.JsonSerializer;
import org.codehaus.jackson.map.SerializerProvider;
@SuppressWarnings("unchecked")
public class DefaultRumenSerializer extends JsonSerializer<DataType>
