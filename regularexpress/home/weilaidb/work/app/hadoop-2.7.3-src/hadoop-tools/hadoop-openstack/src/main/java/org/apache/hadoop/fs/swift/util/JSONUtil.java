package org.apache.hadoop.fs.swift.util;
import org.apache.hadoop.fs.swift.exceptions.SwiftJsonMarshallingException;
import org.codehaus.jackson.JsonGenerationException;
import org.codehaus.jackson.map.JsonMappingException;
import org.codehaus.jackson.map.ObjectMapper;
import org.codehaus.jackson.map.type.CollectionType;
import org.codehaus.jackson.type.TypeReference;
import java.io.IOException;
import java.io.StringWriter;
import java.io.Writer;
public class JSONUtil
