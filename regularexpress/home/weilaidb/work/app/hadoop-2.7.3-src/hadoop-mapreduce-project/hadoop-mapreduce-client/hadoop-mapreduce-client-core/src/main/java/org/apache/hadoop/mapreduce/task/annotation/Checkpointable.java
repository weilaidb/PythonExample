package org.apache.hadoop.mapreduce.task.annotation;
import java.lang.annotation.Documented;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@Documented
@Target(ElementType.TYPE)
@Retention(RetentionPolicy.RUNTIME)
@InterfaceAudience.Public
@InterfaceStability.Evolving
public @interface Checkpointable
