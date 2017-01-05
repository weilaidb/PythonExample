package org.apache.hadoop.tools.rumen.state;
import java.io.IOException;
import org.apache.hadoop.tools.rumen.state.StatePool.StatePair;
import org.codehaus.jackson.JsonParser;
import org.codehaus.jackson.JsonProcessingException;
import org.codehaus.jackson.map.DeserializationContext;
import org.codehaus.jackson.map.ObjectMapper;
import org.codehaus.jackson.map.deser.std.StdDeserializer;
import org.codehaus.jackson.node.ObjectNode;
public class StateDeserializer extends StdDeserializer<StatePair>
