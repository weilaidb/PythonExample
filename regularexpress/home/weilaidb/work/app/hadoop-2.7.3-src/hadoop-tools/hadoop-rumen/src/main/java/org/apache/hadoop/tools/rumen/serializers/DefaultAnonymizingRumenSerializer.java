package org.apache.hadoop.tools.rumen.serializers;
import java.io.IOException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.tools.rumen.datatypes.AnonymizableDataType;
import org.apache.hadoop.tools.rumen.state.StatePool;
import org.codehaus.jackson.JsonGenerator;
import org.codehaus.jackson.JsonProcessingException;
import org.codehaus.jackson.map.JsonSerializer;
import org.codehaus.jackson.map.SerializerProvider;
@SuppressWarnings("unchecked")
public class DefaultAnonymizingRumenSerializer
extends JsonSerializer<AnonymizableDataType>
