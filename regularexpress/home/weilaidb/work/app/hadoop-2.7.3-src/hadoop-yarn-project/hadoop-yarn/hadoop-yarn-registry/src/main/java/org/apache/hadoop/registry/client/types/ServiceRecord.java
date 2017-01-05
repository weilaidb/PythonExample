package org.apache.hadoop.registry.client.types;
import com.google.common.base.Preconditions;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.registry.client.exceptions.InvalidRecordException;
import org.codehaus.jackson.annotate.JsonAnyGetter;
import org.codehaus.jackson.annotate.JsonAnySetter;
import org.codehaus.jackson.map.annotate.JsonSerialize;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
@InterfaceAudience.Public
@InterfaceStability.Evolving
@JsonSerialize(include = JsonSerialize.Inclusion.NON_NULL)
public class ServiceRecord implements Cloneable {
public static final String RECORD_TYPE = "JSONServiceRecord";
public String type = RECORD_TYPE;
public String description;
private Map<String, String> attributes = new HashMap<String, String>(4);
public List<Endpoint> external = new ArrayList<Endpoint>();
public List<Endpoint> internal = new ArrayList<Endpoint>();
public ServiceRecord()
public ServiceRecord(ServiceRecord that)
public void addExternalEndpoint(Endpoint endpoint)
public void addInternalEndpoint(Endpoint endpoint)
public Endpoint getInternalEndpoint(String api)
public Endpoint getExternalEndpoint(String api)
@JsonAnySetter
public void set(String key, Object value)
@JsonAnyGetter
public Map<String, String> attributes()
public String get(String key)
public String get(String key, String defVal)
private Endpoint findByAPI(List<Endpoint> list,  String api)
@Override
public String toString()
